using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationDirectionModule : MonoBehaviour
{
    [SerializeField]
    public EvaluationManager evaluationManager;
    [SerializeField]
    public Transform userCurTransform;

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
        Vector3 movingDirection = (this.userCurTransform.position - this.evaluationManager.startingPosition).normalized;
        Vector3 startForward = this.evaluationManager.startingRotation * Vector3.forward;
        // Vector3 startForward = this.evaluationManager.startingTransform.forward;
        float angle = Vector3.Angle(startForward, movingDirection);
        if (angle > 90.0f) {
            this.evaluationManager.userMovingDirection = SystemManager.MovingDirection.backward;
            if (this.evaluationManager.targetMovingDirection == SystemManager.MovingDirection.forward) {
                print("[DC] Player Moving Backward / Correct Direction");
                return true;
            }
            else {
                print("[DC] Player Moving Backward / Wrong Direction");
                return false;
            }
        }
        else {
            this.evaluationManager.userMovingDirection = SystemManager.MovingDirection.forward;
            if (this.evaluationManager.targetMovingDirection == SystemManager.MovingDirection.backward) {
                print("[DC] Player Moving Forward / Correct Direction");
                return true;
            }
            else {
                print("[DC] Player Moving Forward / Wrong Direction");
                return false;
            }
        }
    }
}
