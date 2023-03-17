using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SettingSceneManager : MonoBehaviour
{
    public enum SettingState {
        noitom,
        place,
        handedness,
        systemMode,
    }

    [SerializeField]
    public SystemManager systemManager;

    [SerializeField]
    public GameObject ROOM;
    [SerializeField]
    public GameObject selectionRoom;
    private bool sceneInitial = false;

    [SerializeField]
    public SettingState curSettingState = SettingState.noitom;

    [SerializeField]
    public GameObject selectionToggle;
    [SerializeField]
    public TMP_Text toggleTitleText;
    [SerializeField]
    public TMP_Text toggleChoiceText_R;
    [SerializeField]
    public TMP_Text toggleChoiceText_L;

    [SerializeField]
    public GameObject sceneChoices;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (this.systemManager != null && !this.sceneInitial) {
            this.settingSceneInitial();
        }

        if (this.curSettingState != SettingState.systemMode) {
            if (!this.selectionToggle.activeSelf) {
                this.selectionToggle.SetActive(true);
                this.setText_selectionToggle();
            }
        }
        else {
            if (this.selectionToggle.activeSelf) {
                this.selectionToggle.SetActive(false);
            }
            if (!this.sceneChoices.activeSelf && !this.selectionToggle.activeSelf) {
                this.sceneChoices.SetActive(true);
            }
        }
    }

    
    void settingSceneInitial() 
    {
        this.sceneInitial = true;

        this.systemManager.OVRControllerLeft.SetActive(false);
        this.systemManager.OVRControllerRight.SetActive(false);
        this.systemManager.OVRBoxingLeft.SetActive(true);
        this.systemManager.OVRBoxingRight.SetActive(true);

        this.ROOM.transform.position = new Vector3(this.systemManager.sceneOrigin_poisition.x,
                                                    this.systemManager.sceneOrigin_poisition.y - 0.01f,
                                                    this.systemManager.sceneOrigin_poisition.z);
        this.ROOM.transform.rotation = this.systemManager.sceneOrigin_rotation;

        this.selectionRoom.transform.localPosition = new Vector3(0.0f, 0.0f, this.systemManager.myUserInfo.avgArmLength * 1.1f - (5.0f - 1.0f));

        this.curSettingState = SettingState.noitom;
        this.setText_selectionToggle();
        this.selectionToggle.SetActive(true);
        this.sceneChoices.SetActive(false);
    }

    void setText_selectionToggle() 
    {
        switch (this.curSettingState) 
        {
            case SettingState.noitom:
                this.toggleTitleText.text = "Use Noitom?";
                this.toggleChoiceText_R.text = "Use";
                this.toggleChoiceText_L.text = "Don't Use";
                break;
            case SettingState.place:
                this.toggleTitleText.text = "Where to train?";
                this.toggleChoiceText_R.text = "On Boxing Ring";
                this.toggleChoiceText_L.text = "On Floor";
                break;
            case SettingState.handedness:
                this.toggleTitleText.text = "Target's Handedness";
                this.toggleChoiceText_R.text = "Right Handed";
                this.toggleChoiceText_L.text = "Left Handed";
                break;
            default:
                break;    
        }
    }

    public void toggleSelect(bool selection) 
    {
        switch (this.curSettingState) 
        {
            case SettingState.noitom:
                this.systemManager.mySettingInfo.isUsingNoitom = selection;
                break;
            case SettingState.place:
                this.systemManager.mySettingInfo.isOnRing = selection;
                break;
            case SettingState.handedness:
                this.systemManager.mySettingInfo.targetIsLeftHanded = !selection;
                break;
            default:
                break;    
        }

        this.curSettingState += 1;
        this.setText_selectionToggle();
    }
    
    public void sceneChoicesSelect(SystemManager.SystemMode selection) 
    {
        this.systemManager.changeSystemMode(selection);
        switch (selection) 
        {
            case SystemManager.SystemMode.Testing:
                this.systemManager.changeScene("Testing");
                break;
            case SystemManager.SystemMode.Training_Traditional:
                // TODO
                // this.systemManager.changeScene("Training_Traditional");
                Debug.LogWarning("Training_Traditional is not implemented yet.");
                break;
            case SystemManager.SystemMode.Training_Hint:
                // TODO
                // this.systemManager.changeScene("Training_Hint");
                Debug.LogWarning("Training_Hint is not implemented yet.");
                break;
            default:
                break;
        }
    }
}
