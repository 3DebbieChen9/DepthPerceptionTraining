using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationManager : MonoBehaviour
{
    // Handle the Evaluation Module for each unit (The total reaction will be handled in TestingManager.cs)

    [SerializeField]
    public SystemManager systemManager;
    // [SerializeField]
    // public TestingManager testingManager;

    [SerializeField]
    public Transform startingTransform; // Player's initial Transform when the unit is started
    [SerializeField]
    public SystemManager.MovingDirection userMovingDirection = SystemManager.MovingDirection.initial;
    [SerializeField]
    public SystemManager.MovingDirection targetMovingDirection = SystemManager.MovingDirection.initial;
    
    [SerializeField]
    public bool isDuringTheUnit = false;
    [SerializeField]
    public bool playerStartMoving = false;

    public class UserPerformanceEachUnit
    {
        public bool isPunching;
        public bool isReacting;
        public bool isStraight;
        public bool isReachTarget;
        public bool isMovingCorrectly;
        // public float reactionTime;

        public UserPerformanceEachUnit() {
            this.isPunching = false;
            this.isReacting = false;
            this.isStraight = false;
            this.isReachTarget = false;
            this.isMovingCorrectly = false;
            // this.reactionTime = 0.0f;
        }

        public void reset() {
            this.isPunching = false;
            this.isReacting = false;
            this.isStraight = false;
            this.isReachTarget = false;
            this.isMovingCorrectly = false;
            // this.reactionTime = 0.0f;
        }
    }

    [SerializeField]
    public UserPerformanceEachUnit userPerformanceEachUnit = new UserPerformanceEachUnit();

    [SerializeField]
    public EvaluationDirectionModule evaluationDirectionModule;
    [SerializeField]
    public EvaluationStraightModule evaluationStraightModule;
    
    [SerializeField]
    public bool userIsAtOrigin = false;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.startingTransform = this.systemManager.sceneOrigin.transform;
        this.evaluationStatusInitial();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void evaluationStatusInitial() {
        this.userPerformanceEachUnit.reset();
        this.userMovingDirection = SystemManager.MovingDirection.initial;
        this.targetMovingDirection = SystemManager.MovingDirection.initial;
        this.playerStartMoving = false;
    }

    public void setUserStartingPosition() {
        this.startingTransform.position = this.systemManager.userCenterPosition.transform.position;
        this.startingTransform.rotation = Quaternion.Euler(0.0f, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
    }

    public enum Hand {
        left,
        right
    }
    public void userIsPunching(Hand hand) {
        if (this.isDuringTheUnit) {
            this.userPerformanceEachUnit.isPunching = true;
            this.userPerformanceEachUnit.isReacting = true;
            this.userPerformanceEachUnit.isStraight = this.evaluationStraightModule.judgeArmStraight(hand);
            this.systemManager.consoleTitle.text += "Punching";
            this.isDuringTheUnit = false;
            this.systemManager.testingModeManager.unitOver();
        }
        else {
            this.userPerformanceEachUnit.isPunching = false;
            this.userPerformanceEachUnit.isReacting = false;
            this.userPerformanceEachUnit.isStraight = false;
        }
    }

    public void userIsMoving() {
        if (this.isDuringTheUnit) {
            this.userPerformanceEachUnit.isReacting = true;
            this.userPerformanceEachUnit.isMovingCorrectly = this.evaluationDirectionModule.judgeMovingDirection();
        }
        else {
            this.userPerformanceEachUnit.isReacting = false;
        }
    }

    public void userIsHitTarget(Hand hand) {
        if (this.isDuringTheUnit) {
            this.userPerformanceEachUnit.isReachTarget = true;
            this.isDuringTheUnit = false;
            this.systemManager.testingModeManager.unitOver();
        }
        else {
            this.userPerformanceEachUnit.isReachTarget = false;
        }
    }
    
    public int getScore() {
        int score = 0;
        if (this.userPerformanceEachUnit.isReacting) {
            score += 1;
            this.systemManager.consoleText.text += "\nReacting score +1";
            print("Reacting score +1");
        }

        if (this.userPerformanceEachUnit.isMovingCorrectly) {
            score += 1;
            this.systemManager.consoleText.text += "\nMoving Correctly score +1";
            print("Moving Correctly score +1");
        }

        if (this.userPerformanceEachUnit.isStraight && this.userPerformanceEachUnit.isReachTarget) {
            score += 1;
            this.systemManager.consoleText.text += "\nStraight and Reach score +1";
            print("Straight and Reach score +1");
        }
        return score;
    }
}
