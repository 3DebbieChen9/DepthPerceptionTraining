using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TargetManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public Transform targetTransform;
    [SerializeField]
    public Animator targetAnimator;

    [SerializeField]
    public bool targetCoachIsAtInitial = false;

    [SerializeField]
    private Vector3 targetInitialPosition = new Vector3(0.0f, 0.0f, 5.46f);
    private float userArmLength = 0.0f;
    private float targetCenterToEdgeLength = 0.43f;
    public float targetToUserMultiple = 1.5f; // Write as modify parameters for coach
    
    [SerializeField]
    private float targetMoveDistanceMin_Forward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMax_Forward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMin_Backward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMax_Backward = 0.0f;

    [SerializeField]
    public GameObject coachStickman;
    private bool isStarted = false;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.isStarted = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (this.systemManager != null && !this.isStarted) {
            this.targetSettingStart();
        }
    }

    private void targetSettingStart() {
        this.isStarted = true;
        this.targetAnimator.SetBool("LeftHanded", this.systemManager.mySettingInfo.targetIsLeftHanded);
        
        this.userArmLength = this.systemManager.myUserInfo.avgArmLength;
        
        Vector3 originForward = this.systemManager.sceneOrigin_rotation * Vector3.forward;
        this.targetInitialPosition = this.systemManager.sceneOrigin_poisition + 
                                        originForward * this.userArmLength * targetToUserMultiple + 
                                        originForward * this.targetCenterToEdgeLength;
        float y_shift = 1.0f * Convert.ToInt32(this.systemManager.mySettingInfo.isOnRing) + 0.005f - 1.0f * Convert.ToInt32(this.systemManager.mySettingInfo.isOnRing) + 0.01f;
        // this.targetInitialPosition = this.systemManager.sceneOrigin.transform.position + 
        //                                 this.systemManager.sceneOrigin.transform.forward * this.userArmLength * targetToUserMultiple + 
        //                                 this.systemManager.sceneOrigin.transform.forward * this.targetCenterToEdgeLength;
        this.targetInitialPosition = new Vector3 (this.targetInitialPosition.x, 
                                                    this.targetInitialPosition.y + y_shift, 
                                                    this.targetInitialPosition.z);
        
        float coachStickman_scale = this.systemManager.myUserInfo.userHeight / 1.8f + this.systemManager.mySettingInfo.targetHeightDifference;
        this.coachStickman.transform.localScale = new Vector3(coachStickman_scale, coachStickman_scale, coachStickman_scale);
        this.targetMoveToInitial();
        
        this.targetMoveDistanceMin_Forward = this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength;
        this.targetMoveDistanceMax_Forward = Mathf.Max(this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + 
                                                        this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength, 
                                                        targetMoveDistanceMin_Forward);

        this.targetMoveDistanceMin_Backward = this.userArmLength;
        this.targetMoveDistanceMax_Backward = Mathf.Max(this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f 
                                                        - (this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength), 
                                                        targetMoveDistanceMin_Backward);
        print("[DC] targetMoveDistanceMin_Forward: " + this.targetMoveDistanceMin_Forward + "\ntargetMoveDistanceMax_Forward: " + (this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + 
                                                        this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength));
        print("[DC] targetMoveDistanceMin_Backward: " + this.targetMoveDistanceMin_Backward + "\ntargetMoveDistanceMax_Backward: " + (this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f 
                                                        - (this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength)));
    }

    public void targetMoveToInitial() {
        if(!this.targetTransform.gameObject.activeSelf) {
            this.targetTransform.gameObject.SetActive(true);
        }
        DOTween.Kill(this.targetTransform);
        // this.systemManager.testingModeManager.m_targetRenderInitial.initialTargetRender();
        this.RotateTarget();
        Vector3 movingDirection = (this.targetInitialPosition - this.targetTransform.position).normalized;
        Vector3 startForward = this.targetTransform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetTransform.DOMove(this.targetInitialPosition, 0.0f);
        Invoke("StopMoving", 0.7f);
        Invoke("TargetIsAtInitial", 0.5f);
    }

    public void invokeTargetMoveToInitial(float delayTime) {
        Invoke("targetMoveToInitial", delayTime);
    }
    
    public void randomTargetMovement(TestingModeManager.TestLevel testLevel) {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 1.0f);
        Vector3 targetPosition = new Vector3(0.0f, 0.0f, 0.0f);
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.0f;
        float speedMax = 0.0f;

        // Random Direction
        float randomValue = UnityEngine.Random.Range(0.0f, 1.0f);
        if (randomValue < 0.5f) {
            this.systemManager.testingModeManager.evaluationManager.targetMovingDirection = SystemManager.MovingDirection.forward;
            movingDirectionVector = -(this.systemManager.sceneOrigin_rotation * Vector3.forward).normalized;
            distanceMin = this.targetMoveDistanceMin_Forward;
            distanceMax = this.targetMoveDistanceMax_Forward;
        } 
        else {
            this.systemManager.testingModeManager.evaluationManager.targetMovingDirection = SystemManager.MovingDirection.backward;
            movingDirectionVector = (this.systemManager.sceneOrigin_rotation * Vector3.forward).normalized;
            distanceMin = this.targetMoveDistanceMin_Backward;
            distanceMax = this.targetMoveDistanceMax_Backward;
        }

        // Random Speed according to test level
        if (testLevel == TestingModeManager.TestLevel.level_0) {
            speedMin = 0.2f;
            speedMax = 0.5f;
        }
        else if (testLevel == TestingModeManager.TestLevel.level_1) {
            speedMin = 0.5f;
            speedMax = 0.8f;
        }
        else if (testLevel == TestingModeManager.TestLevel.level_2) {
            // TODO - acceleration
            speedMin = 0.8f;
            speedMax = 1.5f;
        }
        float speed = UnityEngine.Random.Range(speedMin, speedMax);
        float movingAnimationDefaultSpeed = 0.8f; 
        float movingAnimationSpeed = 1.0f;
        if (speed > movingAnimationDefaultSpeed) {
            movingAnimationSpeed = speed / movingAnimationDefaultSpeed;
        }
        else {
            movingAnimationSpeed = 1.0f;
        }
        this.targetAnimator.SetFloat("Speed", movingAnimationSpeed);
        float distance = UnityEngine.Random.Range(distanceMin, distanceMax);
        float duration = distance / speed;
    
        targetPosition = this.targetTransform.position + movingDirectionVector * distance;
        Debug.Log("Initial Position: " + this.targetTransform.position + ", Target Position: " + targetPosition + ", Moving Direction: " + movingDirectionVector);
        this.StartMoving(movingDirectionVector, duration, targetPosition);
    }

    private void StartMoving(Vector3 movingDirectionVector, float duration, Vector3 movingTargetPosition) {
        Vector3 startForward = (this.targetTransform.localRotation * Vector3.forward).normalized;
        // Vector3 startForward = this.targetTransform.forward;
        // Debug.DrawLine(this.targetTransform.position, this.targetTransform.position + startForward * 10.0f, Color.green, 100.0f);
        Debug.DrawLine(this.targetTransform.position, this.targetTransform.position + movingDirectionVector * 10.0f, Color.blue, 100.0f);
        float angle = Vector3.Angle(startForward, movingDirectionVector);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        // this.targetTransform.DOMoveZ(movingTargetPosition.z, duration);
        this.targetTransform.DOMove(movingTargetPosition, duration);

        this.targetCoachIsAtInitial = false;
        Invoke("StopMoving", duration);
    }

    public void StopMoving() {
        this.targetAnimator.SetBool("Moving", false);
        DOTween.Kill(this.targetTransform);
    }

    private void TargetIsAtInitial() {
        this.targetCoachIsAtInitial = true;
    }
    private void RotateTarget() {
        print("RotateTarget");
        this.targetTransform.rotation = this.systemManager.sceneOrigin_rotation * Quaternion.Euler(0,180f,0);
    }
}
