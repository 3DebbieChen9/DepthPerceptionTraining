using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class TestingModeManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public TestingUIManager UIManager;
    [SerializeField]
    private EvaluationManager evaluationManager;
    [SerializeField]
    public CoachManager coachManager;

    [SerializeField]
    private Timer reactionTimer;
    [SerializeField]
    private Timer readyTimer;
    
    [SerializeField]
    private TestingState curState = TestingState.idle;

    [SerializeField]
    private int targetNumberOfTasks;
    [SerializeField]
    public int curUnitNum;
    [SerializeField]
    public TestResult myTestResult;
    [SerializeField]
    public UnitResult curUnitResult;
    [SerializeField]
    private bool reactionOverTime = false;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.UIManager == null) {
            this.UIManager = this.gameObject.GetComponent<TestingUIManager>();
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
        this.reactionTimer = new Timer(false, false, this.mainManager.mySettingInfo.testingModeSetting.timeLimit, 0.0f);
        this.readyTimer = new Timer(false, true, this.mainManager.mySettingInfo.testingModeSetting.readyTime, this.mainManager.mySettingInfo.testingModeSetting.readyTime);
        this.myTestResult = new TestResult();
        this.curUnitResult = new UnitResult();
        this.testingSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.mainManager.changeScene("TestingScene");
        }

        this.mainManager.sceneOrigin.transform.position = this.mainManager.sceneOriginPosition;
        this.mainManager.sceneOrigin.transform.rotation = this.mainManager.sceneOriginRotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curState == TestingState.idle) { 
            if(this.evaluationManager.userIsAtOrigin) {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                    this.curState = TestingState.begin;
                    // [----] UI: Close Welcome View
                    this.UIManager.closeStartCanvas();
                }
            }
        }
        // 測試進行中，判斷是否在中心點
        if (this.curState == TestingState.begin) {
            // [----] UI: Make sure the Ready View is active
            this.UIManager.openReadyCanvas();
            if(this.evaluationManager.userIsAtOrigin) {
                this.curState = TestingState.ready;
                this.coachManager.moveToInitialPosition();
                this.readyStart();
            }
            else {
                // [----] UI: Please move to the center.
                this.UIManager.showMoveToCenter();
            }
        }

        // [TODO] 倒數階段中，但是使用者不在中心了
        if (this.curState == TestingState.ready && !this.evaluationManager.userIsAtOrigin) {
            this.UIManager.showMoveToCenter();
            this.readyTimer.ResetTimer();
            this.curState = TestingState.begin;
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn) {
            // [----] UI: Ready View, Countdown
            this.UIManager.readyCountdownView(this.readyTimer.timeLeft, this.readyTimer.timeTarget);
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.2f) {
                // [----] UI: Unit x start!!!
                this.UIManager.readyStartView(this.curUnitNum);
                this.callClearCoachColor();
            } 
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();

                this.curState = TestingState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                this.evaluationManager.setStartingPoint(this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position, this.mainManager.sceneOriginRotation);
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", true);
                this.coachManager.randomMovement();
                this.evaluationManager.coachMovingDirection = this.coachManager.coachMovingDirection;

                this.reactionTimer.StartTimer();

                // [----] UI: Close Every UI (Initialize the UI), Start the unit
                this.UIManager.closeReadyCanvas();
                this.UIManager.closeResultCanvas();
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn) {
            this.reactionTimer.timeLeft += Time.deltaTime;
            if (this.reactionTimer.timeLeft >= this.reactionTimer.timeTarget) {
                this.evaluationManager.isDuringTheUnit = false;
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);
                this.unitOver();
                this.reactionOverTime = true;
                this.reactionTimer.ResetTimer();
            }
        }
    }

    void testingSceneInitialized() {
        this.curState = TestingState.idle;

        this.targetNumberOfTasks = this.mainManager.mySettingInfo.testingModeSetting.targetNumberOfTasks;
        this.readyTimer.timeLeft = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        this.readyTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        this.reactionTimer.timeLeft = 0.0f;
        this.reactionTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.timeLimit;
        this.curUnitNum = 1;

        this.myTestResult.reset();
        this.myTestResult.numberOfTasks = this.targetNumberOfTasks;
        this.curUnitResult.reset();
        this.reactionOverTime = false;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();

        this.evaluationManager.evaluationStatusInitialize();

        // [----] UI: Welcome View
        this.UIManager.welcomToTestingMode(this.targetNumberOfTasks);
        this.UIManager.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }

    public void unitOver() {
        this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);

        this.reactionTimer.timerOn = false;
        if (this.reactionOverTime) {
            this.reactionOverTime = false;
            
            this.curUnitResult.isOverTime = true;
            this.curUnitResult.reactionTime = -1.0f;
            this.curUnitResult.score = 0;

            this.myTestResult.numberOfOverTime++;
            // [----] UI: Reaction Over Time View
            List<string> commentList = new List<string>();
            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, commentList, this.curUnitResult.isOverTime);
        }
        else {
            this.curUnitResult.isOverTime = false;
            this.curUnitResult.reactionTime = this.reactionTimer.timeLeft;
            UnitResultComment unitResultComment = this.evaluationManager.getScoreComment();
            this.curUnitResult.score = unitResultComment.score;

            this.myTestResult.totalReactionTime += this.curUnitResult.reactionTime;
            this.myTestResult.totalScore += this.curUnitResult.score;
            // [----] UI: Reaction Time View
            this.UIManager.unitResultView(this.curUnitNum, this.curUnitResult.score, this.curUnitResult.reactionTime, unitResultComment.comments, this.curUnitResult.isOverTime);
        }

        // [----] JSON: Save Unit Result
        this.curUnitResult.unitNum = this.curUnitNum;
        this.mainManager.saveToJSON_unitResult(this.curUnitResult, this.curUnitNum);
        this.myTestResult.addUnitResult(this.curUnitResult);
        this.curUnitResult.reset();

        if (this.curUnitNum == this.targetNumberOfTasks) {
            this.curState = TestingState.result;
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
            // [----] JSON: Save Final Result
            this.mainManager.saveToJSON_testResult(this.myTestResult);
        }
        else {
            this.curState = TestingState.begin;
            this.curUnitNum++;
            // [TEST] Whether the user won't hit user
            // this.coachManager.invokeTargetMoveToInitial(0.5f);
        }
    }

    public void readyStart() {
        Invoke("callClearCoachColor", this.mainManager.mySettingInfo.testingModeSetting.readyTime / 3.0f);

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

    public void callClearCoachColor() {
        this.coachManager.coachStickman.GetComponent<CoachRenderManager>().clearCoachColor();
    }

    private void callCloseCoachAvatar() {
        this.coachManager.coachStickman.SetActive(false);
    }
}
