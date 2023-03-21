using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestingModeManager : MonoBehaviour
{
    public enum TestLevel {
        level_0,
        level_1,
        level_2
    }

    public class Timer {
        public bool timerOn;
        public float timeTarget; // in seconds // count-up: timeTarget = 0.0f
        public float timeLeft;

        public Timer (bool _timerOn, float _timeTarget, float _timeLeft) {
            this.timerOn = _timerOn;
            this.timeTarget = _timeTarget;
            this.timeLeft = _timeLeft;
        }

        public void ResetTimer() {
            this.timerOn = false;
            this.timeLeft = this.timeTarget;
        }

        public void StartTimer() {
            this.timerOn = true;
        }
    }

    // Manager Scripts
    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public EvaluationManager evaluationManager;
    [SerializeField]
    public SceneBuilding sceneBuildingManager;
    [SerializeField]
    public TargetManager targetManager;
    
    // Testing Mode 初始固定不會再變化的變數
    [SerializeField]
    public int targetUnitNum;
    [SerializeField]
    public Timer reactionTimer = new Timer(false, 0.0f, 0.0f);
    [SerializeField]
    public Timer readyTimer = new Timer(false, 5.0f, 0.0f);

    
    public enum TestState {
        idle, // 剛進到 TestingMode Scene / 從頭開始
        begin, // 按下按鈕開始測試
        ready, // 準備階段(倒數計時)
        reaction, // unit中，等待反應結束
        result // 每個 unit 結束後的最終結果
    }

    // Testing Mode 會隨著測試進行而改變的變數
    [SerializeField]
    public TestState curTestState = TestState.idle;
    [SerializeField]
    public TestLevel curTestLevel = TestLevel.level_0;
    [SerializeField]
    public int curUnitNum = 0;
    [SerializeField]
    public bool reactionTimeOut = false;

    // Testing Mode Result
    [SerializeField]
    public int reactionTimeOutCount = 0;
    [SerializeField]
    public float totalReactionTime = 0.0f;
    [SerializeField]
    public int totalScore = 0;

    [SerializeField]
    public TargetRenderInitial m_targetRenderInitial;

    private bool isStarted = false;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        this.targetManager = GameObject.Find("TargetManager").GetComponent<TargetManager>();

        this.isStarted = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (this.systemManager != null && !this.isStarted) {
            this.testingModeInitial();
        }

        this.systemManager.sceneOrigin.transform.position = this.systemManager.sceneOrigin_poisition;
        this.systemManager.sceneOrigin.transform.rotation = this.systemManager.sceneOrigin_rotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curTestState == TestState.idle) { 
            if(this.evaluationManager.userIsAtOrigin) {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                    this.curTestState = TestState.begin;
                    this.systemManager.uiTesting.canvas_start.SetActive(false);
                    this.systemManager.uiFollowHead.EnableControllerInteractorVisual(false);
                }
            }
        }

        // 測試進行中，判斷是否在中心點
        if (this.curTestState == TestState.begin) {
            if (!this.systemManager.uiTesting.canvas_countdown.activeSelf) {
                this.systemManager.uiTesting.canvas_countdown.SetActive(true);
            }
            if(this.evaluationManager.userIsAtOrigin) {
                this.systemManager.uiTesting.readyUnit_text.text = "Ready for unit " + this.curUnitNum.ToString();
                this.curTestState = TestState.ready;
                this.readyStart();
            }
            else {
                this.systemManager.uiTesting.readyUnit_text.text = "Please move to the center.";
            }
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn) {
            this.systemManager.uiTesting.readyCountdown_text.text = this.readyTimer.timeLeft.ToString("F0");
            this.systemManager.uiTesting.readyCountdown_image.fillAmount = this.readyTimer.timeLeft / this.readyTimer.timeTarget;
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.2f) {
                this.systemManager.uiTesting.readyUnit_text.text = "Unit " + this.curUnitNum.ToString() + " start!!!";
            } 
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();

                this.curTestState = TestState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                this.targetManager.targetAnimator.SetBool("isDuringTheUnit", true);
                this.targetManager.randomTargetMovement(this.curTestLevel);

                this.reactionTimer.StartTimer();

                this.systemManager.uiTesting.canvas_countdown.SetActive(false);
                this.systemManager.uiTesting.canvas_result.SetActive(false);
                this.systemManager.uiTesting.resultDescription_text.text = "";

                this.systemManager.uiTesting.readyCountdown_image.fillAmount = 0;
                this.systemManager.uiTesting.readyCountdown_text.text = "";
                this.systemManager.uiTesting.readyUnit_text.text = "";
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn) {
            this.reactionTimer.timeLeft += Time.deltaTime;
            if (this.reactionTimer.timeLeft >= 5.0f) {
                this.reactionTimer.ResetTimer();
                if (this.evaluationManager.isDuringTheUnit) {
                    this.evaluationManager.isDuringTheUnit = false;
                    this.targetManager.targetAnimator.SetBool("isDuringTheUnit", false);
                    this.unitOver();
                }
                this.reactionTimeOut = true;
                Debug.Log("Unit " + this.curUnitNum.ToString() + " timeout");
            }
        }
    }

    public void testingModeInitial() {
        this.isStarted = true;

        this.evaluationManager.startingPosition = this.systemManager.sceneOrigin_poisition;
        this.systemManager.userInitialPosition.transform.position = this.systemManager.sceneOrigin_poisition;
        this.targetUnitNum = this.systemManager.mySettingInfo.targetUnitNum;
        this.readyTimer.timeTarget = this.systemManager.mySettingInfo.readyTime;

        this.curTestState = TestState.idle;
        this.curTestLevel = TestLevel.level_0;
        this.curUnitNum = 0;
        this.reactionTimeOutCount = 0;
        this.reactionTimeOut = false;
        this.totalReactionTime = 0.0f;
        this.totalScore = 0;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();

        this.evaluationManager.evaluationStatusInitial();

        this.systemManager.uiTesting.testingUI.SetActive(true);
        this.systemManager.uiTesting.canvas_start.SetActive(true);
        this.systemManager.uiTesting.canvas_result.SetActive(false);
        this.systemManager.uiTesting.canvas_countdown.SetActive(false);
        this.systemManager.uiTesting.canvas_final.SetActive(false);

        this.systemManager.uiFollowHead.tolerateAngle = 120.0f;
        this.systemManager.uiFollowHead.toleratteDistance = 1.0f;
        this.systemManager.uiFollowHead.EnableControllerInteractorVisual(true); // Parameter Setting Only

        this.systemManager.uiTesting.startTitle_text.text = "Welcome to Testing Mode";
        this.systemManager.uiTesting.startDescription_text.text = "There will be " + this.systemManager.mySettingInfo.targetUnitNum.ToString() + " units in this test." + "\nPlease move to center and press the button 'A' to start.";
        this.systemManager.uiTesting.resultDescription_text.text = "";
    }

    public void unitOver() {
        this.targetManager.targetAnimator.SetBool("isDuringTheUnit", false);

        this.systemManager.uiTesting.canvas_result.SetActive(true);
        this.systemManager.uiTesting.resultUnit_text.text = "Unit " + this.curUnitNum.ToString() + " result";

        this.reactionTimer.timerOn = false;
        if (this.reactionTimeOut) {
            this.reactionTimeOut = false;
            this.reactionTimeOutCount += 1;
            
            this.systemManager.uiTesting.resultScore_text.text = "Time Out";
        }
        else {
            this.totalReactionTime += this.reactionTimer.timeLeft;
            int curScore = this.evaluationManager.getScore();
            this.totalScore += curScore;

            this.systemManager.uiTesting.resultScore_text.text = "Score: " + curScore.ToString();
        }

        if (this.curUnitNum == this.targetUnitNum) {
            this.curTestState = TestState.result;
            int timeUsefulCount = this.targetUnitNum - this.reactionTimeOutCount;
            float averageReactionTime = 0.0f;
            if (timeUsefulCount == 0) {
                averageReactionTime = 0.0f;
            }
            else {
                averageReactionTime = this.totalReactionTime / timeUsefulCount;
            }

            this.targetManager.coachStickman.SetActive(false);
            
            this.systemManager.uiTesting.canvas_final.SetActive(true);
            this.systemManager.uiTesting.canvas_result.SetActive(false);
            this.systemManager.uiTesting.canvas_countdown.SetActive(false);
            
            this.systemManager.uiTesting.finalTitle_text.text = "Test Finished";
            this.systemManager.uiTesting.finalDescription_text.text = "Average reaction time: " + averageReactionTime.ToString("F3") + "\n" + "Total score: " + this.totalScore.ToString() + "\n" + "Reaction time out count: " + this.reactionTimeOutCount.ToString();

            this.systemManager.uiFollowHead.EnableControllerInteractorVisual(true);

            // this.systemManager.consoleText.text += "\nTest finished" + "\n" + "Average reaction time: " + averageReactionTime + "\n" + "Total score: " + this.totalScore.ToString() + "\n" + "Reaction time out count: " + this.reactionTimeOutCount.ToString();
            // print("Test finished" + "\n" + "Average reaction time: " + averageReactionTime + "\n" + "Total score: " + this.totalScore.ToString() + "\n" + "Reaction time out count: " + this.reactionTimeOutCount.ToString());
        }
        else {
            this.curTestState = TestState.begin;
            this.targetManager.invokeTargetMoveToInitial(1.5f);
        }
    }

    public void readyStart() {
        Invoke("callTargetRenderInitial", 1.5f);
        if (this.curUnitNum < this.targetUnitNum && this.reactionTimer.timerOn == false && this.readyTimer.timerOn == false) {
            this.curUnitNum += 1;
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();
    
            this.evaluationManager.evaluationStatusInitial();
            this.evaluationManager.setUserStartingPosition();

            this.readyTimer.StartTimer();

            this.systemManager.uiTesting.readyUnit_text.text = "Ready for unit " + this.curUnitNum.ToString();
            
            // this.systemManager.consoleTitle.text = "";
            // this.systemManager.consoleText.text = "Unit " + this.curUnitNum.ToString() + " ready";
            // print("Unit " + this.curUnitNum.ToString() + " ready");
        }
    }

    private void callTargetRenderInitial() {
        this.m_targetRenderInitial.initialTargetRender();
    }
}
