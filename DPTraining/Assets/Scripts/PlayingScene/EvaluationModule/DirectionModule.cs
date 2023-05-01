using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class DirectionModule : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;
    [SerializeField]
    private Transform userCenter;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool judgeMovingDirection() {
        Vector3 userMovingDirection = (this.userCenter.position - this.evaluationManager.startingPoint.transform.position).normalized;
        // Vector3 startForward = this.evaluationManager.startingPoint.transform.forward;
        Vector3 startForward = this.evaluationManager.mainManager.sceneOrigin.transform.forward;
        float angle = Vector3.Angle(userMovingDirection, startForward);
        if (angle > 90.0f && angle < 270.0f) {
            this.evaluationManager.userMovingDirection = MovingDirection.Backward;
            if (this.evaluationManager.coachMovingDirection == MovingDirection.Forward) {
                Debug.Log($"[Moving Direction] Angle: {angle}, User Backward, Coach Forward");
                return true;
            }
            else {
                return false;
            }
        }
        else {
            this.evaluationManager.userMovingDirection = MovingDirection.Forward;
            if (this.evaluationManager.coachMovingDirection == MovingDirection.Backward) {
                Debug.Log($"[Moving Direction] Angle: {angle}, User Forward, Coach Backward");
                return true;
            }
            else {
                return false;
            }
        }
    }
}
