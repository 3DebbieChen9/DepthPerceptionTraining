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

    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public EvaluationManager evaluationManager;
    [SerializeField]
    public SceneBuilding sceneBuildingManager;
    [SerializeField]
    public TargetManager targetManager;
    
    [SerializeField]
    public int targetUnitNum = 7;
    [SerializeField]
    public Timer reactionTimer = new Timer(false, 0.0f, 0.0f);
    [SerializeField]
    public Timer readyTimer = new Timer(false, 5.0f, 0.0f);

    [SerializeField]
    public TestLevel curTestLevel = TestLevel.level_0;
    [SerializeField]
    public int curUnitNum = 0;

    [SerializeField]
    public int reactionTimeOutCount = 0;
    [SerializeField]
    public bool reactionTimeOut = false;

    [SerializeField]
    public float totalReactionTime = 0.0f;
    [SerializeField]
    public int totalScore = 0;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        this.evaluationManager.startingPosition = this.systemManager.sceneOrigin_poisition;
        // this.evaluationManager.startingTransform.position = this.systemManager.sceneOrigin.transform.position;
        
        this.systemManager.userInitialPosition.transform.position = this.systemManager.sceneOrigin_poisition;
        // this.systemManager.userInitialPosition.transform.position = this.systemManager.sceneOrigin.transform.position;
        this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        this.targetManager = GameObject.Find("TargetManager").GetComponent<TargetManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            this.systemManager.sceneOrigin.transform.position = this.systemManager.sceneOrigin_poisition;
            this.systemManager.sceneOrigin.transform.rotation = this.systemManager.sceneOrigin_rotation;
            if(this.evaluationManager.userIsAtOrigin) {
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
            else {
                this.systemManager.consoleText.text = "Move to the center please!!!";
                print("Move to the center please!!!");
            }
            
            
            if (this.curUnitNum == this.targetUnitNum && this.reactionTimer.timerOn == false && this.readyTimer.timerOn == false) {
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
        }

        if (this.readyTimer.timerOn) {
            this.readyTimer.timeLeft -= Time.deltaTime;
            if (this.readyTimer.timeLeft <= 0.0f) {
                this.readyTimer.ResetTimer();

                this.evaluationManager.isDuringTheUnit = true;
                this.targetManager.targetAnimator.SetBool("isDuringUnit", true);
                this.targetManager.randomTargetMovement(this.curTestLevel);

                this.reactionTimer.StartTimer();
                this.systemManager.consoleText.text = "Unit " + this.curUnitNum.ToString() + " start";
                print("Unit " + this.curUnitNum.ToString() + " start");
            }
        }
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
                this.systemManager.consoleText.text = "Unit " + this.curUnitNum.ToString() + " timeout";
                print("Unit " + this.curUnitNum.ToString() + " timeout");
            }
        }
    }

    public void testingModeInitial() {
        this.curTestLevel = TestLevel.level_0;
        this.curUnitNum = 0;
        this.reactionTimeOutCount = 0;
        this.reactionTimeOut = false;
        this.totalReactionTime = 0.0f;
        this.totalScore = 0;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();
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
    }


}
