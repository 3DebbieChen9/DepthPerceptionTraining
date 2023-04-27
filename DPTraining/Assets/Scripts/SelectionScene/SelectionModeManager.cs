using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class SelectionModeManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    private SelectionUIManager UIManager;
    [SerializeField]
    private GameObject ROOM;
    [SerializeField]
    private GameObject selectionRoom;
    [SerializeField]
    private GameObject selectionToggle;
    [SerializeField]
    private GameObject sceneChoices;
    [SerializeField]
    private GameObject cueChoices;
    [SerializeField]
    private SelectionState curState = SelectionState.Place;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.UIManager == null) {
            this.UIManager = this.gameObject.GetComponent<SelectionUIManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.selectionSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        switch(this.curState) {
            case SelectionState.Place:
            case SelectionState.Handedness:
                if (!this.selectionToggle.activeSelf) {
                    this.selectionToggle.SetActive(true);
                    this.UIManager.setSelectionToggleText(this.curState);
                }
                break;
            case SelectionState.SelectMode:
                if (this.selectionToggle.activeSelf) {
                    this.selectionToggle.SetActive(false);
                }
                if (!this.sceneChoices.activeSelf && !this.selectionToggle.activeSelf) {
                    this.sceneChoices.SetActive(true);
                }
                break;
            case SelectionState.SelectCue:
                if (this.sceneChoices.activeSelf) {
                    this.sceneChoices.SetActive(false);
                }
                if (!this.cueChoices.activeSelf && !this.sceneChoices.activeSelf) {
                    this.cueChoices.SetActive(true);
                }
                break;
            default:
                break;
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.mainManager.changeScene("SelectionScene");
        }
    }

    public void selectionSceneInitialized() {
        // this.mainManager.OVRControllerLeft.SetActive(false);
        // this.mainManager.OVRControllerRight.SetActive(false);
        // this.mainManager.OVRBoxingLeft.SetActive(true);
        // this.mainManager.OVRBoxingRight.SetActive(true);

        this.ROOM.transform.position = new Vector3(this.mainManager.sceneOriginPosition.x,
                                                  this.mainManager.sceneOriginPosition.y,
                                                  this.mainManager.sceneOriginPosition.z);
        this.ROOM.transform.rotation = this.mainManager.sceneOriginRotation;

        this.selectionRoom.transform.localPosition = new Vector3(0.0f, 0.0f, this.mainManager.myUserInfo.userBodySize.armLength * 1.1f - (5.0f - 1.0f));
        this.curState = SelectionState.Place;
        this.UIManager.setSelectionToggleText(this.curState);
        this.selectionToggle.SetActive(true);
        this.sceneChoices.SetActive(false);
        this.cueChoices.SetActive(false);
    }

    public void toggleSelect(bool selection) {
        switch(this.curState) {
            // case SelectionState.Noitom:
            //     this.mainManager.mySelectionInfo.isUsingNoitom = selection;
            //     this.curState = SelectionState.Place;
            //     this.UIManager.setSelectionToggleText(this.curState);
            //     break;
            case SelectionState.Place:
                this.mainManager.mySelectionInfo.isOnRing = selection;
                this.curState = SelectionState.Handedness;
                this.UIManager.setSelectionToggleText(this.curState);
                break;
            case SelectionState.Handedness:
                this.mainManager.mySelectionInfo.coachIsLeftHanded = !selection;
                this.curState = SelectionState.SelectMode;
                break;
            default:
                break;
        }
    }

    public void moveToCueSelect() {
        this.curState = SelectionState.SelectCue;
    }

    public void modeSelect(SystemMode mode) {
        this.mainManager.mySelectionInfo.selectedMode = mode;
        this.mainManager.curSystemMode = mode;
        switch (mode) {
            case SystemMode.TestingMode:
                // OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
                // OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                this.mainManager.changeScene("TestingScene");
                break;
            case SystemMode.TrainingMode:
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                // [TODO] Change Scene to "Training Scene"
                Debug.LogWarning("Training Scene is not implemented yet.");
                break;
            case SystemMode.TrainingMode_LineCue:
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                this.mainManager.changeScene("TrainingScene_LineCue");
                break;
            case SystemMode.TrainingMode_SphereCue_v1:
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                // [TODO] Change Scene to "Training SphereCue_v1 Scene"
                Debug.LogWarning("Training SphereCue_v1 Scene is not implemented yet.");
                break;
            case SystemMode.TrainingMode_SphereCue_v2:
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                // [TODO] Change Scene to "Training SphereCue_v2 Scene"
                Debug.LogWarning("Training SphereCue_v2 Scene is not implemented yet.");
                break;
            case SystemMode.TrainingMode_SphereCue_v3:
                this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
                // [TODO] Change Scene to "Training SphereCue_v3 Scene"
                Debug.LogWarning("Training SphereCue_v3 Scene is not implemented yet.");
                break;
            default:
                break;
        }
    }
}
