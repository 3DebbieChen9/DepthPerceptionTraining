using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PunchModule : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;
    private bool rightStayInTrigger;
    private bool leftStayInTrigger;

    // Start is called before the first frame update
    void Start()
    {
        this.rightStayInTrigger = false;
        this.leftStayInTrigger = false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (this.rightStayInTrigger && this.leftStayInTrigger)
        {
            this.evaluationManager.userIsNotPunching();
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (this.evaluationManager.playingModeManager.curState == PlayingState.idle || this.evaluationManager.playingModeManager.curState == PlayingState.result)
        {
            return;
        }

        switch (other.gameObject.tag)
        {
            case "Glove_R":
                this.evaluationManager.userIsPunching(Hand.Right);
                this.rightStayInTrigger = false;
                break;
            case "Glove_L":
                this.evaluationManager.userIsPunching(Hand.Left);
                this.leftStayInTrigger = false;
                break;
            default:
                break;
        }
    }

    void OnTriggerStay(Collider other)
    {
        switch (other.gameObject.tag)
        {
            case "Glove_R":
                this.rightStayInTrigger = true;
                break;
            case "Glove_L":
                this.leftStayInTrigger = true;
                break;
            default:
                break;
        }
    }
}