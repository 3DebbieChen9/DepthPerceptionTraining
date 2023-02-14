using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetInteraction_L : MonoBehaviour
{
    [SerializeField]
    // private TestingManager testingModeManager;
    private EvaluationReachModule evaluationReachModule;

    // Start is called before the first frame update
    void Start()
    {
        if (this.evaluationReachModule == null) {
            this.evaluationReachModule = GameObject.Find("EvaluationManager").GetComponent<EvaluationReachModule>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            this.evaluationReachModule.reachTarget("L");
        }
    }
}
