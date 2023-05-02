using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using DepthPerceptionSystem;

public class CoachManager : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;
    [SerializeField]
    public GameObject coachAvatar;
    [SerializeField]
    public Animator coachAnimator;
    [SerializeField]
    public MovingDirection coachMovingDirection;
    [SerializeField]
    private Vector3 coachInitialPosition = new Vector3(0.0f, 0.0f, 0.0f);
    // private Vector3 coachInitialPosition = new Vector3(0.0f, 0.0f, 5.46f);
    private float userArmLength;
    private float avtarCenterToEdgeLength;
    public float distanceToUserMultiple;
    private float moveDistanceForwardMin;
    private float moveDistanceForwardMax;
    private float moveDistanceBackwardMin;
    private float moveDistanceBackwardMax;
    private bool isStart = false;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.coachSettingInitial();
    }

    // Update is called once per frame
    void Update()
    {
        if (!isStart) {
            this.coachToInitialPositionWhenSceneStart();
            this.isStart = true;
        }
    }

    public void coachSettingInitial() {
        this.coachAnimator.SetBool("LeftHanded", this.mainManager.mySelectionInfo.coachIsLeftHanded);
        this.userArmLength = this.mainManager.myUserInfo.userBodySize.armLength;
        this.avtarCenterToEdgeLength = this.mainManager.mySettingInfo.coachDefaultValue.avtarCenterToEdgeLength;
        this.distanceToUserMultiple = this.mainManager.mySettingInfo.coachDefaultValue.distanceToUserMultiple;
        
        Vector3 originForward = this.mainManager.sceneOriginRotation * Vector3.forward;
        this.coachInitialPosition = this.mainManager.sceneOriginPosition + 
                                    originForward * this.userArmLength * this.distanceToUserMultiple +
                                    originForward * this.avtarCenterToEdgeLength;
        float y_shift = 0.005f;
        // float y_shift = 1.0f * Convert.ToInt32(this.mainManager.mySelectionInfo.isOnRing) + 0.005f - 1.0f * Convert.ToInt32(this.mainManager.mySelectionInfo.isOnRing) + 0.01f;
        this.coachInitialPosition.y += y_shift;
        float coachScale = this.mainManager.myUserInfo.userBodySize.height / this.mainManager.mySettingInfo.coachDefaultValue.avtarDefaultHeight + this.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser;
        if (this.mainManager.myUserInfo.userBodySize.height > 2.0f) {
            coachScale = 2.0f / this.mainManager.mySettingInfo.coachDefaultValue.avtarDefaultHeight + this.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser;
        }
        this.coachAvatar.transform.localScale = new Vector3(coachScale, coachScale, coachScale);
        // this.moveToInitialPosition(false);
        this.moveDistanceForwardMin = this.userArmLength * this.distanceToUserMultiple + this.avtarCenterToEdgeLength;
        this.moveDistanceForwardMax = Mathf.Max(this.mainManager.myUserInfo.movableRange.length / 2.0f - this.userArmLength * 2.0f + 
                                                        this.userArmLength * this.distanceToUserMultiple + this.avtarCenterToEdgeLength, 
                                                        moveDistanceForwardMin);
        this.moveDistanceBackwardMin = this.userArmLength;
        this.moveDistanceBackwardMax = Mathf.Max(this.mainManager.myUserInfo.movableRange.length / 2.0f 
                                                        - (this.userArmLength * (1.0f + this.distanceToUserMultiple) + this.avtarCenterToEdgeLength), 
                                                        moveDistanceBackwardMin);
    }

    public void coachToInitialPositionWhenSceneStart() {
        if (!this.coachAvatar.activeSelf) {
            this.coachAvatar.SetActive(true);
        }
        this.coachAvatar.transform.rotation = this.mainManager.sceneOriginRotation * Quaternion.Euler(0,180.0f,0);
        Vector3 movingDirection = (this.coachInitialPosition - this.coachAvatar.transform.position).normalized;
        Vector3 startForward = this.coachAvatar.transform.rotation * Vector3.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.coachAnimator.SetBool("Moving", true);
        this.coachAnimator.SetFloat("Direction", rad);
        
        this.coachAvatar.transform.position = this.coachInitialPosition;
        
        Invoke("stopMoving", 0.11f);
    }
    public void moveToInitialPosition() {
        if (!this.coachAvatar.activeSelf) {
            this.coachAvatar.SetActive(true);
        }
        DOTween.Kill(this.coachAvatar.transform);
        this.coachAvatar.transform.rotation = this.mainManager.sceneOriginRotation * Quaternion.Euler(0,180.0f,0);
        Vector3 movingDirection = (this.coachInitialPosition - this.coachAvatar.transform.position).normalized;
        Vector3 startForward = this.coachAvatar.transform.rotation * Vector3.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.coachAnimator.SetBool("Moving", true);
        this.coachAnimator.SetFloat("Direction", rad);

        this.coachAvatar.transform.DOMove(this.coachInitialPosition, 0.1f);
        
        Invoke("stopMoving", 0.11f);
    }

    public void invokeTargetMoveToInitial(float delayTime) {
        Invoke("moveToInitialPosition", delayTime);
    }

    public void randomMovement(TrainingLevel level = TrainingLevel.hard) {
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.0f;
        float speedMax = 0.0f;
        float coachMoveSpeed = 0.0f;
        
        float randomValue = UnityEngine.Random.Range(0.0f, 1.0f);
        MovingDirection movingDirection = MovingDirection.Forward;
        if (randomValue < 0.5f) {
            movingDirection = MovingDirection.Forward;
            distanceMin = this.moveDistanceForwardMin;
            distanceMax = this.moveDistanceForwardMax;
            speedMin = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.forwardMin;
            speedMax = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.forwardMax;
        }
        else {
            movingDirection = MovingDirection.Backward;
            distanceMin = this.moveDistanceBackwardMin;
            distanceMax = this.moveDistanceBackwardMax; 
            speedMin = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.backwardMin;
            speedMax = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeed.backwardMax;   
        }

        switch (level) {
            case TrainingLevel.easy:
                coachMoveSpeed = speedMin;
                break;
            case TrainingLevel.medium:
                coachMoveSpeed = speedMax;
                break;
            case TrainingLevel.hard:
                coachMoveSpeed = UnityEngine.Random.Range(speedMin, speedMax);
                break;
        }
        float distance = UnityEngine.Random.Range(distanceMin, distanceMax);
        this.startMoving(movingDirection, coachMoveSpeed, distance);
    }

    public void startMoving(MovingDirection movingDirection, float speed, float distance) {
        this.coachMovingDirection = movingDirection;
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        if (movingDirection == MovingDirection.Forward) {
            movingDirectionVector = -(this.mainManager.sceneOriginRotation * Vector3.forward).normalized;
        }
        else {
            movingDirectionVector = (this.mainManager.sceneOriginRotation * Vector3.forward).normalized;
        }

        float movingAnimationDefaultSpeed = 0.8f;
        float movingAnimationSpeed = 1.0f;
        if (speed > movingAnimationDefaultSpeed) {
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
    public void stopMoving() {
        this.coachAnimator.SetBool("Moving", false);
        DOTween.Kill(this.coachAvatar.transform);
    }

    public void moveToFurthest(MovingDirection movingDirection, float speed) {
        if (movingDirection == MovingDirection.Forward) {
            this.startMoving(movingDirection, speed, this.moveDistanceForwardMax);
        }
        else {
            this.startMoving(movingDirection, speed, this.moveDistanceBackwardMax);
        }
    }
}

