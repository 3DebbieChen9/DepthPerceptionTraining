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
                case "Choice_TrainMethod":
                    this.selectionModeManager.moveToLevelSelect();
                    break;
                case "Choice_Training":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode);
                    break;
                case "Level_Easy":
                    this.selectionModeManager.levelSelect(TrainingLevel.easy);
                    break;
                case "Level_Medium":
                    this.selectionModeManager.levelSelect(TrainingLevel.medium);
                    break;
                case "Level_Hard":
                    this.selectionModeManager.levelSelect(TrainingLevel.hard);
                    break;
                case "Choice_Line":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_LineCue);
                    break;
                case "Choice_Sphere_v1":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_SphereCue_v1);
                    break;
                case "Choice_Sphere_v2":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_SphereCue_v2);
                    break;
                case "Choice_Sphere_v3":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_SphereCue_v3);
                    break;
                default:
                    break;
            }
        }

        // float vibrationAmplitude = this.selectionModeManager.mainManager.mySettingInfo.controllerVibrationAmplitude;
        // if (other.gameObject.tag == "Glove_L") {
        //     OVRInput.SetControllerVibration(0.2f, vibrationAmplitude, OVRInput.Controller.LTouch);
        //     Invoke("stopControllerVibration", 0.1f);
        // }
        // else if (other.gameObject.tag == "Glove_R") {
        //     OVRInput.SetControllerVibration(0.2f, vibrationAmplitude, OVRInput.Controller.RTouch);
        //     Invoke("stopControllerVibration", 0.1f);
        // }   
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
