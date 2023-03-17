using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TargetMovementTest : MonoBehaviour
{
    [SerializeField]
    public GameObject plane; // DEBUG-ONLY

    [SerializeField]
    public TargetRenderInitial targetRenderInitial;
    [SerializeField]
    public GameObject sceneOrigin;
    [SerializeField]
    public Vector3 sceneOriginPosition;
    [SerializeField]
    public Quaternion sceneOriginRotation;
    
    [SerializeField]
    public OVRCameraRig OVRCameraRig;
    [SerializeField]
    public Transform targetTransform;
    [SerializeField]
    public Animator targetAnimator;
    [SerializeField]
    public Vector3 targetInitialPosition;

    [SerializeField]
    private float targetMoveDistanceMin_Forward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMax_Forward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMin_Backward = 0.0f;
    [SerializeField]
    private float targetMoveDistanceMax_Backward = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        this.targetRenderInitial.initialTargetRender();
        this.sceneOrigin.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            this.sceneOrigin.transform.position = this.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.sceneOriginPosition = this.sceneOrigin.transform.position;
            this.sceneOriginRotation = this.sceneOrigin.transform.rotation;
            this.sceneOrigin.SetActive(true);
            this.plane.transform.position = this.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.targetTransform.gameObject.SetActive(true);

            Vector3 originForward = this.sceneOriginRotation * Vector3.forward;
            this.targetInitialPosition = this.sceneOriginPosition + 
                                            originForward * 0.55f * 1.5f + 
                                            originForward * 0.43f;
            this.targetRenderInitial.initialTargetRender();

            this.targetMoveDistanceMin_Forward = 0.55f * 1.5f + 0.43f;
            this.targetMoveDistanceMax_Forward = Mathf.Max(4.0f / 2.0f - 0.55f* 2.0f + 
                                                            0.55f * 1.5f + 0.43f, 
                                                            targetMoveDistanceMin_Forward);

            this.targetMoveDistanceMin_Backward = 0.55f;
            this.targetMoveDistanceMax_Backward = Mathf.Max(4.0f / 2.0f 
                                                            - (0.55f * (1.0f + 1.5f) + 0.43f));

            this.targetMoveToInitial();
        }
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.targetMoveToInitial();
        }
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            this.targetMoveBackward();
        }
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.LTouch)) {
            this.targetMoveForward();
        }
        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch)) {
            this.StopMoving();
        }
    }

    private void RotateTarget() {
        print("RotateTarget");
        this.targetTransform.transform.rotation = this.sceneOriginRotation * Quaternion.Euler(0,180f,0);
    }

    private void targetMoveToInitial() {
        DOTween.Kill(this.targetTransform);
        this.RotateTarget();
        Vector3 movingDirection = (this.targetInitialPosition - this.targetTransform.position).normalized;
        Vector3 startForward = this.targetTransform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetTransform.DOMove(this.targetInitialPosition, 0.0f);
        this.targetAnimator.SetBool("Moving", false);
    }

    private void targetMoveBackward() {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        Vector3 targetPosition = new Vector3(0.0f, 0.0f, 0.0f);
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.2f;
        float speedMax = 0.5f;

        print("Target Moving Backward");
        movingDirectionVector = -this.targetTransform.forward.normalized;
        // movingDirectionVector = -(this.systemManager.sceneOrigin_poisition - this.targetTransform.position).normalized;
        distanceMin = this.targetMoveDistanceMin_Backward;
        distanceMax = this.targetMoveDistanceMax_Backward;

        float speed = UnityEngine.Random.Range(speedMin, speedMax);
        float distance = UnityEngine.Random.Range(distanceMin, distanceMax);
        float duration = distance / speed;
        print("Speed: " + speed + ", Distance: " + distance + ", Duration: " + duration);

        targetPosition = this.targetTransform.position + movingDirectionVector * distance;
        this.StartMoving(movingDirectionVector, duration, targetPosition);
    }

    private void targetMoveForward() {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 0.0f);
        Vector3 targetPosition = new Vector3(0.0f, 0.0f, 0.0f);
        float distanceMin = 0.0f;
        float distanceMax = 0.0f;
        float speedMin = 0.2f;
        float speedMax = 0.5f;

        print("Target Moving Forward");
        movingDirectionVector = this.targetTransform.forward.normalized;
        // movingDirectionVector = (this.systemManager.sceneOrigin_poisition - this.targetTransform.position).normalized;
        distanceMin = this.targetMoveDistanceMin_Forward;
        distanceMax = this.targetMoveDistanceMax_Forward;

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
        this.targetAnimator.SetBool("isDuringTheUnit", true); // DEBUG-ONLY
        print("DAMN " + this.targetAnimator.GetBool("isDuringTheUnit") + " | " + this.targetAnimator.GetBool("Moving"));
        this.targetTransform.DOMoveZ(movingTargetPosition.z, duration);

        Invoke("StopMoving", duration);
    }

    public void StopMoving() {
        this.targetAnimator.SetBool("isDuringTheUnit", false); // DEBUG-ONLY
        this.targetAnimator.SetBool("Moving", false);
        DOTween.Kill(this.targetTransform);
        // this.targetTransform.DOMove(this.targetTransform.position, 0.0f);
    }
}
