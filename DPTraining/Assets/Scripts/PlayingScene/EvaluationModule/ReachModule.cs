using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class ReachModule : MonoBehaviour
{
    [SerializeField]
    public EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void reachTarget(Hand hand) {
        this.evaluationManager.userIsHitCoach(hand, true);
        // if (this.evaluationManager.isDuringTheUnit) {
        //     this.evaluationManager.userIsHitCoach(hand, true);
        // }
    }
}
