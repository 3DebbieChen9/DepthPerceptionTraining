using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TargetMovementManagerTest : MonoBehaviour
{
    [SerializeField]
    public SystemManager.MovingDirection targetMovingDirection = SystemManager.MovingDirection.initial;
    // [SerializeField]
    // public bool targetIsMoving = false;
    // [SerializeField]
    // public float targetMovingSpeed = 0.0f;
    [SerializeField]
    public GameObject targetObject;
    [SerializeField]
    public Animator targetAnimator;
    private Vector3 targetInitialPosition = new Vector3(0.0f, 0.0f, 0.0f);
    [SerializeField]
    public GameObject user;
    private float userArmLength = 0.54f; // upper-arm + forearm
    private bool targetIsLeftHanded = false;

    // Start is called before the first frame update
    void Start()
    {
        this.targetAnimator = this.targetObject.GetComponent<Animator>();
        this.targetInitialPosition = this.user.transform.position + this.user.transform.forward * this.userArmLength * 1.5f + this.user.transform.forward * 0.5f;
        print(this.targetInitialPosition);
        this.targetInitialPosition = new Vector3(this.targetInitialPosition.x, this.targetObject.transform.position.y, this.targetInitialPosition.z);
        this.targetAnimator.SetBool("LeftHanded", this.targetIsLeftHanded);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void FixedUpdate() 
    {
        // if (this.targetMovingSpeed != 0.0f) {
        //     this.targetIsMoving = true;
        // }
        // else {
        //     this.targetIsMoving = false;
        // }
        // this.transform.Translate(Vector3.forward * Time.deltaTime * this.targetMovingSpeed);    

    }

    public void MoveToCenter() {
        // Concept is correct!!!! The moving speed, duration need to set as parameters
        Vector3 movingDirection = (this.targetInitialPosition - this.targetObject.transform.position).normalized;
        Vector3 startForward = this.targetObject.transform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
        this.targetObject.transform.DOMove(this.targetInitialPosition, 5.0f);
        Invoke("StopMoving", 5.0f);
        
        // this.targetObject.transform.LookAt(this.user.transform.position);
        print(this.targetInitialPosition);
    }

    public void StopMoving() {
        this.targetAnimator.SetBool("Moving", false);
        // this.targetAnimator.SetFloat("Direction", 1.5708f);
    }

    public void MoveForward() {
        this.targetMovingDirection = SystemManager.MovingDirection.forward;
        Vector3 movingDirection = (this.user.transform.position - this.targetObject.transform.position).normalized;
        Vector3 startForward = this.targetObject.transform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);

        float speed = 7.0f;
        float distance = Vector3.Distance(this.targetObject.transform.position, this.user.transform.position);
        float duration = distance / speed;
        this.targetObject.transform.DOMoveZ(this.user.transform.position.z - this.userArmLength, duration);
        // this.targetObject.transform.DOMove(this.targetInitialPosition, 5.0f);
        Invoke("StopMoving", duration);
    }

    public void changeHandedness() {
        this.targetIsLeftHanded = !this.targetIsLeftHanded;
        this.targetAnimator.SetBool("LeftHanded", this.targetIsLeftHanded);
    }

    
}
