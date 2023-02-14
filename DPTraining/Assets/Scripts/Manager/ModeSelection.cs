using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ModeSelection : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public GameObject selectionRoom;
    [SerializeField]
    private TMP_Text targetSystemModeText;
    [SerializeField]
    private TMP_Text ringModeText; 

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        
        this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;
        this.systemManager.OVRControllerLeft.SetActive(false);
        this.systemManager.OVRControllerRight.SetActive(false);
        this.systemManager.OVRBoxingLeft.SetActive(true);
        this.systemManager.OVRBoxingRight.SetActive(true);
        this.selectionRoomTransform();
        this.selectionRoom.SetActive(true);

        if (this.systemManager.mySettingInfo.isOnRing) {
            this.ringModeText.text = "On Ring";
        } else {
            this.ringModeText.text = "Off Ring";
        }
        this.systemManager.mySettingInfo.targetSystemMode = SystemManager.SystemMode.Testing;
        this.targetSystemModeText.text = "Testing";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void selectionRoomTransform() {
        // Vector3 tmpPoint = this.systemManager.sceneOrigin.transform.position - this.systemManager.sceneVerticalDirection * 1.70f * (this.systemManager.referenceDistance / 4.0f) * this.systemManager.scaleTransferFactor;
        Vector3 tmpPoint = this.systemManager.sceneOrigin.transform.position;
        this.selectionRoom.transform.position = new Vector3 (tmpPoint.x,
                                                    this.systemManager.sceneOrigin.transform.position.y - 0.01f,
                                                    tmpPoint.z);
    }

    public void switchTargetMode() {
        switch (this.systemManager.mySettingInfo.targetSystemMode)
        {
            case SystemManager.SystemMode.Testing:
                this.systemManager.mySettingInfo.targetSystemMode = SystemManager.SystemMode.Training_Traditional;
                this.targetSystemModeText.text = "Traditional\nTraining";
                break;
            case SystemManager.SystemMode.Training_Traditional:
                this.systemManager.mySettingInfo.targetSystemMode = SystemManager.SystemMode.Training_Hint;
                this.targetSystemModeText.text = "Hint\nTraining";
                break;
            case SystemManager.SystemMode.Training_Hint:
                this.systemManager.mySettingInfo.targetSystemMode = SystemManager.SystemMode.Testing;
                this.targetSystemModeText.text = "Testing";
                break;
            default:
                this.systemManager.mySettingInfo.targetSystemMode = SystemManager.SystemMode.Testing;
                this.targetSystemModeText.text = "Testing";
                break;
        }
    }

    public void switchOnRing() {
        this.systemManager.mySettingInfo.isOnRing = !this.systemManager.mySettingInfo.isOnRing;
        if (this.systemManager.mySettingInfo.isOnRing) {
            this.ringModeText.text = "On Ring";
        } else {
            this.ringModeText.text = "Off Ring";
        }
    }

    public void switchHandedness() {
        this.systemManager.mySettingInfo.targetIsRightHanded = !this.systemManager.mySettingInfo.targetIsRightHanded;
    }

    public void startSystem() {
        this.systemManager.changeSystemMode(this.systemManager.mySettingInfo.targetSystemMode);
        this.systemManager.consoleTitle.text = "Testing";
        this.systemManager.consoleText.text = "-";
        this.systemManager.changeScene("Testing");
    }
}
