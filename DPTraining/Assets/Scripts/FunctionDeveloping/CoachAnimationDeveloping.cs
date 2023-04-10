using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CoachAnimationDeveloping : MonoBehaviour
{
    [SerializeField] private Animator coachAnimator;
    [SerializeField] private GameObject coachStickman;
    [SerializeField] private GameObject mainCamera;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Keypad0)) {
            this.coachAnimator.SetTrigger("idle");
            this.stopMoving();
        }

        if (Input.GetKeyDown(KeyCode.Keypad1)) {
            this.coachAnimator.SetTrigger("forward");
            this.moveForward();
        }

        if (Input.GetKeyDown(KeyCode.Keypad2)) {
            this.coachAnimator.SetTrigger("walking");
            this.moveForward();
        }

        if (Input.GetKeyDown(KeyCode.Keypad3)) {
            this.coachAnimator.SetTrigger("step forward");
            this.moveForward();
        }

        if (Input.GetKeyDown(KeyCode.Keypad4)) {
            this.coachAnimator.SetTrigger("backward");
            this.moveBackward();
        }

        if (Input.GetKeyDown(KeyCode.Keypad5)) {
            this.coachAnimator.SetTrigger("walking backward");
            this.moveBackward();
        }

        if (Input.GetKeyDown(KeyCode.Keypad6)) {
            this.coachAnimator.SetTrigger("step backward");
            this.moveBackward();
        }

        if (Input.GetKey(KeyCode.Q)) {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.0f, 0.01f);
        }

        if (Input.GetKey(KeyCode.E)) {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.0f, -0.01f);
        }

        if (Input.GetKey(KeyCode.A)) {
            this.mainCamera.transform.position += new Vector3(0.01f, 0.0f, 0.0f);
        }

        if (Input.GetKey(KeyCode.D)) {
            this.mainCamera.transform.position += new Vector3(-0.01f, 0.0f, 0.0f);
        }

        if (Input.GetKey(KeyCode.W)) {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.01f, 0.0f);
        }

        if (Input.GetKey(KeyCode.S)) {
            this.mainCamera.transform.position += new Vector3(0.0f, -0.01f, 0.0f);
        }
        
    }

    public void moveForward() {
        float distance = 3.0f;
        float speed = 0.5f;
        float duration = distance / speed;
        this.coachStickman.transform.DOMoveZ(this.coachStickman.transform.position.z + distance, duration);
        Invoke("animationIdle", duration);
    }

    public void moveBackward() {
        float distance = 3.0f;
        float speed = 0.5f;
        float duration = distance / speed;
        this.coachStickman.transform.DOMoveZ(this.coachStickman.transform.position.z - distance, duration);
        Invoke("animationIdle", duration);
    }

    public void stopMoving() {
        DOTween.Kill(this.coachStickman.transform);
    }

    public void animationIdle() {
        this.coachAnimator.SetTrigger("idle");
    }
}
