using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationStraightModule : MonoBehaviour
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

    public bool judgeArmStraight(EvaluationManager.Hand hand) {
        print("Determine whether the user's arm is straight or not according to right/left hand");
        return true; // TODO: Implement this function
    }
}
