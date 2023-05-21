using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class EvaluationManager : MonoBehaviour
{
    public PlayingModeManager playingModeManager;
    public GameObject startingPoint;
    public MovingDirection userMovingDirection = MovingDirection.Forward;
    public MovingDirection coachMovingDirection = MovingDirection.Forward;
    public bool isDuringTheUnit = false;
    public bool userStartMoving = false;
    public bool userIsAtOrigin = false;

    [SerializeField]
    private DirectionModule directionModule;
    public StraightModule straightModule;
    public ReachModule reachModule;
    public Hand punchHand;
    [SerializeField]
    private GameObject ballWhenHitPrefab;

    public bool isHitTrigger;

    void Awake()
    {
        if (this.playingModeManager == null)
        {
            this.playingModeManager = this.gameObject.GetComponent<PlayingModeManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.startingPoint.transform.position = this.playingModeManager.mainManager.sceneOriginPosition;
        this.startingPoint.transform.rotation = this.playingModeManager.mainManager.sceneOriginRotation;
        this.startingPoint.GetComponent<CapsuleCollider>().radius = this.playingModeManager.mainManager.mySettingInfo.evaluationThreshold.radiusBetweenOriginAndUser;
        this.startingPoint.GetComponent<CapsuleCollider>().height = this.playingModeManager.mainManager.myUserInfo.userBodySize.height;
        this.startingPoint.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.playingModeManager.mainManager.myUserInfo.userBodySize.height / 2.0f, 0.0f);
        this.evaluationStatusInitialize();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void evaluationStatusInitialize()
    {
        this.userMovingDirection = MovingDirection.Forward;
        this.coachMovingDirection = MovingDirection.Forward;
        this.isDuringTheUnit = false;
        this.userStartMoving = false;
        this.punchHand = Hand.None;
        this.isHitTrigger = false;
    }

    public void setStartingPoint(Vector3 position, Quaternion rotation)
    {
        this.startingPoint.transform.position = position;
        this.startingPoint.transform.rotation = rotation;
        this.startingPointSizeChange(true);
    }

    public void startingPointSizeChange(bool smaller = true)
    {
        float radius = this.playingModeManager.mainManager.mySettingInfo.evaluationThreshold.radiusBetweenOriginAndUser;
        if (smaller)
        {
            radius = radius / 2.0f;

        }

        this.startingPoint.GetComponent<CapsuleCollider>().radius = radius;
        this.playingModeManager.mainManager.sceneOrigin.transform.localScale = new Vector3(
            radius * 2.0f,
            0.02f,
            radius * 2.0f
        );
    }

    public void userIsNotPunching()
    {
        this.playingModeManager.curUnitResult.isPunching = false;
        this.playingModeManager.curUnitResult.isReacting = false;
        this.playingModeManager.curUnitResult.isStraight = false;
    }

    public void userIsPunching(Hand hand)
    {
        this.playingModeManager.curUnitResult.isPunching = true;
        this.playingModeManager.curUnitResult.isReacting = true;
        this.punchHand = hand;
        switch (this.playingModeManager.mainManager.curSystemMode)
        {
            case SystemMode.TrainingMode_BallCue_onPlayer: // On Player Only
                this.playingModeManager.depthCueManager.GetComponent<BallCueOnPlayerManager>().destroyBallCueOnPlayer(punchHand);
                break;
            case SystemMode.TrainingMode_BallCue_onTarget: // On Target Only
                this.playingModeManager.depthCueManager.GetComponent<BallCueOnTarget>().renderBallCueOnTarget(punchHand);
                break;
            case SystemMode.TrainingMode_BallCue_onBoth: // On Player and Target
            case SystemMode.TrainingMode_LineCuePlusBallCue: // Line Cue Plus Ball Cue
                this.playingModeManager.depthCueManager.GetComponent<BallCueOnPlayerManager>().destroyBallCueOnPlayer(punchHand);
                this.playingModeManager.depthCueManager.GetComponent<BallCueOnTarget>().renderBallCueOnTarget(punchHand);
                break;
            default:
                break;
        }

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

    public void userIsMoving()
    {
        this.playingModeManager.curUnitResult.isMoving = true;
        this.playingModeManager.curUnitResult.isReacting = true;
        this.playingModeManager.curUnitResult.isMovingCorrectly = this.directionModule.judgeMovingDirection();
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

    public void userIsHitCoach(Hand hand, bool isHitShoulder)
    {
        this.playingModeManager.curUnitResult.isReach = isHitShoulder ? true : false;
        this.playingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
        this.isDuringTheUnit = false;
        this.playingModeManager.unitOver();

        if (this.playingModeManager.curUnitResult.isStraight)
        {
            this.playingModeManager.curUnitResult.isReacting = true;
            this.playingModeManager.curUnitResult.isPunching = true;
        }

        switch (this.playingModeManager.curState)
        {
            case PlayingState.reaction:
            case PlayingState.comment:
                switch (this.playingModeManager.mainManager.curSystemMode)
                {
                    case SystemMode.TestingMode:
                        AudioManager.instance.PlaySFX("HitObject");
                        break;
                    default:
                        if (this.playingModeManager.curUnitResult.isReach)
                        {
                            if (this.playingModeManager.curUnitResult.isStraight)
                            {
                                AudioManager.instance.PlaySFX("Success");
                            }
                            else
                            {
                                AudioManager.instance.PlaySFX("ShoulderButNotStraight");
                            }
                        }
                        else
                        {
                            AudioManager.instance.PlaySFX("WrongPlace");
                        }
                        break;
                }
                break;
        }
    }

    void instantiateBallWhenHit(Hand hand, bool isHitShoulder, bool isStraight)
    {
        foreach (Transform child in this.playingModeManager.coachManager.coachAvatar.transform)
        {
            if (child.gameObject.tag == "BallWhenHit")
            {
                // Destroy(child.gameObject);
                return;
            }
        }

        GameObject ball = null;
        switch (hand)
        {
            case Hand.Right:
                ball = Instantiate(this.ballWhenHitPrefab,
                                    this.playingModeManager.mainManager.BoxingGloveEdgeRight.position,
                                    this.playingModeManager.mainManager.BoxingGloveEdgeRight.rotation,
                                    this.playingModeManager.coachManager.coachAvatar.transform);
                ball.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
                break;
            case Hand.Left:
                ball = Instantiate(this.ballWhenHitPrefab,
                                    this.playingModeManager.mainManager.BoxingGloveEdgeLeft.position,
                                    this.playingModeManager.mainManager.BoxingGloveEdgeLeft.rotation,
                                    this.playingModeManager.coachManager.coachAvatar.transform);
                ball.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
                break;
        }

        if (isStraight && isHitShoulder)
        {
            ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.green);
        }
        else if (isStraight && !isHitShoulder)
        {
            ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.yellow);
        }
        else if (!isStraight && isHitShoulder)
        {
            ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.magenta);
        }
        else if (!isStraight && !isHitShoulder)
        {
            ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.red);
        }
    }

    public UnitResultComment getScoreComment(bool isOverTime)
    {
        UnitResultComment comment = new UnitResultComment();
        if (this.playingModeManager.curUnitResult.isMoving)
        {
            this.playingModeManager.myTestResult.numberOfMoving += 1;
            comment.score += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userIsMovingScore(isOverTime));

            if (this.playingModeManager.curUnitResult.isMovingCorrectly)
            {
                this.playingModeManager.myTestResult.numberOfMovingCorrectly += 1;
                comment.score += 1;
                comment.comments.Add(this.playingModeManager.UIManager.movingCorretlyScore(isOverTime));
            }
            else
            {
                comment.comments.Add(this.playingModeManager.UIManager.movingWrongDirection());
            }
        }
        else
        {
            comment.comments.Add(this.playingModeManager.UIManager.userNotMoving());
        }

        if (this.playingModeManager.curUnitResult.isPunching)
        {
            this.playingModeManager.myTestResult.numberOfPunching += 1;
            comment.score += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userIsPunchingScore(isOverTime));
        }
        else
        {
            comment.comments.Add(this.playingModeManager.UIManager.userNotPunching());
        }

        if (this.playingModeManager.curUnitResult.isReach)
        {
            this.playingModeManager.myTestResult.numberOfReach += 1;
            comment.score += 1;
            comment.comments.Add(this.playingModeManager.UIManager.userReachScore(isOverTime));

            if (this.playingModeManager.curUnitResult.isStraight)
            {
                this.playingModeManager.curUnitResult.isSuccess = true;
                this.playingModeManager.myTestResult.numberOfSuccess += 1;
                comment.score += 1;
                comment.comments.Add(this.playingModeManager.UIManager.reachAndStraightScore(isOverTime));
            }
            else
            {
                comment.comments.Add(this.playingModeManager.UIManager.reachButNotStraight());
            }
        }
        else
        {
            comment.comments.Add(this.playingModeManager.UIManager.userNotReach());
        }

        return comment;
    }
}
