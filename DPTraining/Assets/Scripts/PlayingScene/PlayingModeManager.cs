using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PlayingModeManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public PlayingUIManager UIManager;
    [SerializeField]
    private EvaluationManager evaluationManager;
    [SerializeField]
    public CoachManager coachManager;

    [SerializeField]
    private Timer reactionTimer;
    [SerializeField]
    private Timer readyTimer;
    [SerializeField]
    private Timer tentativeTimer;
    
    [SerializeField]
    private PlayingState curState = PlayingState.idle;

    [SerializeField]
    private int targetNumberOfTasks;
    [SerializeField]
    public int curUnitNum;
    [SerializeField]
    public TotalUnitResult myTestResult;
    [SerializeField]
    public UnitResult curUnitResult;
    [SerializeField]
    private bool reactionOverTime = false;

    [SerializeField]
    public GameObject depthCueManager;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.UIManager == null) {
            this.UIManager = this.gameObject.GetComponent<PlayingUIManager>();
        }
        if (this.evaluationManager == null) {
            this.evaluationManager = this.gameObject.GetComponent<EvaluationManager>();
        }
        if (this.coachManager == null) {
            this.coachManager = this.gameObject.GetComponent<CoachManager>();
        }    
    }
    // Start is called before the first frame update
    void Start()
    {
        float readyTime;
        switch (this.mainManager.curSystemMode) {
            case SystemMode.TestingMode:
                readyTime = this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime;
                break;
            case SystemMode.TrainingMode:
            case SystemMode.TrainingMode_LineCue:
            case SystemMode.TrainingMode_SphereCue_v1:
            case SystemMode.TrainingMode_SphereCue_v2:
            case SystemMode.TrainingMode_SphereCue_v3:
                readyTime = this.mainManager.mySettingInfo.playingModeSetting.trainingReadyTime;
                break;
            default:
                readyTime = 0.0f;
                break;
        }
        this.reactionTimer = new Timer(false, false, this.mainManager.mySettingInfo.playingModeSetting.unitTimeLimit, 0.0f);
        this.readyTimer = new Timer(false, true, readyTime, readyTime);
        float firstTentativeTime  = UnityEngine.Random.Range(this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMin, this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMax);
        this.tentativeTimer = new Timer(false, true, firstTentativeTime, firstTentativeTime);
        this.myTestResult = new TotalUnitResult();
        this.curUnitResult = new UnitResult();
        this.testingSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        this.depthCueRender();

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            switch (this.mainManager.curSystemMode) {
                case SystemMode.TestingMode:
                    this.mainManager.changeScene("TestingScene");
                    break;
                case SystemMode.TrainingMode:
                case SystemMode.TrainingMode_LineCue:
                case SystemMode.TrainingMode_SphereCue_v1:
                case SystemMode.TrainingMode_SphereCue_v2:
                case SystemMode.TrainingMode_SphereCue_v3:
                    this.mainManager.changeScene("TrainingScene");
                    break;
                default:
                    break;
            }
        }

        this.mainManager.sceneOrigin.transform.position = this.mainManager.sceneOriginPosition;
        this.mainManager.sceneOrigin.transform.rotation = this.mainManager.sceneOriginRotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curState == PlayingState.idle) { 
            if(this.evaluationManager.userIsAtOrigin) {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                    this.curState = PlayingState.begin;
                    // [----] UI: Close Welcome View
                    this.UIManager.closeStartCanvas();
                }
            }
        }
        // 測試進行中，判斷是否在中心點
        if (this.curState == PlayingState.begin) {
            // [----] UI: Make sure the Ready View is active
            this.UIManager.openReadyCanvas();
            if(this.evaluationManager.userIsAtOrigin) {
                this.curState = PlayingState.ready;
                if (this.coachManager.coachMovingDirection == MovingDirection.Backward) {
                    this.coachManager.moveToInitialPosition();
                }
                this.readyStart();
            }
            else {
                // [----] UI: Please move to the center.
                this.UIManager.showMoveToCenter();
            }
        }

        // 倒數階段中，但是使用者不在中心了
        if (this.curState == PlayingState.ready && !this.evaluationManager.userIsAtOrigin) {
            this.UIManager.showMoveToCenter();
            this.readyTimer.ResetTimer();
            this.curState = PlayingState.begin;
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn) {
            // [----] UI: Ready View, Countdown
            this.UIManager.readyCountdownView(this.readyTimer.timeLeft, this.readyTimer.timeTarget);
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.2f) {
                // [----] UI: Unit x start!!!
                this.UIManager.readyStartView(this.curUnitNum);
                
                // this.evaluationManager.isHitTrigger = false;
                this.clearPunchMarker();
            } 
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();
                this.curState = PlayingState.tentative;
                this.coachManager.coachAnimator.SetBool("isTentative", true);
                this.tentativeTimer.StartTimer();

                Vector3 tmp = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
                tmp.y = this.mainManager.sceneOriginPosition.y;
                this.evaluationManager.setStartingPoint(tmp, this.mainManager.sceneOriginRotation);
                
                // [----] UI: Close Every UI (Initialize the UI), Start the unit
                this.UIManager.closeReadyCanvas();
                this.UIManager.closeResultCanvas();
            }
        }

        if (this.tentativeTimer.timerOn) {
            this.tentativeTimer.timeLeft -= Time.deltaTime;
            if (this.tentativeTimer.timeLeft <= 0.0f) {
                this.tentativeTimer.timeTarget = UnityEngine.Random.Range(this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMin, this.mainManager.mySettingInfo.playingModeSetting.tentativeTimeMax);
                this.tentativeTimer.timeLeft = this.tentativeTimer.timeTarget;
                this.tentativeTimer.ResetTimer();

                this.curState = PlayingState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                // this.evaluationManager.setStartingPoint(this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position, this.mainManager.sceneOriginRotation);
                this.coachManager.coachAnimator.SetBool("isTentative", false);
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", true);
                this.coachManager.randomMovement(this.mainManager.mySelectionInfo.selectedLevel);
                
                this.curUnitResult.reset();
                this.evaluationManager.evaluationStatusInitialize();
                this.evaluationManager.coachMovingDirection = this.coachManager.coachMovingDirection;

                this.reactionTimer.StartTimer();                
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn) {
            this.reactionTimer.timeLeft += Time.deltaTime;
            if (this.reactionTimer.timeLeft >= this.reactionTimer.timeTarget) {
                this.evaluationManager.isDuringTheUnit = false;
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);
                this.setPunchMarker();
                this.unitOver();
                this.reactionOverTime = true;
                this.reactionTimer.ResetTimer();
            }
        }
    }

    void testingSceneInitialized() {
        this.curState = PlayingState.idle;

        this.targetNumberOfTasks = this.mainManager.mySettingInfo.playingModeSetting.targetNumberOfTasks;
        this.readyTimer.timeLeft = this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime;
        this.readyTimer.timeTarget = this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime;
        this.reactionTimer.timeLeft = 0.0f;
        this.reactionTimer.timeTarget = this.mainManager.mySettingInfo.playingModeSetting.unitTimeLimit;
        this.curUnitNum = 1;

        this.myTestResult.reset();
        this.myTestResult.numberOfTasks = this.targetNumberOfTasks;
        this.curUnitResult.reset();
        this.reactionOverTime = false;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();

        this.evaluationManager.evaluationStatusInitialize();

        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(false);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(false);

        // [----] UI: Welcome View
        this.UIManager.welcomToTestingMode(this.targetNumberOfTasks);
        // this.UIManager.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }

    public void unitOver() {
        this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);

        this.reactionTimer.timerOn = false;
        UnitResultComment unitResultComment = this.evaluationManager.getScoreComment();
        this.curUnitResult.score = unitResultComment.score;
        bool trainMode = this.mainManager.curSystemMode == SystemMode.TestingMode ? false : true;

        if (this.reactionOverTime) {
            this.reactionOverTime = false;
            
            this.curUnitResult.isOverTime = true;
            this.curUnitResult.reactionTime = -1.0f;
            this.curUnitResult.score = 0;

            this.myTestResult.numberOfOverTime++;
            // [----] UI: Reaction Over Time View
            
            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, unitResultComment.comments, this.curUnitResult.isOverTime, trainMode);
        }
        else {
            this.curUnitResult.isOverTime = false;
            this.curUnitResult.reactionTime = this.reactionTimer.timeLeft;
            
            this.myTestResult.totalReactionTime += this.curUnitResult.reactionTime;
            this.myTestResult.totalScore += this.curUnitResult.score;
            // [----] UI: Reaction Time View
            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, unitResultComment.comments, this.curUnitResult.isOverTime, trainMode);
        }

        // [----] JSON: Save Unit Result
        this.curUnitResult.unitNum = this.curUnitNum;
        this.mainManager.saveToJSON_unitResult(this.curUnitResult, this.curUnitNum);
        this.myTestResult.addUnitResult(this.curUnitResult);
        this.curUnitResult.reset();

        if (this.curUnitNum == this.targetNumberOfTasks) {
            this.curState = PlayingState.result;
            int timeUsefulCount = this.targetNumberOfTasks - this.myTestResult.numberOfOverTime;
            if (timeUsefulCount == 0) {
                this.myTestResult.averageReactionTime = -1.0f;
            }
            else {
                this.myTestResult.averageReactionTime = this.myTestResult.totalReactionTime / timeUsefulCount;
            }

            Invoke("callCloseCoachAvatar", 2.0f);
            // [----] UI: Result View
            this.UIManager.finalResultView(this.myTestResult.totalScore, this.myTestResult.averageReactionTime, this.myTestResult.numberOfMovingCorrectly, this.myTestResult.numberOfReacting, this.myTestResult.numberOfSuccess, this.myTestResult.numberOfOverTime);
            this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(true);
            this.mainManager.OVRControllerRayRight.RayInteractorSwitch(true);
            // [----] JSON: Save Final Result
            this.mainManager.saveToJSON_testResult(this.myTestResult);
        }
        else {
            this.curState = PlayingState.begin;
            this.curUnitNum++;
            if (this.coachManager.coachMovingDirection == MovingDirection.Forward) {
                this.coachManager.invokeTargetMoveToInitial(0.5f);
            }   
        }
    }

    public void readyStart() {
        Invoke("callClearPunchMarker", this.mainManager.mySettingInfo.playingModeSetting.testingReadyTime / 3.0f);

        if (this.curUnitNum <= this.targetNumberOfTasks && !this.reactionTimer.timerOn && !this.readyTimer.timerOn) {
            // this.curUnitNum++;
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();
            this.evaluationManager.evaluationStatusInitialize();
            this.readyTimer.StartTimer();
            // [----] UI: Ready View
            this.UIManager.readyTitleView(this.curUnitNum);
        }
    }

    public void callClearPunchMarker() {
        this.clearPunchMarker();
    }

    public void clearPunchMarker () {
        foreach (Transform child in this.evaluationManager.gameObject.transform) {
            if (child.gameObject.tag == "LightBall") {
                child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
            }
        }
    }

    private void callCloseCoachAvatar() {
        this.coachManager.coachAvatar.SetActive(false);
    }

    public void setPunchMarker() {
        Transform rightLightBall = this.mainManager.OVRBoxingRight.transform.Find("LightBallOnPlayer(Clone)");
        if (rightLightBall) {
            rightLightBall.gameObject.GetComponent<BallCueOnPlayer>().Pause(this.evaluationManager.gameObject);
            rightLightBall.gameObject.GetComponent<BallCueOnPlayer>().setScale(0.1f);
        }
        Transform leftLightBall = this.mainManager.OVRBoxingLeft.transform.Find("LightBallOnPlayer(Clone)");
        if (leftLightBall) {
            leftLightBall.gameObject.GetComponent<BallCueOnPlayer>().Pause(this.evaluationManager.gameObject);
            leftLightBall.gameObject.GetComponent<BallCueOnPlayer>().setScale(0.1f);
        }
    }

    void depthCueRender() {
        switch (this.mainManager.curSystemMode) {
            case SystemMode.TrainingMode_LineCue:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction) {
                    this.depthCueManager.GetComponent<LineCue>().renderLineCue();
                }
                else {
                    this.depthCueManager.GetComponent<LineCue>().eraseLineCue();
                }
                break;
            case SystemMode.TrainingMode_SphereCue_v2:
            case SystemMode.TrainingMode_SphereCue_v3:
                if (this.curState == PlayingState.tentative || this.curState == PlayingState.reaction) {
                    this.depthCueManager.GetComponent<BallCueOnTarget>().renderBallCueOnTarget(this.evaluationManager.punchHand);
                }
                else {
                    this.depthCueManager.GetComponent<BallCueOnTarget>().eraseBallCueOnTarget();
                }
                break;
            default:
                break;
        }
    }
}
