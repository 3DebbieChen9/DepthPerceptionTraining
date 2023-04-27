using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class EvaluationManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public TestingModeManager testingModeManager;
    [SerializeField]
    public GameObject startingPoint;
    [SerializeField]
    public MovingDirection userMovingDirection = MovingDirection.Forward;
    [SerializeField]
    public MovingDirection coachMovingDirection = MovingDirection.Forward;
    [SerializeField]
    public bool isDuringTheUnit = false;
    [SerializeField]
    public bool userStartMoving = false;
    [SerializeField]
    public bool userIsAtOrigin = false;

    [SerializeField]
    private DirectionModule directionModule;
    [SerializeField]
    public StraightModule straightModule;
    [SerializeField]
    public ReachModule reachModule;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }  
        if (this.testingModeManager == null) {
            this.testingModeManager = this.gameObject.GetComponent<TestingModeManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.startingPoint.transform.position = this.mainManager.sceneOriginPosition;
        this.startingPoint.transform.rotation = this.mainManager.sceneOriginRotation;
        this.startingPoint.GetComponent<CapsuleCollider>().radius = this.mainManager.mySettingInfo.evaluationThreshold.radiusBetweenOriginAndUser;
        this.startingPoint.GetComponent<CapsuleCollider>().height = this.mainManager.myUserInfo.userBodySize.height;
        this.startingPoint.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.mainManager.myUserInfo.userBodySize.height / 2.0f, 0.0f);
        this.evaluationStatusInitialize();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void evaluationStatusInitialize() {
        // this.startingPoint.transform.position = this.mainManager.sceneOriginPosition;
        // this.startingPoint.transform.rotation = this.mainManager.sceneOriginRotation;
        this.userMovingDirection = MovingDirection.Forward;
        this.coachMovingDirection = MovingDirection.Forward;
        this.isDuringTheUnit = false;
        this.userStartMoving = false;
    }

    public void setStartingPoint(Vector3 position, Quaternion rotation) {
        this.startingPoint.transform.position = position;
        this.startingPoint.transform.rotation = rotation;
    }

    public void userIsPunching(Hand hand) {
        if (this.isDuringTheUnit) {
            this.testingModeManager.curUnitResult.isPunching = true;
            this.testingModeManager.curUnitResult.isReacting = true;
            // this.testingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand); // 改成在 Reach 的時候判斷是否伸直
            // this.isDuringTheUnit = false;
            // this.testingModeManager.unitOver();
        }
        else {
            this.testingModeManager.curUnitResult.isPunching = false;
            this.testingModeManager.curUnitResult.isReacting = false;
            this.testingModeManager.curUnitResult.isStraight = false;
        }
    }

    public void userIsMoving() {
        // if (this.isDuringTheUnit || this.checkMoving) {
        if (this.isDuringTheUnit) {
            this.testingModeManager.curUnitResult.isMoving = true;
            this.testingModeManager.curUnitResult.isReacting = true;
            this.testingModeManager.curUnitResult.isMovingCorrectly =  this.directionModule.judgeMovingDirection();
        }
        else {
            this.testingModeManager.curUnitResult.isMoving = false;
            this.testingModeManager.curUnitResult.isReacting = false;
            this.testingModeManager.curUnitResult.isMovingCorrectly = false;
        }
    }

    public void userIsHitCoach(Hand hand, bool isHitShoulder) {
        if (this.isDuringTheUnit) {
            if (isHitShoulder) {
                this.testingModeManager.curUnitResult.isReach = true;
                this.isDuringTheUnit = false;
                this.testingModeManager.unitOver();
                this.testingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
            }
            else {
                this.testingModeManager.curUnitResult.isReach = false;
            }
        }
        else {
            this.testingModeManager.curUnitResult.isReach = false;
            this.testingModeManager.curUnitResult.isStraight = false;
        }
    }

    public UnitResultComment getScoreComment() {
        UnitResultComment comment = new UnitResultComment();
        if (this.testingModeManager.curUnitResult.isMoving) {
            this.testingModeManager.myTestResult.numberOfMoving += 1;
            if (this.testingModeManager.curUnitResult.isMovingCorrectly) {
                comment.score += 1;
                this.testingModeManager.myTestResult.numberOfMovingCorrectly += 1;
                comment.comments.Add(this.testingModeManager.UIManager.movingCorretlyScore());
            }
            else {
                comment.comments.Add(this.testingModeManager.UIManager.movingWrong());
            }
        }
        else {
            comment.comments.Add(this.testingModeManager.UIManager.userNotMoving());
        }

        if (this.testingModeManager.curUnitResult.isPunching) {
            this.testingModeManager.myTestResult.numberOfPunching += 1;
            comment.comments.Add(this.testingModeManager.UIManager.userIsPunching());
        }
        else {
            comment.comments.Add(this.testingModeManager.UIManager.userNotPunching());
        }

        if (this.testingModeManager.curUnitResult.isReach && !this.testingModeManager.curUnitResult.isStraight) {
            this.testingModeManager.myTestResult.numberOfReachNotStraight += 1;
            comment.comments.Add(this.testingModeManager.UIManager.userReachNotStraight());
        }

        if (!this.testingModeManager.curUnitResult.isReach && this.testingModeManager.curUnitResult.isStraight) {
            this.testingModeManager.myTestResult.numberOfStraightNotReach += 1;
            comment.comments.Add(this.testingModeManager.UIManager.userStraightNotReach());
        }
        
        if (this.testingModeManager.curUnitResult.isReacting) {
            comment.score += 1;
            this.testingModeManager.myTestResult.numberOfReacting += 1;
            comment.comments.Add(this.testingModeManager.UIManager.reactionScore());
        }

        if (this.testingModeManager.curUnitResult.isReach && this.testingModeManager.curUnitResult.isStraight) {
            comment.score += 1;
            this.testingModeManager.curUnitResult.isSuccess = true;
            this.testingModeManager.myTestResult.numberOfSuccess += 1;
            comment.comments.Add(this.testingModeManager.UIManager.reachAndStraightScore());
        }

        return comment;
    }
}
