using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HitCoachInteraction : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;

    void Awake()
    {
        if (this.evaluationManager == null)
        {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (this.evaluationManager.playingModeManager.curState == PlayingState.idle || this.evaluationManager.playingModeManager.curState == PlayingState.result)
        {
            return;
        }

        float vibrationAmplitude = this.evaluationManager.playingModeManager.mainManager.mySettingInfo.controllerVibration.amplitude;
        float vibrationFrequency = this.evaluationManager.playingModeManager.mainManager.mySettingInfo.controllerVibration.frequency;
        if (other.gameObject.tag == "Glove_L" || other.gameObject.tag == "Glove_R")
        {
            this.evaluationManager.playingModeManager.coachManager.stopMoving();
            if (other.gameObject.tag == "Glove_L")
            {
                this.evaluationManager.userIsHitCoach(Hand.Left, false);
                OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.LTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
            else if (other.gameObject.tag == "Glove_R")
            {
                this.evaluationManager.userIsHitCoach(Hand.Right, false);
                OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.RTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
        }
    }

    void stopControllerVibration()
    {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
