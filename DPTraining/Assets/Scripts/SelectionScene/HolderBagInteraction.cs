using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HolderBagInteraction : MonoBehaviour
{
    [SerializeField]
    private SelectionModeManager selectionModeManager;

    void Awake()
    {
        if (this.selectionModeManager == null) {
            this.selectionModeManager = GameObject.Find("SelectionModeManager").GetComponent<SelectionModeManager>();
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
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            switch (this.gameObject.name) {
                case "Choice_L":
                    this.selectionModeManager.toggleSelect(false);
                    break;
                case "Choice_R":
                    this.selectionModeManager.toggleSelect(true);
                    break;
                case "Choice_Testing":
                    this.selectionModeManager.modeSelect(SystemMode.TestingMode);
                    break;
                case "Choice_Training":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode);
                    break;
                case "Choice_Depth":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingHintMode);
                    break;
                default:
                    break;
            }
        }

        float vibrationAmplitude = this.selectionModeManager.mainManager.mySettingInfo.controllerVibrationAmplitude;
        if (other.gameObject.tag == "Glove_L") {
            OVRInput.SetControllerVibration(0.5f, vibrationAmplitude, OVRInput.Controller.LTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
        else if (other.gameObject.tag == "Glove_R") {
            OVRInput.SetControllerVibration(0.5f, vibrationAmplitude, OVRInput.Controller.RTouch);
            Invoke("stopControllerVibration", 0.3f);
        }   
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
