using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PlayingModeManager : MonoBehaviour
{
    public MainManager mainManager;
    public PlayingUIManager UIManager;
    [SerializeField]
    private EvaluationManager evaluationManager;
    public CoachManager coachManager;

    [SerializeField]
    private Timer reactionTimer;
    [SerializeField]
    private Timer readyTimer;
    [SerializeField]
    private Timer tentativeTimer;

    public PlayingState curState = PlayingState.idle;

    [SerializeField]
    private int targetNumberOfTasks;
    public int curUnitNum;
    public TotalUnitResult myTestResult;
    public UnitResult curUnitResult;
    private bool unitIsOver = false;

    public GameObject depthCueManager;

    [SerializeField]
    private GameObject ballWhenHitPrefab;

    [SerializeField]
    private List<string> voiceCommentList;

    [SerializeField]
    private MovingDirection[] controlledDirectionArray;
    public bool visualAidIsUpdating = false;

    [SerializeField] public float reactionTimeStandard = 1.0f;

    void Awake()
    {
        if (this.mainManager == null)
        {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.UIManager == null)
        {
            this.UIManager = this.gameObject.GetComponent<PlayingUIManager>();
        }
        if (this.evaluationManager == null)
        {
            this.evaluationManager = this.gameObject.GetComponent<EvaluationManager>();
        }
        if (this.coachManager == null)
        {
            this.coachManager = this.gameObject.GetComponent<CoachManager>();
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        this.reactionTimer = new Timer(false, false, 0.0f, 0.0f);
        this.readyTimer = new Timer(false, true, 0.0f, 0.0f);
        this.tentativeTimer = new Timer(false, true, 0.0f, 0.0f);
        this.myTestResult = new TotalUnitResult();
        this.curUnitResult = new UnitResult();
        this.testingSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        this.depthCueRender();

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch))
        {
            switch (this.mainManager.curSystemMode)
            {
                case SystemMode.TestingMode:
                    this.mainManager.changeScene("TestingScene");
                    break;
                default:
                    this.mainManager.changeScene("TrainingScene");
                    break;
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch))
        {
            this.skipToFinalButton();
        }

        this.mainManager.sceneOrigin.transform.position = this.mainManager.sceneOriginPosition;
        this.mainManager.sceneOrigin.transform.rotation = this.mainManager.sceneOriginRotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curState == PlayingState.idle)
        {
            if (this.evaluationManager.userIsAtOrigin)
            {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch))
                {
                    this.curState = PlayingState.begin;
                    // [----] UI: Close Welcome View
                    this.UIManager.closeStartCanvas();
                }
            }
        }
        // 測試進行中，判斷是否在中心點
        if (this.curState == PlayingState.begin)
        {
            // [----] UI: Make sure the Ready View is active
            this.UIManager.openReadyCanvas();
            if (this.evaluationManager.userIsAtOrigin)
            {
                this.curState = PlayingState.ready;
                if (this.coachManager.coachMovingDirection == MovingDirection.Backward)
                {
                    this.coachManager.moveToInitialPosition();
                }
                this.readyStart();
            }
            else
            {
                // [----] UI: Please move to the center.
                this.UIManager.showMoveToCenter();
            }
        }

        // 倒數階段中，但是使用者不在中心了
        if (this.curState == PlayingState.ready && !this.evaluationManager.userIsAtOrigin)
        {
            this.UIManager.showMoveToCenter();
            this.readyTimer.ResetTimer();
            this.curState = PlayingState.begin;
        }

        // 播放評語中
        if (this.curState == PlayingState.comment)
        {
            if (!AudioManager.instance.voiceSource.isPlaying)
            {
                if (this.voiceCommentList.Count > 0)
                {
                    string tmp = this.voiceCommentList[0];
                    this.voiceCommentList.RemoveAt(0);
                    AudioManager.instance.PlayVoiceComment(tmp);
                }
                else
                {
                    this.playVoiceCommentCompleted();
                }
            }
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn)
        {
            this.UIManager.readyCountdownView(this.readyTimer.timeLeft, this.readyTimer.timeTarget);
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.2f)
            {
                this.UIManager.readyStartView(this.curUnitNum);
                this.clearPunchMarker();
            }
            if (this.readyTimer.timeLeft <= 0.0f)
            {
                this.readyTimer.ResetTimer();
                this.curState = PlayingState.tentative;
                this.coachManager.coachAnimator.SetBool("isTentative", true);
                this.tentativeTimer.StartTimer();

                Vector3 tmp = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
                tmp.y = this.mainManager.sceneOriginPosition.y;
                this.evaluationManager.setStartingPoint(tmp, this.mainManager.sceneOriginRotation);

                this.UIManager.closeReadyCanvas();
                this.UIManager.closeResultCanvas();
            }
        }

        if (this.tentativeTimer.timerOn)
        {
            this.visualAidIsUpdating = true;
            this.tentativeTimer.timeLeft -= Time.deltaTime;
            if (this.tentativeTimer.timeLeft <= 0.0f)
            {
                this.tentativeTimer.timeTarget = UnityEngine.Random.Range(this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMin, this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMax);
                this.tentativeTimer.timeLeft = this.tentativeTimer.timeTarget;
                this.tentativeTimer.ResetTimer();

                this.curState = PlayingState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                this.coachManager.coachAnimator.SetBool("isTentative", false);
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", true);
                this.unitIsOver = false;

                this.coachManager.movement(this.mainManager.mySelectionInfo.selectedSpeed, this.controlledDirectionArray[this.curUnitNum - 1]);

                this.curUnitResult.reset();
                this.evaluationManager.evaluationStatusInitialize();
                this.evaluationManager.coachMovingDirection = this.coachManager.coachMovingDirection;

                this.reactionTimer.StartTimer();
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn)
        {
            this.reactionTimer.timeLeft += Time.deltaTime;
            if (this.reactionTimer.timeLeft >= this.reactionTimer.timeTarget)
            {
                this.evaluationManager.isDuringTheUnit = false;
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);
                // this.setPunchMarker();
                this.unitOver();
            }

            if (this.reactionTimer.timeLeft >= this.reactionTimeStandard)
            {
                if (!AudioManager.instance.aidSource.isPlaying)
                {
                    Debug.Log("[Audio] Playing Ticking");
                    AudioManager.instance.PlayAid("Ticking");
                    AudioManager.instance.ModifyAid(2.0f);
                }
                // else
                // {
                //     AudioManager.instance.ModifyAid(1.5f);
                // }
            }
        }
    }

    void testingSceneInitialized()
    {
        this.curState = PlayingState.idle;

        this.targetNumberOfTasks = this.mainManager.mySettingInfo.playingModeSetting.targetNumberOfTasks;

        float readyTime;
        float timeLimit;
        switch (this.mainManager.curSystemMode)
        {
            case SystemMode.TestingMode:
                readyTime = this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime;
                timeLimit = this.mainManager.mySettingInfo.playingModeSetting.testingUnitTimeLimit;
                break;
            default:
                readyTime = this.mainManager.mySettingInfo.playingModeSetting.trainingReadyTime;
                timeLimit = this.mainManager.mySettingInfo.playingModeSetting.trainingUnitTimeLimit;
                break;
        }

        float firstTentativeTime = UnityEngine.Random.Range(this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMin, this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMax);
        this.tentativeTimer.timeLeft = firstTentativeTime;
        this.tentativeTimer.timeTarget = firstTentativeTime;
        this.tentativeTimer.ResetTimer();
        this.readyTimer.timeLeft = readyTime;
        this.readyTimer.timeTarget = readyTime;
        this.readyTimer.ResetTimer();
        this.reactionTimer.timeLeft = 0.0f;
        this.reactionTimer.timeTarget = timeLimit;
        this.reactionTimer.ResetTimer();

        this.controlledDirectionArray = new MovingDirection[this.targetNumberOfTasks];
        int half = this.targetNumberOfTasks / 2;
        for (int i = 0; i < half; i++)
        {
            this.controlledDirectionArray[i] = MovingDirection.Forward;
        }
        for (int i = half; i < half + half; i++)
        {
            this.controlledDirectionArray[i] = MovingDirection.Backward;
        }
        if (half + half < this.targetNumberOfTasks)
        {
            if (this.mainManager.mySelectionInfo.selectedCoachDirection == MovingDirection.Random)
            {
                this.controlledDirectionArray[half + half] = (MovingDirection)UnityEngine.Random.Range(0, 2);
            }
            else
            {
                this.controlledDirectionArray[half + half] = this.mainManager.mySelectionInfo.selectedCoachDirection;
            }
        }
        string beforeShuffle = "";
        string afterShuffle = "";
        foreach (MovingDirection md in this.controlledDirectionArray)
        {
            beforeShuffle += md.ToString() + " | ";
        }
        Debug.Log($"Controlled Direction [Before]: {beforeShuffle}");
        this.controlledDirectionArray = this.controlledDirectionArray.OrderBy(x => UnityEngine.Random.value).ToArray();
        foreach (MovingDirection md in this.controlledDirectionArray)
        {
            afterShuffle += md.ToString() + " | ";
        }
        Debug.Log($"Controlled Direction [after]: {afterShuffle}");

        this.curUnitNum = 1;

        this.myTestResult.reset();
        this.myTestResult.numberOfTasks = this.targetNumberOfTasks;
        this.curUnitResult.reset();
        this.evaluationManager.evaluationStatusInitialize();

        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(false);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(false);

        if (this.mainManager.curSystemMode != SystemMode.TestingMode)
        {
            this.depthCueManager.GetComponent<LineCue>().eraseLineCue();
            this.depthCueManager.GetComponent<BallCueOnTarget>().eraseBallCueOnTarget();
        }

        this.clearPunchMarker();

        bool isTestingMode = this.mainManager.curSystemMode == SystemMode.TestingMode ? true : false;
        this.UIManager.welcomToTestingMode(this.targetNumberOfTasks, isTestingMode);
    }

    public void unitOver()
    {
        if (unitIsOver)
        {
            return;
        }
        unitIsOver = true;
        AudioManager.instance.StopAid();
        this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);

        this.reactionTimer.timerOn = false;
        bool reactionOverTime = this.reactionTimer.timeLeft >= this.reactionTimer.timeTarget ? true : false;
        UnitResultComment unitResultComment = this.evaluationManager.getScoreComment(reactionOverTime);
        this.curUnitResult.score = unitResultComment.score;
        bool trainMode = this.mainManager.curSystemMode == SystemMode.TestingMode ? false : true;

        if (reactionOverTime)
        {
            this.curUnitResult.isOverTime = true;
            this.curUnitResult.reactionTime = this.reactionTimer.timeLeft;
            this.curUnitResult.score = 0;

            this.myTestResult.numberOfOverTime++;

            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, unitResultComment.comments, this.curUnitResult.isOverTime, trainMode);
        }
        else
        {
            this.curUnitResult.isOverTime = false;
            this.curUnitResult.reactionTime = this.reactionTimer.timeLeft;

            this.myTestResult.totalReactionTime += this.curUnitResult.reactionTime;
            this.myTestResult.totalScore += this.curUnitResult.score;
            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, unitResultComment.comments, this.curUnitResult.isOverTime, trainMode);
        }

        this.curUnitResult.unitNum = this.curUnitNum;
        this.mainManager.saveToJSON_unitResult(this.curUnitResult, this.curUnitNum);
        this.myTestResult.addUnitResult(this.curUnitResult);

        if (this.curUnitNum == this.targetNumberOfTasks)
        {
            int timeUsefulCount = this.targetNumberOfTasks - this.myTestResult.numberOfOverTime;
            if (timeUsefulCount == 0)
            {
                this.myTestResult.averageReactionTime = -1.0f;
            }
            else
            {
                this.myTestResult.averageReactionTime = this.myTestResult.totalReactionTime / timeUsefulCount;
            }
        }
        this.curState = PlayingState.comment;
        this.determineTheVoiceComment();
    }

    private void determineTheVoiceComment()
    {
        if (this.mainManager.curSystemMode == SystemMode.TestingMode)
        {
            this.voiceCommentList.Clear();
            return;
        }

        if (this.curUnitResult.isOverTime)
        {
            this.voiceCommentList.Add("ReactionOverTime");
        }
        else
        {
            if (this.curUnitResult.reactionTime > this.mainManager.mySettingInfo.playingModeSetting.idealUnitTimeLimit)
            {
                this.voiceCommentList.Add("ReactionSuggestFaster");
            }

            if (this.curUnitResult.isMovingCorrectly && this.curUnitResult.isReach && this.curUnitResult.isStraight)
            {
                this.voiceCommentList.Add("Perfect");
            }
            else if (!this.curUnitResult.isMovingCorrectly && this.curUnitResult.isReach && this.curUnitResult.isStraight)
            {
                if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
                {
                    this.voiceCommentList.Add("MoveBackward");
                }
                else
                {
                    this.voiceCommentList.Add("MoveForward");
                }
            }
            else if (this.curUnitResult.isMovingCorrectly && !this.curUnitResult.isReach && this.curUnitResult.isStraight)
            {
                this.voiceCommentList.Add("ShoulderNotReach");
            }
            else if (this.curUnitResult.isMovingCorrectly && this.curUnitResult.isReach && !this.curUnitResult.isStraight)
            {
                this.voiceCommentList.Add("HandNotStraight");
            }
            else if (!this.curUnitResult.isMovingCorrectly && !this.curUnitResult.isReach && this.curUnitResult.isStraight)
            {
                if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
                {
                    this.voiceCommentList.Add("MoveBackward");
                }
                else
                {
                    this.voiceCommentList.Add("MoveForward");
                }
                this.voiceCommentList.Add("ShoulderNotReach");
            }
            else if (!this.curUnitResult.isMovingCorrectly && this.curUnitResult.isReach && !this.curUnitResult.isStraight)
            {
                if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
                {
                    this.voiceCommentList.Add("MoveBackward");
                }
                else
                {
                    this.voiceCommentList.Add("MoveForward");
                }
                this.voiceCommentList.Add("HandNotStraight");
            }
            else if (this.curUnitResult.isMovingCorrectly && !this.curUnitResult.isReach && !this.curUnitResult.isStraight)
            {
                this.voiceCommentList.Add("ShoulderNotReach");
                this.voiceCommentList.Add("HandNotStraight");
            }
            else if (!this.curUnitResult.isMovingCorrectly && !this.curUnitResult.isReach && !this.curUnitResult.isStraight)
            {
                if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
                {
                    this.voiceCommentList.Add("MoveBackward");
                }
                else
                {
                    this.voiceCommentList.Add("MoveForward");
                }
                this.voiceCommentList.Add("ShoulderNotReach");
                this.voiceCommentList.Add("HandNotStraight");
            }
        }
    }
    private void playVoiceCommentCompleted()
    {
        this.evaluationManager.startingPointSizeChange(false);

        AudioManager.instance.PlayVoiceComment("BackToCenter");
        this.curUnitResult.reset();
        this.voiceCommentList.Clear();
        if (this.curUnitNum == this.targetNumberOfTasks)
        {
            this.curState = PlayingState.result;
            if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
            {
                this.coachManager.invokeTargetMoveToInitial(0.7f);
            }
            Invoke("callCloseCoachAvatar", 2.0f);
            Invoke("callClearPunchMarker", 1.9f);
            this.UIManager.finalResultView(this.myTestResult.totalScore,
                                            this.myTestResult.averageReactionTime,
                                            this.myTestResult.numberOfMoving,
                                            this.myTestResult.numberOfPunching,
                                            this.myTestResult.numberOfMovingCorrectly,
                                            this.myTestResult.numberOfReach,
                                            this.myTestResult.numberOfSuccess,
                                            this.myTestResult.numberOfOverTime);
            this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(true);
            this.mainManager.OVRControllerRayRight.RayInteractorSwitch(true);
            this.mainManager.saveToJSON_testResult(this.myTestResult);
        }
        else
        {
            this.curUnitNum++;
            this.curState = PlayingState.begin;
            if (this.coachManager.coachMovingDirection == MovingDirection.Forward)
            {
                this.coachManager.invokeTargetMoveToInitial(0.7f);
            }
        }
    }

    private void readyStart()
    {
        Invoke("callClearPunchMarker", this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime / 3.0f);

        if (this.curUnitNum <= this.targetNumberOfTasks && !this.reactionTimer.timerOn && !this.readyTimer.timerOn)
        {
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();
            this.evaluationManager.evaluationStatusInitialize();
            this.readyTimer.StartTimer();
            this.UIManager.readyTitleView(this.curUnitNum);
        }
    }

    public void callClearPunchMarker()
    {
        this.clearPunchMarker();
    }

    public void clearPunchMarker()
    {
        GameObject[] hitMarker = GameObject.FindGameObjectsWithTag("BallWhenHit");
        foreach (GameObject marker in hitMarker)
        {
            GameObject.Destroy(marker);
        }
    }

    private void callCloseCoachAvatar()
    {
        this.coachManager.coachAvatar.SetActive(false);
    }

    public void setPunchMarker()
    {
        if (this.mainManager.curSystemMode == SystemMode.TestingMode)
        {
            return;
        }

        foreach (Transform child in this.coachManager.coachAvatar.transform)
        {
            if (child.gameObject.tag == "BallWhenHit")
            {
                return;
            }
        }

        switch (this.evaluationManager.punchHand)
        {
            case (Hand.Right):
                GameObject ball = Instantiate(this.ballWhenHitPrefab, this.mainManager.BoxingGloveEdgeRight.position, this.mainManager.BoxingGloveEdgeRight.rotation, this.evaluationManager.gameObject.transform);
                ball.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
                // ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.red);
                break;
            case (Hand.Left):
                ball = Instantiate(this.ballWhenHitPrefab, this.mainManager.BoxingGloveEdgeLeft.position, this.mainManager.BoxingGloveEdgeLeft.rotation, this.evaluationManager.gameObject.transform);
                ball.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
                // ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.red);
                break;
        }
    }

    void depthCueRender()
    {
        switch (this.mainManager.curSystemMode)
        {
            case SystemMode.TrainingMode_LineCue:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction)
                {
                    this.depthCueManager.GetComponent<LineCue>().renderLineCue(this.evaluationManager.punchHand);
                }
                else
                {
                    this.depthCueManager.GetComponent<LineCue>().eraseLineCue();
                }
                break;
            case SystemMode.TrainingMode_BallCue_onTarget:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction)
                {
                    this.depthCueManager.GetComponent<BallCueOnTarget>().renderBallCueOnTarget(this.evaluationManager.punchHand);
                }
                else
                {
                    this.depthCueManager.GetComponent<BallCueOnTarget>().eraseBallCueOnTarget();
                }
                break;
            case SystemMode.TrainingMode_BarCue:
            case SystemMode.TrainingMode_BarCue_withAim:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction || this.curState == PlayingState.comment)
                {
                    this.depthCueManager.GetComponent<BarCue>().barAidUpdate(this.visualAidIsUpdating);
                }
                else
                {
                    this.depthCueManager.GetComponent<BarCue>().closeBarAid();
                }
                break;
            case SystemMode.TrainingMode_CutoutCue:
            case SystemMode.TrainingMode_CutoutCue_withAim:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction || this.curState == PlayingState.comment)
                {
                    this.depthCueManager.GetComponent<CutoutCue>().cutoutAidUpdate(this.visualAidIsUpdating);
                }
                else
                {
                    // this.depthCueManager.GetComponent<CutoutCue>().cutoutAidUpdate();
                    this.depthCueManager.GetComponent<CutoutCue>().closeCutoutAid();
                }
                break;
            case SystemMode.TrainingMode_PowerBarCue:
            case SystemMode.TrainingMode_PowerBarCue_withAim:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction || this.curState == PlayingState.comment)
                {
                    this.depthCueManager.GetComponent<PowerBarCue>().powerBarUpdate(this.visualAidIsUpdating);
                }
                else
                {
                    this.depthCueManager.GetComponent<PowerBarCue>().closePowerBar();
                }
                break;
            default:
                break;
        }

        if (this.mainManager.curSystemMode == SystemMode.TrainingMode_BarCue_withAim ||
            this.mainManager.curSystemMode == SystemMode.TrainingMode_CutoutCue_withAim ||
            this.mainManager.curSystemMode == SystemMode.TrainingMode_PowerBarCue_withAim ||
            this.mainManager.curSystemMode == SystemMode.TrainingMode_AimCue)
        {
            if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction || this.curState == PlayingState.comment)
            {
                this.depthCueManager.GetComponent<AimCueOnTarget>().aimCueUpdate();
            }
            else
            {
                this.depthCueManager.GetComponent<AimCueOnTarget>().closeAimCueOnTarget();
            }
        }
    }

    void skipToFinalButton()
    {
        Invoke("callCloseCoachAvatar", 0.5f);
        Invoke("callClearPunchMarker", 0.5f);
        this.UIManager.finalButtonsCanvas.SetActive(true);
        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(true);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(true);
        AudioManager.instance.voiceSource.Stop();
    }
}
