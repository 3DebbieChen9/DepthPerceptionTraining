using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class TestingModeManager : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;
    [SerializeField]
    private TestingUIManager UIManager;
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
        this.reactionTimer = new Timer(false, 0.0f, 0.0f);
        this.readyTimer = new Timer(false, this.mainManager.mySettingInfo.testingModeSetting.readyTime, 0.0f);
        this.myTestResult = new TestResult();
        this.curUnitResult = new UnitResult();
        this.testingSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        this.mainManager.sceneOrigin.transform.position = this.mainManager.sceneOriginPosition;
        this.mainManager.sceneOrigin.transform.rotation = this.mainManager.sceneOriginRotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curState == TestingState.idle) { 
            if(this.evaluationManager.userIsAtOrigin) {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                    this.curState = TestingState.begin;
                    // [TODO] UI: Start Countdown (Ready View), Close Welcome View
                }
            }
        }
        // 測試進行中，判斷是否在中心點
        if (this.curState == TestingState.begin) {
            // [TODO] UI: Make sure the Ready View is active

            if(this.evaluationManager.userIsAtOrigin) {
                // [TODO] UI: Ready View, Countdown
                this.curState = TestingState.ready;
                this.readyStart();
            }
            else {
                // [TODO] UI: Please move to the center.
            }
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn) {
            // [TODO] UI: Ready View, Countdown
            // this.systemManager.uiTesting.readyCountdown_text.text = this.readyTimer.timeLeft.ToString("F0");
            // this.systemManager.uiTesting.readyCountdown_image.fillAmount = this.readyTimer.timeLeft / this.readyTimer.timeTarget;
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.2f) {
                // [TODO] UI: Unit x start!!!
                // this.systemManager.uiTesting.readyUnit_text.text = "Unit " + this.curUnitNum.ToString() + " start!!!";
            } 
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();

                this.curState = TestingState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                this.coachManager.coachAnimator.SetBool("isDuringTheUnit", true);
                this.coachManager.randomMovement();

                this.reactionTimer.StartTimer();

                // [TODO] UI: Close Every UI (Initialize the UI), Start the unit
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn) {
            this.reactionTimer.timeLeft += Time.deltaTime;
            if (this.reactionTimer.timeLeft >= this.mainManager.mySettingInfo.testingModeSetting.timeLimit) {
                this.reactionTimer.ResetTimer();
                if (this.evaluationManager.isDuringTheUnit) {
                    this.evaluationManager.isDuringTheUnit = false;
                    this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);
                    this.unitOver();
                }
                this.reactionOverTime = true;
            }
        }
    }

    void testingSceneInitialized() {
        
        this.curState = TestingState.idle;
        // this.evaluationManager.startingPosition = this.systemManager.sceneOrigin_poisition;
        this.targetNumberOfTasks = this.mainManager.mySettingInfo.testingModeSetting.targetNumberOfTasks;
        this.readyTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        this.curUnitNum = 0;

        this.myTestResult.reset();
        this.myTestResult.numberOfTasks = this.targetNumberOfTasks;
        this.curUnitResult.reset();
        this.reactionOverTime = false;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();

        // this.evaluationManager.evaluationStatusInitial();

        // [TODO] UI: Welcome View, Setting Panel on the wall
    }

    public void unitOver() {
        this.coachManager.coachAnimator.SetBool("isDuringTheUnit", false);
        // [TODO] UI: Unit Over View
        this.reactionTimer.timerOn = false;
        if (this.reactionOverTime) {
            this.reactionOverTime = false;
            this.myTestResult.numberOfOverTime++;
            this.curUnitResult.isOverTime = true;
            this.curUnitResult.reactionTime = -1.0f;
            // [TODO] UI: Reaction Over Time View
        }
        else {
            this.curUnitResult.isOverTime = false;
            this.curUnitResult.reactionTime = this.reactionTimer.timeLeft;
            this.curUnitResult.score = 0; // this.evaluationManager.getScore();
            this.myTestResult.totalReactionTime += this.curUnitResult.reactionTime;
            this.myTestResult.totalScore += this.curUnitResult.score;;
            // [TODO] UI: Reaction Time View
            
        }

        // [TODO] JSON: Save Unit Result
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

            this.coachManager.coachStickman.SetActive(false);
            // [TODO] UI: Result View
            // [TODO] JSON: Save Final Result
        }
        else {
            this.curState = TestingState.begin;
        }
    }

    public void readyStart() {
        Invoke("callClearCoachColor", this.mainManager.mySettingInfo.testingModeSetting.readyTime / 3.0f);

        if (this.curUnitNum < this.targetNumberOfTasks && !this.reactionTimer.timerOn && !this.readyTimer.timerOn) {
            this.curUnitNum++;
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();

            // this.evaluationManager.evaluationStatusInitial();
            
            this.readyTimer.StartTimer();
            // [TODO] UI: Ready View
        }
    }

    private void callClearCoachColor() {
        this.coachManager.coachStickman.GetComponent<CoachRenderManager>().clearCoachColor();
    }
}
