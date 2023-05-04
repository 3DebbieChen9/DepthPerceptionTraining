using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class StraightCollider : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager = null;
    [SerializeField]
    private EvaluationManager evaluationManager = null;


    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }    
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (this.evaluationManager == null 
            && this.mainManager.curSystemMode != SystemMode.StartMode
            && this.mainManager.curSystemMode != SystemMode.CalibrationMode
            && this.mainManager.curSystemMode != SystemMode.SelectionMode) {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
        // if (this.evaluationManager == null && this.mainManager.curSystemMode == SystemMode.TestingMode) {
        //     this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        // }
    }

    void OnTriggerEnter(Collider other) {
        if (this.evaluationManager == null) {
            return;
        }

        float vibrationAmplitude = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.amplitude;
        float vibrationFrequency = this.evaluationManager.mainManager.mySettingInfo.controllerVibration.frequency;
        if (other.gameObject.tag == "Glove_L") {
            // Debug.Log("Hit Straight Collider - Left");
            this.evaluationManager.playingModeManager.curUnitResult.isStraight = true;
            Debug.Log($"Left Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Left)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Left)}");

            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.LTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
        else if (other.gameObject.tag == "Glove_R") {
            // Debug.Log("Hit Straight Collider - Right");
            this.evaluationManager.playingModeManager.curUnitResult.isStraight = true;
            Debug.Log($"Right Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Right)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Right)}");
            
            OVRInput.SetControllerVibration(vibrationFrequency, vibrationAmplitude, OVRInput.Controller.RTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
