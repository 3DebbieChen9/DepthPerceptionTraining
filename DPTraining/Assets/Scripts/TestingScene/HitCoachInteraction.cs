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
            this.evaluationManager = GameObject.Find("TestingModeManager").GetComponent<EvaluationManager>();
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
            this.evaluationManager.testingModeManager.coachManager.stopMoving();
            if (this.evaluationManager.isDuringTheUnit) {
                this.evaluationManager.userIsHitCoach(Hand.Left, false);
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
            
            
        }
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

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
