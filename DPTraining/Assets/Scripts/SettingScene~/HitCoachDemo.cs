using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class HitCoachDemo : MonoBehaviour
{
    [SerializeField]
    private SettingManager settingManager;

    void Awake() { 
        if (this.settingManager == null) {
            this.settingManager = GameObject.Find("SettingManager").GetComponent<SettingManager>();
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
            this.settingManager.coachManager.stopMoving();
            if (!this.settingManager.isHitTrigger) {
                this.settingManager.isHitTrigger = true;
                if (this.gameObject.name != "Boxing_Gloves_L" && this.gameObject.name != "Boxing_Gloves_R") {
                    if (this.gameObject.GetComponent<MeshRenderer>().materials.Length <= 1) {
                        this.gameObject.GetComponent<MeshRenderer>().materials[0].color = Color.red;
                    }
                    else {
                        foreach (Material m in this.gameObject.GetComponent<MeshRenderer>().materials) {
                            if(m.name == "M_Body (Instance)" || m.name == "M_Body") {
                                m.color = Color.red;
                                break;
                            }
                        }
                    }
                }
                float vibrationAmplitude = this.settingManager.mainManager.mySettingInfo.controllerVibration.amplitude;
                float vibrationFrequency = this.settingManager.mainManager.mySettingInfo.controllerVibration.frequency;
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
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
