using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationDirectionModule : MonoBehaviour
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

    public bool judgeMovingDirection() {
        print("Determine whether the user's moving direction is correct or not (compare to the target's movement)");
        return true; // TODO: Implement this function
    }
}
