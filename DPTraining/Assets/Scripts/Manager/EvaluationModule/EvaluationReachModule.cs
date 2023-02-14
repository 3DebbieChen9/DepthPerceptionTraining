using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationReachModule : MonoBehaviour
{
    [SerializeField]
    public EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.evaluationManager == null) {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void reachTarget(string target) {
        print("Reach Target " + target);
        // if (this.unitNum != 0 && this.timerOn == false) {
        //     this.successCount += 1;
        //     this.isSuccess = true;
        //     this.performanceResult();
        // }
    }
}
