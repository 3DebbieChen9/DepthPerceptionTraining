using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationMovingModule : MonoBehaviour
{
    [SerializeField]
    public EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.evaluationManager == null) {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
        this.evaluationManager.playerStartMoving = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "UserCenterPosition") {
            if (this.evaluationManager.isDuringTheUnit && !this.evaluationManager.playerStartMoving) {
                this.evaluationManager.userIsMoving();
                this.evaluationManager.playerStartMoving = true;
                print("Player is moving!");
            }
            this.evaluationManager.userIsAtOrigin = false;
        }
        
    }

    // void OnTriggerEnter(Collider other) 
    // {
    //     if (!this.evaluationManager.isDuringTheUnit) {
    //         if (other.gameObject.tag == "Main Camera") {
    //             this.evaluationManager.userIsAtOrigin = true;
    //             print("The user is back to the sceneOrigin");
    //         }
    //     }    
    // }
    void OnTriggerStay (Collider other) 
    {
        if (!this.evaluationManager.isDuringTheUnit) {
            if (other.gameObject.name == "UserCenterPosition") {
                this.evaluationManager.userIsAtOrigin = true;
                // print("The user is at the sceneOrigin");
            }
        }    
    }

    private float calculateHorizatonalDistance(Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }
}
