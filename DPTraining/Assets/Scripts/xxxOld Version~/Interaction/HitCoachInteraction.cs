using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitCoachInteraction : MonoBehaviour
{
    [SerializeField]
    private TestingModeManager testingModeManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.testingModeManager == null) {
            this.testingModeManager = GameObject.Find("TestingModeManager").GetComponent<TestingModeManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        float vibrationAmplitude = this.testingModeManager.systemManager.mySettingInfo.controllerVibrationAmplitude;
        if (other.gameObject.tag == "Glove_L" || other.gameObject.tag == "Glove_R") {
            this.testingModeManager.targetManager.StopMoving();
            if (this.testingModeManager.evaluationManager.isDuringTheUnit) {
                this.testingModeManager.evaluationManager.userIsHitTarget(EvaluationManager.Hand.left, false);
                if (this.gameObject.GetComponent<MeshRenderer>().materials.Length <= 1) {
                    this.gameObject.GetComponent<MeshRenderer>().materials[0].color = Color.red;
                }
                else {
                    foreach (Material m in this.gameObject.GetComponent<MeshRenderer>().materials) {
                        if(m.name == "M_Body (Instance)") {
                            m.color = Color.red;
                            break;
                        }
                    }
                }
            }
            
            if (other.gameObject.tag == "Glove_L") {
                OVRInput.SetControllerVibration(0.5f, vibrationAmplitude, OVRInput.Controller.LTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
            else if (other.gameObject.tag == "Glove_R") {
                OVRInput.SetControllerVibration(0.5f, vibrationAmplitude, OVRInput.Controller.RTouch);
                Invoke("stopControllerVibration", 0.3f);
            }
        }
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
