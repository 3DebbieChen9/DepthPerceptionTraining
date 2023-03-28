using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PunchModule : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        // if (this.evaluationManager.isDuringTheUnit || this.evaluationManager.checkPunching) {
        if (this.evaluationManager.isDuringTheUnit) {
            if (other.gameObject.tag == "Glove_R") {
                this.evaluationManager.userIsPunching(Hand.Right);
                // this.evaluationManager.checkPunching = false;
            }
            else if (other.gameObject.tag == "Glove_L") {
                this.evaluationManager.userIsPunching(Hand.Left);
                // this.evaluationManager.checkPunching = false;
            }
        }
    }
}
