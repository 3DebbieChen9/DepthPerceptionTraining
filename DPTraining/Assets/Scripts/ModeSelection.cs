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
        this.selectionRoomTransform();
        this.selectionRoom.SetActive(true);
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
                                                    // this.systemManager.sceneOrigin.transform.position.y + 0.02f,
                                                    // this.systemManager.sceneOrigin.transform.position.y,
                                                    tmpPoint.z);

        Vector3 lookTarget = this.systemManager.sceneOrigin.transform.position;
        // this.selectionRoom.transform.LookAt(lookTarget);
        // this.selectionRoom.transform.LookAt(lookTarget, Vector3.right);
    }

    public void switchTargetMode() {
        switch (this.systemManager.targetSystemMode)
        {
            case SystemManager.SystemMode.Testing:
                this.systemManager.targetSystemMode = SystemManager.SystemMode.Training_Traditional;
                this.targetSystemModeText.text = "Traditional\nTraining";
                break;
            case SystemManager.SystemMode.Training_Traditional:
                this.systemManager.targetSystemMode = SystemManager.SystemMode.Training_Hint;
                this.targetSystemModeText.text = "Hint\nTraining";
                break;
            case SystemManager.SystemMode.Training_Hint:
                this.systemManager.targetSystemMode = SystemManager.SystemMode.Testing;
                this.targetSystemModeText.text = "Testing";
                break;
            default:
                this.systemManager.targetSystemMode = SystemManager.SystemMode.Testing;
                this.targetSystemModeText.text = "Testing";
                break;
        }
    }

    public void switchOnRing() {
        this.systemManager.isOnRing = !this.systemManager.isOnRing;
        if (this.systemManager.isOnRing) {
            this.ringModeText.text = "On Ring";
        } else {
            this.ringModeText.text = "Off Ring";
        }
    }

    public void startSystem() {
        this.systemManager.changeSystemMode(this.systemManager.targetSystemMode);
        this.systemManager.consoleTitle.text = "Training";
        this.systemManager.consoleText.text = "-";
        this.systemManager.changeScene("Training");
    }
}
