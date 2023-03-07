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

    private bool isStarted = false;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        // this.targetSettingStart();
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
        print("DC SOS: " + originForward + " | " + this.systemManager.sceneOrigin.transform.forward);
        this.targetInitialPosition = this.systemManager.sceneOrigin.transform.position + 
                                        this.systemManager.sceneOrigin.transform.forward * this.userArmLength * targetToUserMultiple + 
                                        this.systemManager.sceneOrigin.transform.forward * this.targetCenterToEdgeLength;
        this.targetInitialPosition = new Vector3 (this.targetInitialPosition.x, 
                                                    this.systemManager.sceneBuildingManager.gym.transform.position.y + 1.0f * Convert.ToInt32(this.systemManager.mySettingInfo.isOnRing) + 0.005f, 
                                                    this.targetInitialPosition.z);
        this.systemManager.testingModeManager.m_targetRenderInitial.initialTargetRender();
        this.targetMoveToInitial();

        this.targetMoveDistanceMin_Forward = this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength;
        this.targetMoveDistanceMax_Forward = Mathf.Max(this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + 
                                                        this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength, 
                                                        targetMoveDistanceMin_Forward);

        this.targetMoveDistanceMin_Backward = this.userArmLength;
        this.targetMoveDistanceMax_Backward = Mathf.Max(this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f 
                                                        - (this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength), 
                                                        targetMoveDistanceMin_Backward);
        print("[DC] userArmLength: " + this.userArmLength);
        print("[DC] targetMoveDistanceMin_Forward: " + this.targetMoveDistanceMin_Forward + "\ntargetMoveDistanceMax_Forward: " + (this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + 
                                                        this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength));
        print("[DC] targetMoveDistanceMin_Backward: " + this.targetMoveDistanceMin_Backward + "\ntargetMoveDistanceMax_Backward: " + (this.systemManager.myMovableRangeInfo.avgLengthInVR / 2.0f 
                                                        - (this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength)));
    }

    public void targetMoveToInitial() {
        if(!this.targetTransform.gameObject.activeSelf) {
            this.targetTransform.gameObject.SetActive(true);
        }
        this.RotateTarget();
        Vector3 movingDirection = (this.targetInitialPosition - this.targetTransform.position).normalized;
        Vector3 startForward = this.targetTransform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetTransform.DOMove(this.targetInitialPosition, 0.5f);
        Invoke("StopMoving", 0.7f);
        Invoke("TargetIsAtInitial", 0.5f);
    }

    public void invokeTargetMoveToInitial(float delayTime) {
        Invoke("targetMoveToInitial", delayTime);
    }
    
    public void randomTargetMovement(TestingModeManager.TestLevel testLevel) {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        Vector3 targetPosition = new Vector3(0.0f, 0.0f, 0.0f);
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.0f;
        float speedMax = 0.0f;

        // Random Direction
        float randomValue = UnityEngine.Random.Range(0.0f, 1.0f);
        if (randomValue < 0.5f) {
            this.systemManager.testingModeManager.evaluationManager.targetMovingDirection = SystemManager.MovingDirection.forward;
            movingDirectionVector = (this.systemManager.sceneOrigin_poisition - this.targetTransform.position).normalized;
            // movingDirectionVector = (this.systemManager.sceneOrigin.transform.position - this.targetTransform.position).normalized;
            distanceMin = this.targetMoveDistanceMin_Forward;
            distanceMax = this.targetMoveDistanceMax_Forward;
        } 
        else {
            this.systemManager.testingModeManager.evaluationManager.targetMovingDirection = SystemManager.MovingDirection.backward;
            movingDirectionVector = -(this.systemManager.sceneOrigin_poisition - this.targetTransform.position).normalized;
            // movingDirectionVector = -(this.systemManager.sceneOrigin.transform.position - this.targetTransform.position).normalized;
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
        float distance = UnityEngine.Random.Range(distanceMin, distanceMax);
        float duration = distance / speed;
        print("Speed: " + speed + ", Distance: " + distance + ", Duration: " + duration);

        targetPosition = this.targetTransform.position + movingDirectionVector * distance;
        this.StartMoving(movingDirectionVector, duration, targetPosition);
    }

    private void StartMoving(Vector3 movingDirectionVector, float duration, Vector3 movingTargetPosition) {
        Vector3 startForward = this.targetTransform.localRotation * Vector3.forward;
        // Vector3 startForward = this.targetTransform.forward;
        float angle = Vector3.Angle(startForward, movingDirectionVector);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetTransform.DOMoveZ(movingTargetPosition.z, duration);

        this.targetCoachIsAtInitial = false;
        Invoke("StopMoving", duration);
    }

    private void StopMoving() {
        this.targetAnimator.SetBool("Moving", false);
    }

    private void TargetIsAtInitial() {
        this.targetCoachIsAtInitial = true;
    }
    private void RotateTarget() {
        print("RotateTarget");
        this.targetTransform.rotation = this.systemManager.sceneOrigin_rotation * Quaternion.Euler(0,180f,0);
        // this.targetTransform.rotation = this.systemManager.sceneOrigin.transform.rotation * Quaternion.Euler(0,180f,0);
    }
}
