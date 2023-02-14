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
    public Vector3 startingPosition; // Camera Rig's Position when the unit is started
    [SerializeField]
    public SystemManager.MovingDirection curMovingDirection = SystemManager.MovingDirection.initial;
    [SerializeField]
    public bool isDuringTheUnit = false;

    public class UserPerformanceEachUnit
    {
        public bool isPunching;
        public bool isReacting;
        public bool isStraight;
        public bool isReachTarget;
        public bool isMovingCorrectly;
        public float reactionTime;

        public UserPerformanceEachUnit() {
            this.isPunching = false;
            this.isReacting = false;
            this.isStraight = false;
            this.isReachTarget = false;
            this.isMovingCorrectly = false;
            this.reactionTime = 0.0f;
        }

        public void reset() {
            this.isPunching = false;
            this.isReacting = false;
            this.isStraight = false;
            this.isReachTarget = false;
            this.isMovingCorrectly = false;
            this.reactionTime = 0.0f;
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
        this.evaluationStatusInitial();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void evaluationStatusInitial() {
        this.userPerformanceEachUnit.reset();
        this.curMovingDirection = SystemManager.MovingDirection.initial;
    }

    public void setUserStartingPosition() {
        this.startingPosition = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
    }

    public enum Hand {
        left,
        right
    }
    public void userIsPunching(Hand hand) {
        this.userPerformanceEachUnit.isPunching = true;
        this.userPerformanceEachUnit.isReacting = true;
        this.userPerformanceEachUnit.isStraight = this.evaluationStraightModule.judgeArmStraight(hand);
        
        this.isDuringTheUnit = false;
        print("Stop the unit timer"); // TODO: Link to the testManager to determine the unit timer, and calculate the reaction time
    }

    public void userIsMoving() {
        this.userPerformanceEachUnit.isReacting = true;
        this.userPerformanceEachUnit.isMovingCorrectly = this.evaluationDirectionModule.judgeMovingDirection();
    }

    public void userIsHitTarget() {
        this.userPerformanceEachUnit.isReachTarget = true;
    }
    
}
