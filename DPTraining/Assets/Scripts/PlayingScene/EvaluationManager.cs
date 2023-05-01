using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class EvaluationManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public PlayingModeManager playingModeManager;
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
        if (this.playingModeManager == null) {
            this.playingModeManager = this.gameObject.GetComponent<PlayingModeManager>();
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
        this.playingModeManager.curUnitResult.isPunching = true;
        this.playingModeManager.curUnitResult.isReacting = true;
        // if (this.isDuringTheUnit) {
        //     this.playingModeManager.curUnitResult.isPunching = true;
        //     this.playingModeManager.curUnitResult.isReacting = true;
        //     // this.playingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand); // 改成在 Reach 的時候判斷是否伸直
        //     // this.isDuringTheUnit = false;
        //     // this.playingModeManager.unitOver();
        // }
        // else {
        //     this.playingModeManager.curUnitResult.isPunching = false;
        //     this.playingModeManager.curUnitResult.isReacting = false;
        //     this.playingModeManager.curUnitResult.isStraight = false;
        // }
    }

    public void userIsMoving() {
        this.playingModeManager.curUnitResult.isMoving = true;
        this.playingModeManager.curUnitResult.isReacting = true;
        this.playingModeManager.curUnitResult.isMovingCorrectly =  this.directionModule.judgeMovingDirection();
        // if (this.isDuringTheUnit) {
        //     this.playingModeManager.curUnitResult.isMoving = true;
        //     this.playingModeManager.curUnitResult.isReacting = true;
        //     this.playingModeManager.curUnitResult.isMovingCorrectly =  this.directionModule.judgeMovingDirection();
        // }
        // else {
        //     this.playingModeManager.curUnitResult.isMoving = false;
        //     this.playingModeManager.curUnitResult.isReacting = false;
        //     this.playingModeManager.curUnitResult.isMovingCorrectly = false;
        // }
    }

    public void userIsHitCoach(Hand hand, bool isHitShoulder) {
        if (isHitShoulder) {
            this.playingModeManager.curUnitResult.isReach = true;
            this.isDuringTheUnit = false;
            this.playingModeManager.unitOver();
            this.playingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
        }
        else {
            this.playingModeManager.curUnitResult.isReach = false;
        }
        // if (this.isDuringTheUnit) {
        //     if (isHitShoulder) {
        //         this.playingModeManager.curUnitResult.isReach = true;
        //         this.isDuringTheUnit = false;
        //         this.playingModeManager.unitOver();
        //         this.playingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
        //     }
        //     else {
        //         this.playingModeManager.curUnitResult.isReach = false;
        //     }
        // }
        // else {
        //     this.playingModeManager.curUnitResult.isReach = false;
        //     this.playingModeManager.curUnitResult.isStraight = false;
        // }
    }

    public UnitResultComment getScoreComment() {
        UnitResultComment comment = new UnitResultComment();
        if (this.playingModeManager.curUnitResult.isMoving) {
            this.playingModeManager.myTestResult.numberOfMoving += 1;
            if (this.playingModeManager.curUnitResult.isMovingCorrectly) {
                comment.score += 1;
                this.playingModeManager.myTestResult.numberOfMovingCorrectly += 1;
                comment.comments.Add(this.playingModeManager.UIManager.movingCorretlyScore());
            }
            else {
                comment.comments.Add(this.playingModeManager.UIManager.movingWrong());
            }
        }
        else {
            comment.comments.Add(this.playingModeManager.UIManager.userNotMoving());
        }

        if (this.playingModeManager.curUnitResult.isPunching) {
            this.playingModeManager.myTestResult.numberOfPunching += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userIsPunching());
        }
        else {
            comment.comments.Add(this.playingModeManager.UIManager.userNotPunching());
        }

        if (this.playingModeManager.curUnitResult.isReach && !this.playingModeManager.curUnitResult.isStraight) {
            this.playingModeManager.myTestResult.numberOfReachNotStraight += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userReachNotStraight());
        }

        if (!this.playingModeManager.curUnitResult.isReach && this.playingModeManager.curUnitResult.isStraight) {
            this.playingModeManager.myTestResult.numberOfStraightNotReach += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userStraightNotReach());
        }
        
        if (this.playingModeManager.curUnitResult.isReacting) {
            comment.score += 1;
            this.playingModeManager.myTestResult.numberOfReacting += 1;
            comment.comments.Add(this.playingModeManager.UIManager.reactionScore());
        }

        if (this.playingModeManager.curUnitResult.isReach && this.playingModeManager.curUnitResult.isStraight) {
            comment.score += 1;
            this.playingModeManager.curUnitResult.isSuccess = true;
            this.playingModeManager.myTestResult.numberOfSuccess += 1;
            comment.comments.Add(this.playingModeManager.UIManager.reachAndStraightScore());
        }

        return comment;
    }
}
