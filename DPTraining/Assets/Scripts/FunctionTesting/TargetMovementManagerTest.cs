using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TargetMovementManagerTest : MonoBehaviour
{
    [SerializeField]
    public SystemManager.MovingDirection targetMovingDirection = SystemManager.MovingDirection.initial;
    [SerializeField]
    public GameObject targetObject;
    [SerializeField]
    public Animator targetAnimator;
    private Vector3 targetInitialPosition = new Vector3(0.0f, 0.0f, 0.0f);
    [SerializeField]
    public GameObject origin;
    
    [SerializeField]
    private bool targetIsLeftHanded = false;
    private float targetCenterToEdgeLength = 0.43f;
    private float targetToUserMultiple = 1.5f;


    // Parameters from SystemManager.cs
    private float userArmLength = 0.54f; // upper-arm + forearm
    private float avgLengthInVR = 4.0f; // movable range length in VR in meters

    // Start is called before the first frame update
    void Start()
    {
        this.targetAnimator = this.targetObject.GetComponent<Animator>();
        this.targetInitialPosition = this.origin.transform.position + this.origin.transform.forward * this.userArmLength * targetToUserMultiple + this.origin.transform.forward * targetCenterToEdgeLength;
        this.targetInitialPosition = new Vector3(this.targetInitialPosition.x, this.targetObject.transform.position.y, this.targetInitialPosition.z);
        this.targetAnimator.SetBool("LeftHanded", this.targetIsLeftHanded);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TargetMoveToInitial() {
        // Concept is correct!!!! The moving speed, duration need to set as parameters
        Vector3 movingDirection = (this.targetInitialPosition - this.targetObject.transform.position).normalized;
        // this.StartMoving(movingDirection, 5.0f, this.targetInitialPosition);
        Vector3 startForward = this.targetObject.transform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetObject.transform.DOMove(this.targetInitialPosition, 5.0f);
        Invoke("StopMoving", 5.0f);
    }

    public void TargetMovement (string direction) {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        Vector3 targetPosition = new Vector3(0.0f, 0.0f, 0.0f);
        float targetMoveDistanceMin = 0.0f;
        float targetMoveDistanceMax = 0.0f;

        if (direction == "Forward") {
            this.targetMovingDirection = SystemManager.MovingDirection.forward;
            movingDirectionVector = (this.origin.transform.position - this.targetObject.transform.position).normalized;

            targetMoveDistanceMin = this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength;
            print("WTF: " + (this.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength).ToString());
            targetMoveDistanceMax = Mathf.Max(this.avgLengthInVR / 2.0f - this.userArmLength * 2.0f + this.userArmLength * this.targetToUserMultiple + this.targetCenterToEdgeLength, targetMoveDistanceMin);
        }
        else if (direction == "Backward") {
            this.targetMovingDirection = SystemManager.MovingDirection.backward;
            movingDirectionVector = -(this.origin.transform.position - this.targetObject.transform.position).normalized;

            targetMoveDistanceMin = this.userArmLength;
            print("Fxxk: " + (this.avgLengthInVR / 2.0f - this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength).ToString());
            targetMoveDistanceMax = Mathf.Max(this.avgLengthInVR / 2.0f - this.userArmLength * (1.0f + this.targetToUserMultiple) + this.targetCenterToEdgeLength, targetMoveDistanceMin);
        }
        else {
            this.targetMovingDirection = SystemManager.MovingDirection.initial;
        }

        print(direction + " Distance Min = " + targetMoveDistanceMin + ", Distance Max = " + targetMoveDistanceMax);
        float speed = Random.Range(0.2f, 1.0f);
        float distance = Random.Range(targetMoveDistanceMin, targetMoveDistanceMax);
        float duration = distance / speed;
        print("Speed: " + speed + ", Distance: " + distance + ", Duration: " + duration);

        targetPosition = this.targetObject.transform.position + movingDirectionVector * distance;
        this.StartMoving(movingDirectionVector, duration, targetPosition);
        // Vector3 startForward = this.targetObject.transform.forward;
        // float angle = Vector3.Angle(startForward, movingDirectionVector);
        // float rad = angle * Mathf.Deg2Rad;
        // this.targetAnimator.SetBool("Moving", true);
        // this.targetAnimator.SetFloat("Direction", rad);

        // float speed = 7.0f;
        // float distance = Random.Range(targetMoveDistanceMin, targetMoveDistanceMax);
        // float duration = distance / speed;
        // this.targetObject.transform.DOMoveZ(this.origin.transform.position.z - this.userArmLength, duration);
        // this.targetObject.transform.DOMove(this.targetInitialPosition, 5.0f);
        // Invoke("StopMoving", duration);
    }

    private void StartMoving(Vector3 movingDirectionVector, float duration, Vector3 movingTargetPosition) {
        Vector3 startForward = this.targetObject.transform.forward;
        float angle = Vector3.Angle(startForward, movingDirectionVector);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);

        this.targetObject.transform.DOMoveZ(movingTargetPosition.z, duration);
        Invoke("StopMoving", duration);
    }

    public void StopMoving() {
        this.targetAnimator.SetBool("Moving", false);
    }

    public void changeHandedness() { // Debug Only
        this.targetIsLeftHanded = !this.targetIsLeftHanded;
        this.targetAnimator.SetBool("LeftHanded", this.targetIsLeftHanded);
    }

    
    
}
