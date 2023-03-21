using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationPunchModule : MonoBehaviour
{
    // [SerializeField]
    // public SystemManager systemManager;
    // [SerializeField]
    // private TestingManager testingModeManager;
    [SerializeField]
    public EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        // this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        // if (this.testingModeManager == null) {
        //     this.testingModeManager = GameObject.Find("TestingModeManager").GetComponent<TestingManager>();
        // }
        if (this.evaluationManager == null) {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        if (this.evaluationManager.isDuringTheUnit) {
            if (other.gameObject.tag == "Glove_R") {
                this.evaluationManager.userIsPunching(EvaluationManager.Hand.right);
                print("Player is punching with RIGHT hand!");
            }
            else if (other.gameObject.tag == "Glove_L") {
                this.evaluationManager.userIsPunching(EvaluationManager.Hand.left);
                print("Player is punching with LEFT hand!");
            }
        }
    }
}
