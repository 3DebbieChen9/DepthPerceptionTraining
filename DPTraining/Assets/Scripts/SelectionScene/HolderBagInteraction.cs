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
        if (this.selectionModeManager == null)
        {
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

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L")
        {
            AudioManager.instance.PlaySFX("HitObject");
            switch (this.gameObject.name)
            {
                case "Choice_L":
                    this.selectionModeManager.toggleSelect(false);
                    break;
                case "Choice_R":
                    this.selectionModeManager.toggleSelect(true);
                    break;
                case "Speed_Slowest":
                    this.selectionModeManager.moveToDirectionSelect(MovingSpeed.Slowest);
                    break;
                case "Speed_Fastest":
                    this.selectionModeManager.moveToDirectionSelect(MovingSpeed.Fastest);
                    break;
                case "Speed_Random":
                    this.selectionModeManager.moveToDirectionSelect(MovingSpeed.Random);
                    break;
                case "Direction_Forward":
                    this.selectionModeManager.moveToModeSelect(MovingDirection.Forward);
                    break;
                case "Direction_Backward":
                    this.selectionModeManager.moveToModeSelect(MovingDirection.Backward);
                    break;
                case "Direction_Random":
                    this.selectionModeManager.moveToModeSelect(MovingDirection.Random);
                    break;
                case "Mode_Testing":
                    this.selectionModeManager.modeSelect(SystemMode.TestingMode);
                    break;
                case "Mode_Training":
                    this.selectionModeManager.moveToTrainMethodSelect();
                    break;
                case "Training_Tradition":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode);
                    break;
                case "Training_Line":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_LineCue);
                    break;
                case "Training_BallOnTarget":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_BallCue_onTarget);
                    break;
                case "Training_Bar":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_BarCue);
                    break;
                case "Training_CutoutCue":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_CutoutCue);
                    break;
                case "Training_PowerBar":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_PowerBarCue);
                    break;
                case "Training_Aim":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_AimCue);
                    break;
                case "Training_PowerBar_withAIm":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_PowerBarCue_withAim);
                    break;
                case "Training_Cutout_withAim":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_CutoutCue_withAim);
                    break;
                case "Training_Bar_withAim":
                    this.selectionModeManager.modeSelect(SystemMode.TrainingMode_BarCue_withAim);
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

    void stopControllerVibration()
    {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
