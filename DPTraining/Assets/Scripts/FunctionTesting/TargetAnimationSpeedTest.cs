using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TargetAnimationSpeedTest : MonoBehaviour
{
    [SerializeField]
    public Animator targetAnimator;
    [SerializeField]
    public float movingAnimationDefaultSpeed = 0.8f; 
    [SerializeField]
    public Transform targetTransform;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void moveTarget(float speed) {
        Vector3 movingDirectionVector = new Vector3(0.0f, 0.0f, 1.0f);
        float duration = 3.0f;
        float distance = speed * duration;

        Vector3 targetPosition = this.targetTransform.position + movingDirectionVector * distance;

        Vector3 startForward = (this.targetTransform.localRotation * Vector3.forward).normalized;
        float angle = Vector3.Angle(startForward, movingDirectionVector);
        float rad = angle * Mathf.Deg2Rad;
        this.targetAnimator.SetBool("Moving", true);
        this.targetAnimator.SetFloat("Direction", rad);
         
        float movingAnimationSpeed = 1.0f;
        if (speed > movingAnimationDefaultSpeed) {
            movingAnimationSpeed = speed / movingAnimationDefaultSpeed;
        }
        else {
            movingAnimationSpeed = 1.0f;
        }
        this.targetAnimator.SetFloat("Speed", movingAnimationSpeed);

        this.targetTransform.DOMoveZ(targetPosition.z, duration);

        Invoke("StopMoving", duration);
    }

    public void StopMoving() {
        this.targetAnimator.SetBool("Moving", false);
        DOTween.Kill(this.targetTransform);
    }
}
