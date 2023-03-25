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
    private StraightModule straightModule;
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
        this.userMovingDirection = MovingDirection.Forward;
        this.coachMovingDirection = MovingDirection.Forward;
        this.isDuringTheUnit = false;
        this.userStartMoving = false;
    }

    public void userIsPunching(Hand hand) {
        if (this.isDuringTheUnit) {
            this.testingModeManager.curUnitResult.isPunching = true;
            this.testingModeManager.curUnitResult.isReacting = true;
            this.testingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);

            this.isDuringTheUnit = false;
            this.testingModeManager.unitOver();
        }
        else {
            this.testingModeManager.curUnitResult.isPunching = false;
            this.testingModeManager.curUnitResult.isReacting = false;
            this.testingModeManager.curUnitResult.isStraight = false;
        }
    }

    public void userIsMoving() {
        if (this.isDuringTheUnit) {
            this.testingModeManager.curUnitResult.isMoving = true;
            this.testingModeManager.curUnitResult.isReacting = true;
            this.testingModeManager.curUnitResult.isMovingCorrectly =  this.directionModule.judgeMovingDirection();
            this.testingModeManager.myTestResult.numberOfMovingCorrectly += this.testingModeManager.curUnitResult.isMovingCorrectly ? 1 : 0;
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
                this.testingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
            }
            else {
                this.testingModeManager.curUnitResult.isReach = false;
                this.testingModeManager.curUnitResult.isStraight = false;
            }
            this.testingModeManager.curUnitResult.isReacting = true;

            this.isDuringTheUnit = false;
            this.testingModeManager.unitOver();
        }
        else {
            this.testingModeManager.curUnitResult.isReach = false;
            this.testingModeManager.curUnitResult.isReacting = false;
            this.testingModeManager.curUnitResult.isStraight = false;
        }
    }

    public UnitResultComment getScoreComment() {
        UnitResultComment comment = new UnitResultComment();
        if (this.testingModeManager.curUnitResult.isMoving) {
            this.testingModeManager.myTestResult.numberOfMoving += 1;
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is moving");
        }
        else {
            // [----] UI: User is not moving
            comment.comments.Add(this.testingModeManager.UIManager.userNotMoving());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is not moving");
        }

        if (this.testingModeManager.curUnitResult.isPunching) {
            this.testingModeManager.myTestResult.numberOfPunching += 1;
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is punching");
        }
        else {
            // [----] UI: User is not punching
            comment.comments.Add(this.testingModeManager.UIManager.userNotPunching());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is not punching");
        }

        if (this.testingModeManager.curUnitResult.isReach && !this.testingModeManager.curUnitResult.isStraight) {
            this.testingModeManager.myTestResult.numberOfReachNotStraight += 1;
            // [----] UI: Reach but not straight
            comment.comments.Add(this.testingModeManager.UIManager.userReachNotStraight());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User reach but not straight");
        }

        if (!this.testingModeManager.curUnitResult.isReach && this.testingModeManager.curUnitResult.isStraight) {
            this.testingModeManager.myTestResult.numberOfStraightNotReach += 1;
            // [----] UI: Straight but not reach
            comment.comments.Add(this.testingModeManager.UIManager.userStraightNotReach());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User straight but not reach");
        }
        
        if (this.testingModeManager.curUnitResult.isReacting) {
            comment.score += 1;
            this.testingModeManager.myTestResult.numberOfReacting += 1;
            // [----] UI: Reaction score + 1
            comment.comments.Add(this.testingModeManager.UIManager.reactionScore());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is reacting");
        }

        if (this.testingModeManager.curUnitResult.isMovingCorrectly) {
            comment.score += 1;
            this.testingModeManager.myTestResult.numberOfMovingCorrectly += 1;
            // [----] UI: Moving Correctly score + 1
            comment.comments.Add(this.testingModeManager.UIManager.movingCorretlyScore());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is moving correctly");
        }

        if (this.testingModeManager.curUnitResult.isReach && this.testingModeManager.curUnitResult.isStraight) {
            comment.score += 1;
            this.testingModeManager.curUnitResult.isSuccess = true;
            this.testingModeManager.myTestResult.numberOfSuccess += 1;
            // [----] UI: Straight and Reach score + 1
            comment.comments.Add(this.testingModeManager.UIManager.reachAndStraightScore());
            Debug.Log($"[Result] {this.testingModeManager.curUnitNum}: User is straight and reach");
        }

        return comment;
    }
}
