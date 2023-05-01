using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HitTargetInteraction : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;

    void Awake() {
        if (this.evaluationManager == null) {
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

    void OnTriggerEnter(Collider other) {
        float vibrationAmplitude = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.amplitude;
        float vibrationFrequency = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.frequency;
        if (other.gameObject.tag == "Glove_L") {
            this.evaluationManager.playingModeManager.coachManager.stopMoving();
            // if (this.evaluationManager.isDuringTheUnit) {
            //     this.evaluationManager.reachModule.reachTarget(Hand.Left);
            // }
            this.evaluationManager.reachModule.reachTarget(Hand.Left);
            Debug.Log("Hit Coach Shoulder: Add Ball here");
            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.LTouch);
            Invoke("stopControllerVibration", 0.3f);
            
        }
        else if (other.gameObject.tag == "Glove_R") {
            this.evaluationManager.playingModeManager.coachManager.stopMoving();
            // if (this.evaluationManager.isDuringTheUnit) {
            //     this.evaluationManager.reachModule.reachTarget(Hand.Right);
            // }
            this.evaluationManager.reachModule.reachTarget(Hand.Right);
            Debug.Log("Hit Coach Shoulder: Add Ball here");
            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.RTouch);
            Invoke("stopControllerVibration", 0.3f); 
        }
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
