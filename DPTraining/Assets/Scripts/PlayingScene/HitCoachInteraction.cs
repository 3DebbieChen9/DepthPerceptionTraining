using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HitCoachInteraction : MonoBehaviour
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
        
        if (other.gameObject.tag == "Glove_L" || other.gameObject.tag == "Glove_R") {
            // if (this.evaluationManager.isDuringTheUnit) {
            //     this.evaluationManager.userIsHitCoach(Hand.Left, false);   
            // }
            this.evaluationManager.userIsHitCoach(Hand.Left, false);
            // if (this.gameObject.name != "Boxing_Gloves_L" && this.gameObject.name != "Boxing_Gloves_R") {
            //     Debug.Log("Hit Coach: Add Ball here");
            // }
            float vibrationAmplitude = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.amplitude;
            float vibrationFrequency = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.frequency;
            if (other.gameObject.tag == "Glove_L") {
                OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.LTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
            else if (other.gameObject.tag == "Glove_R") {
                OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.RTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
        }
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
