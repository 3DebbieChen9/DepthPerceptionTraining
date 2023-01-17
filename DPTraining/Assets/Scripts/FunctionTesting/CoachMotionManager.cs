using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoachMotionManager : MonoBehaviour
{
    [SerializeField]
    public GameObject coach;
    [SerializeField]
    public bool isMoving = false;
    [SerializeField]
    private float speed = 0.0f;
    [SerializeField]
    private int movingDiretion = 0; // 0: forward, 1: backward

    // Start is called before the first frame update
    void Start()
    {
        this.speed = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (this.speed != 0.0f) {
            this.isMoving = true;
        }
        else {
            this.isMoving = false;
        }
        this.coach.transform.Translate(Vector3.forward * Time.deltaTime * this.speed);
    }

    public void startMoving() {
        if (this.movingDiretion == 0) {
            this.speed = 0.7f;
            print("Moving Forward");
        }
        else {
            this.speed = -0.7f;
            print("Moving Backward");
        }
        this.coach.GetComponent<Animation>().Play();
        
    }

    public void switchDirection() {
        this.movingDiretion = (this.movingDiretion + 1) % 2;
        if (this.isMoving) {
            if (this.movingDiretion == 0) {
                this.speed = 0.7f;
                print("Moving Forward");
            }
            else {
                this.speed = -0.7f;
                print("Moving Backward");
            }
        }
        
    }

    public void stopMoving() {
        this.speed = 0.0f;
        this.coach.GetComponent<Animation>().Stop();
        print("Stop");
    }
}
