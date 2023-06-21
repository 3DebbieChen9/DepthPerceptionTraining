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
    public Hand coachTargetShoudler = Hand.None;
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

    [SerializeField]
    public Transform rightShoulder;
    [SerializeField]
    public Transform leftShoulder;
    [SerializeField]
    public Transform userCenter;

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
        this.coachTargetShoudler = Hand.None;
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
    }

    public void userIsMoving()
    {
        this.playingModeManager.curUnitResult.isMoving = true;
        this.playingModeManager.curUnitResult.isReacting = true;
        this.playingModeManager.curUnitResult.isMovingCorrectly = this.directionModule.judgeMovingDirection();
        this.playingModeManager.curUnitResult.userMovingDirection = this.userMovingDirection;
    }

    public void userIsHitCoach(Hand hand, bool isHitShoulder)
    {
        if (isHitShoulder)
        {
            if (hand == Hand.Left && this.coachTargetShoudler == Hand.Right)
            {
                this.playingModeManager.curUnitResult.isReach = true;
            }
            else if (hand == Hand.Right && this.coachTargetShoudler == Hand.Left)
            {
                this.playingModeManager.curUnitResult.isReach = true;
            }
            else
            {
                this.playingModeManager.curUnitResult.isReach = false;
            }
        }
        else
        {
            this.playingModeManager.curUnitResult.isReach = false;
        }
        this.playingModeManager.curUnitResult.isStraight = this.straightModule.judgeArmStraight(hand);
        this.playingModeManager.curUnitResult.punchHand = hand;
        this.playingModeManager.curUnitResult.armRotationAngle = this.straightModule.getArmAngle(hand);
        this.playingModeManager.curUnitResult.distanceToLeftShoulder = calculateHorizatonalDistance(userCenter.position, leftShoulder.position);
        this.playingModeManager.curUnitResult.distanceToRightShoulder = calculateHorizatonalDistance(userCenter.position, rightShoulder.position);
        this.isDuringTheUnit = false;
        this.playingModeManager.visualAidIsUpdating = false;
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

    public void instantiateBallWhenHit(Hand hand, Vector3 position, Quaternion rotation, GameObject parent, bool isReach)
    {
        GameObject[] hitMarker = GameObject.FindGameObjectsWithTag("BallWhenHit");
        if (hitMarker.Length > 0)
        {
            return;
        }

        GameObject ball = null;
        ball = Instantiate(this.ballWhenHitPrefab,
                            position,
                            rotation,
                            parent.transform);
        if (isReach && this.playingModeManager.mainManager.curSystemMode != SystemMode.TestingMode)
        {
            ball.GetComponent<Renderer>().material.SetColor("_MainColor", Color.green);
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
            comment.comments.Add(this.playingModeManager.UIManager.movingWrongDirection());
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
                comment.comments.Add(this.playingModeManager.UIManager.armNotStraight());
            }
        }
        else
        {
            comment.comments.Add(this.playingModeManager.UIManager.userNotReach());
            if (this.playingModeManager.curUnitResult.isStraight)
            {
                comment.comments.Add(this.playingModeManager.UIManager.armIsStraight());
            }
            else
            {
                comment.comments.Add(this.playingModeManager.UIManager.armNotStraight());
            }
        }



        return comment;
    }

    public float calculateHorizatonalDistance(Vector3 p1, Vector3 p2)
    {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }
}
