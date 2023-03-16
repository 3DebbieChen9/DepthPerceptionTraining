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

    public void reachTarget(string hand) {
        if (this.evaluationManager.isDuringTheUnit) {
            // this.evaluationManager.systemManager.consoleText.text += "Reach Target with " + hand + "\n";
            print("Reach Target with " + hand);
            if (hand == "L") {
                this.evaluationManager.userIsHitTarget(EvaluationManager.Hand.left);
            }
            else if(hand == "R") {
                this.evaluationManager.userIsHitTarget(EvaluationManager.Hand.right);
            }
        }
    }
}
