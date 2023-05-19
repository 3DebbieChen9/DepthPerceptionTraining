using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using DepthPerceptionSystem;

public class CoachManager : MonoBehaviour
{
    // [SerializeField]
    // private MainManager mainManager;
    [SerializeField]
    private PlayingModeManager playingModeManager;
    public GameObject coachAvatar;
    public Animator coachAnimator;
    public MovingDirection coachMovingDirection;
    [SerializeField]
    private Vector3 coachInitialPosition = new Vector3(0.0f, 0.0f, 0.0f);
    private float userArmLength;
    private float avtarCenterToEdgeLength;
    public float distanceToUserMultiple;
    private float moveDistanceForwardMin;
    private float moveDistanceForwardMax;
    private float moveDistanceBackwardMin;
    private float moveDistanceBackwardMax;
    private bool isStart = false;

    void Awake()
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        this.coachSettingInitial();
    }

    // Update is called once per frame
    void Update()
    {
        if (!isStart)
        {
            this.coachToInitialPositionWhenSceneStart();
            this.isStart = true;
        }
    }

    public void coachSettingInitial()
    {
        this.coachAnimator.SetBool("LeftHanded", this.playingModeManager.mainManager.mySelectionInfo.coachIsLeftHanded);
        this.userArmLength = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength;
        this.avtarCenterToEdgeLength = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.avtarCenterToEdgeLength;
        this.distanceToUserMultiple = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.distanceToUserMultiple;

        Vector3 originForward = this.playingModeManager.mainManager.sceneOriginRotation * Vector3.forward;
        this.coachInitialPosition = this.playingModeManager.mainManager.sceneOriginPosition +
                                    originForward * this.userArmLength * this.distanceToUserMultiple +
                                    originForward * this.avtarCenterToEdgeLength;
        float y_shift = 0.005f;
        this.coachInitialPosition.y += y_shift;
        float coachScale = this.playingModeManager.mainManager.myUserInfo.userBodySize.height / this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.avtarDefaultHeight + this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser;
        if (this.playingModeManager.mainManager.myUserInfo.userBodySize.height > 2.0f)
        {
            coachScale = 2.0f / this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.avtarDefaultHeight + this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser;
        }
        this.coachAvatar.transform.localScale = new Vector3(coachScale, coachScale, coachScale);

        this.moveDistanceForwardMin = this.userArmLength * this.distanceToUserMultiple + this.avtarCenterToEdgeLength;
        this.moveDistanceForwardMax = Mathf.Max(this.playingModeManager.mainManager.myUserInfo.movableRange.length / 2.0f - this.userArmLength * 2.0f +
                                                        this.userArmLength * this.distanceToUserMultiple + this.avtarCenterToEdgeLength,
                                                        moveDistanceForwardMin);
        this.moveDistanceBackwardMin = this.userArmLength;
        this.moveDistanceBackwardMax = Mathf.Max(this.playingModeManager.mainManager.myUserInfo.movableRange.length / 2.0f
                                                        - (this.userArmLength * (1.0f + this.distanceToUserMultiple) + this.avtarCenterToEdgeLength),
                                                        moveDistanceBackwardMin);
    }

    public void coachToInitialPositionWhenSceneStart()
    {
        if (!this.coachAvatar.activeSelf)
        {
            this.coachAvatar.SetActive(true);
        }
        this.coachAvatar.transform.rotation = this.playingModeManager.mainManager.sceneOriginRotation * Quaternion.Euler(0, 180.0f, 0);
        Vector3 movingDirection = (this.coachInitialPosition - this.coachAvatar.transform.position).normalized;
        Vector3 startForward = this.coachAvatar.transform.rotation * Vector3.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.coachAnimator.SetBool("Moving", true);
        this.coachAnimator.SetFloat("Direction", rad);

        this.coachAvatar.transform.position = this.coachInitialPosition;

        Invoke("stopMoving", 0.11f);
    }
    public void moveToInitialPosition()
    {
        if (!this.coachAvatar.activeSelf)
        {
            this.coachAvatar.SetActive(true);
        }
        DOTween.Kill(this.coachAvatar.transform);
        this.coachAvatar.transform.rotation = this.playingModeManager.mainManager.sceneOriginRotation * Quaternion.Euler(0, 180.0f, 0);
        Vector3 movingDirection = (this.coachInitialPosition - this.coachAvatar.transform.position).normalized;
        Vector3 startForward = this.coachAvatar.transform.rotation * Vector3.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.coachAnimator.SetBool("Moving", true);
        this.coachAnimator.SetFloat("Direction", rad);

        this.coachAvatar.transform.DOMove(this.coachInitialPosition, 0.1f);

        Invoke("stopMoving", 0.11f);
    }

    public void invokeTargetMoveToInitial(float delayTime)
    {
        Invoke("moveToInitialPosition", delayTime);
    }

    public void movement(MovingSpeed speed = MovingSpeed.Random, MovingDirection movingDirection = MovingDirection.Random)
    {
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.0f;
        float speedMax = 0.0f;
        float coachMoveSpeed = 0.0f;

        if (movingDirection == MovingDirection.Random)
        {
            movingDirection = (MovingDirection)UnityEngine.Random.Range(0, 2);
        }

        switch (movingDirection)
        {
            case MovingDirection.Forward:
                distanceMin = this.moveDistanceForwardMin;
                distanceMax = this.moveDistanceForwardMax;
                speedMin = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.forwardMin;
                speedMax = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.forwardMax;
                break;
            case MovingDirection.Backward:
                distanceMin = this.moveDistanceBackwardMin;
                distanceMax = this.moveDistanceBackwardMax;
                speedMin = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.backwardMin;
                speedMax = this.playingModeManager.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.backwardMax;
                break;
            default:
                break;
        }

        switch (speed)
        {
            case MovingSpeed.Slowest:
                coachMoveSpeed = speedMin;
                break;
            case MovingSpeed.Fastest:
                coachMoveSpeed = speedMax;
                break;
            case MovingSpeed.Random:
                coachMoveSpeed = UnityEngine.Random.Range(speedMin, speedMax);
                break;
        }
        float distance = UnityEngine.Random.Range(distanceMin, distanceMax);
        this.startMoving(movingDirection, coachMoveSpeed, distance);
    }

    public void startMoving(MovingDirection movingDirection, float speed, float distance)
    {
        this.coachMovingDirection = movingDirection;
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        if (movingDirection == MovingDirection.Forward)
        {
            movingDirectionVector = -(this.playingModeManager.mainManager.sceneOriginRotation * Vector3.forward).normalized;
        }
        else
        {
            movingDirectionVector = (this.playingModeManager.mainManager.sceneOriginRotation * Vector3.forward).normalized;
        }

        float movingAnimationDefaultSpeed = 0.8f;
        float movingAnimationSpeed = 1.0f;
        if (speed > movingAnimationDefaultSpeed)
        {
            movingAnimationSpeed = speed / movingAnimationDefaultSpeed;
        }
        this.coachAnimator.SetFloat("Speed", movingAnimationSpeed);
        float duration = distance / speed;
        Vector3 destination = this.coachAvatar.transform.position + movingDirectionVector * distance;
        Vector3 startForward = (this.coachAvatar.transform.rotation * Vector3.forward).normalized;
        Debug.DrawLine(this.coachAvatar.transform.position, destination, Color.blue, 100.0f);
        float angle = Vector3.Angle(startForward, movingDirectionVector);
        float rad = angle * Mathf.Deg2Rad;
        this.coachAnimator.SetBool("Moving", true);
        this.coachAnimator.SetFloat("Direction", rad);
        this.coachAvatar.transform.DOMove(destination, duration);
        Invoke("stopMoving", duration);

    }
    public void stopMoving()
    {
        this.coachAnimator.SetBool("Moving", false);
        DOTween.Kill(this.coachAvatar.transform);
    }

    public void moveToFurthest(MovingDirection movingDirection, float speed)
    {
        if (movingDirection == MovingDirection.Forward)
        {
            this.startMoving(movingDirection, speed, this.moveDistanceForwardMax);
        }
        else
        {
            this.startMoving(movingDirection, speed, this.moveDistanceBackwardMax);
        }
    }
}

