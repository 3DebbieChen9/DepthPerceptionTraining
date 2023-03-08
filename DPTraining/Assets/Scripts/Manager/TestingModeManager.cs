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
    // [SerializeField]
    // public bool isTesting = false;
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

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        this.evaluationManager.startingPosition = this.systemManager.sceneOrigin_poisition;
        
        this.systemManager.userInitialPosition.transform.position = this.systemManager.sceneOrigin_poisition;
        this.targetUnitNum = this.systemManager.mySettingInfo.targetUnitNum;
        this.readyTimer.timeTarget = this.systemManager.mySettingInfo.readyTime;

        this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        this.targetManager = GameObject.Find("TargetManager").GetComponent<TargetManager>();

        this.testingModeInitial();
    }

    // Update is called once per frame
    void Update()
    {
        this.systemManager.sceneOrigin.transform.position = this.systemManager.sceneOrigin_poisition;
        this.systemManager.sceneOrigin.transform.rotation = this.systemManager.sceneOrigin_rotation;

        // 剛進到 TestingMode Scene / 從頭開始
        if (this.curTestState == TestState.idle) { 
            if(this.evaluationManager.userIsAtOrigin) {
                if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                    this.curTestState = TestState.begin;
                }
            }
            else {
                this.systemManager.consoleText.text = "Move to the center please!!!";
            }
        }

        // 測試進行中，判斷是否在中心點
        if (this.curTestState == TestState.begin) {
            if(this.evaluationManager.userIsAtOrigin) {
                this.curTestState = TestState.ready;
                this.readyStart();
            }
            else {
                this.systemManager.consoleText.text = "Move to the center please!!!";
            }
        }

        // Ready Time for each unit
        if (this.readyTimer.timerOn) {
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();

                this.curTestState = TestState.reaction;
                this.evaluationManager.isDuringTheUnit = true;
                this.targetManager.targetAnimator.SetBool("isDuringUnit", true);
                this.targetManager.randomTargetMovement(this.curTestLevel);

                this.reactionTimer.StartTimer();
                this.systemManager.consoleTitle.text = "Unit " + this.curUnitNum.ToString() + " start";
                print("Unit " + this.curUnitNum.ToString() + " start");
            }
        }

        // Calculate the reaction time
        if (this.reactionTimer.timerOn) {
            this.reactionTimer.timeLeft += Time.deltaTime;
            // print("Reaction time: " + this.reactionTimer.timeLeft.ToString());
            if (this.reactionTimer.timeLeft >= 5.0f) {
                this.reactionTimer.ResetTimer();
                if (this.evaluationManager.isDuringTheUnit) {
                    this.evaluationManager.isDuringTheUnit = false;
                    this.targetManager.targetAnimator.SetBool("isDuringUnit", false);
                    this.unitOver();
                }
                this.reactionTimeOut = true;
                this.systemManager.consoleTitle.text = "Unit " + this.curUnitNum.ToString() + " timeout";
                print("Unit " + this.curUnitNum.ToString() + " timeout");
            }
        }
    }

    public void testingModeInitial() {
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
    }

    public void unitOver() {
        this.targetManager.targetAnimator.SetBool("isDuringUnit", false);
        this.targetManager.invokeTargetMoveToInitial(0.5f);

        this.reactionTimer.timerOn = false;
        if (this.reactionTimeOut) {
            this.reactionTimeOut = false;
            this.reactionTimeOutCount += 1;
            this.systemManager.consoleTitle.text = "Result: Time Out";
            print("Result: Time Out");
        }
        else {
            this.totalReactionTime += this.reactionTimer.timeLeft;
            int curScore = this.evaluationManager.getScore();
            this.totalScore += curScore;
            this.systemManager.consoleTitle.text += "\nResult: " + this.reactionTimer.timeLeft.ToString() + " (s)" + " | Score: " + curScore.ToString();
            print("Result: " + this.reactionTimer.timeLeft.ToString() + " (s)" + " | Score: " + curScore.ToString());
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
            this.systemManager.consoleText.text += "\nTest finished" + "\n" + "Average reaction time: " + averageReactionTime + "\n" + "Total score: " + this.totalScore.ToString() + "\n" + "Reaction time out count: " + this.reactionTimeOutCount.ToString();
            print("Test finished" + "\n" + "Average reaction time: " + averageReactionTime + "\n" + "Total score: " + this.totalScore.ToString() + "\n" + "Reaction time out count: " + this.reactionTimeOutCount.ToString());
        }
        else {
            this.curTestState = TestState.begin;
        }
    }

    public void readyStart() {
        this.m_targetRenderInitial.initialTargetRender();
        if (this.curUnitNum < this.targetUnitNum && this.reactionTimer.timerOn == false && this.readyTimer.timerOn == false) {
            this.curUnitNum += 1;
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();
    
            this.evaluationManager.evaluationStatusInitial();
            this.evaluationManager.setUserStartingPosition();

            this.readyTimer.StartTimer();
            this.systemManager.consoleTitle.text = "";
            this.systemManager.consoleText.text = "Unit " + this.curUnitNum.ToString() + " ready";
            print("Unit " + this.curUnitNum.ToString() + " ready");
        }
    }


}
