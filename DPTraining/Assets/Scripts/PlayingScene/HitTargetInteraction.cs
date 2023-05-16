using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HitTargetInteraction : MonoBehaviour
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
        if (this.evaluationManager.isHitTrigger) {
            return;
        }

        if (this.evaluationManager.playingModeManager.curState == PlayingState.idle || this.evaluationManager.playingModeManager.curState == PlayingState.result)
        {
            return;
        }

        float vibrationAmplitude = this.evaluationManager.playingModeManager.mainManager.mySettingInfo.controllerVibration.amplitude;
        float vibrationFrequency = this.evaluationManager.playingModeManager.mainManager.mySettingInfo.controllerVibration.frequency;
        if (other.gameObject.tag == "Glove_L")
        {
            this.evaluationManager.playingModeManager.coachManager.stopMoving();
            this.evaluationManager.isHitTrigger = true;
            this.evaluationManager.reachModule.reachTarget(Hand.Left);

            Transform lightBall = this.evaluationManager.playingModeManager.mainManager.OVRBoxingLeft.transform.Find("LightBallOnPlayer(Clone)");
            if (lightBall)
            {
                lightBall.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                // lightBall.gameObject.GetComponent<BallCueOnPlayer>().Pause(this.evaluationManager.playingModeManager.coachManager.coachAvatar);
            }

            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.LTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
        else if (other.gameObject.tag == "Glove_R")
        {
            this.evaluationManager.playingModeManager.coachManager.stopMoving();
            this.evaluationManager.isHitTrigger = true;
            this.evaluationManager.reachModule.reachTarget(Hand.Right);
            Transform lightBall = this.evaluationManager.playingModeManager.mainManager.OVRBoxingRight.transform.Find("LightBallOnPlayer(Clone)");
            if (lightBall)
            {
                lightBall.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                // lightBall.gameObject.GetComponent<BallCueOnPlayer>().Pause(this.evaluationManager.playingModeManager.coachManager.coachAvatar);
            }

            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.RTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
    }

    void stopControllerVibration()
    {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
