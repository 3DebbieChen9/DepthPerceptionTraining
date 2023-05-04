using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
using DG.Tweening;

public class SelectionModeManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    private GameObject ROOM;
    [SerializeField]
    private GameObject selectionRoom;
    [SerializeField]
    private GameObject placeChoices;
    [SerializeField]
    private GameObject handednessChoices;
    [SerializeField]
    private GameObject sceneChoices;
    [SerializeField]
    private GameObject levelChoices;
    [SerializeField]
    private GameObject trainChoices;
    [SerializeField]
    private SelectionState curState = SelectionState.Place;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
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
        // switch(this.curState) {
        //     case SelectionState.Place:
        //     case SelectionState.Handedness:
        //         if (!this.selectionToggle.activeSelf) {
        //             this.selectionToggle.SetActive(true);
        //             this.UIManager.setSelectionToggleText(this.curState);
        //         }
        //         break;
        //     case SelectionState.SelectMode:
        //         if (this.selectionToggle.activeSelf) {
        //             this.selectionToggle.SetActive(false);
        //         }
        //         if (!this.sceneChoices.activeSelf && !this.selectionToggle.activeSelf) {
        //             this.sceneChoices.SetActive(true);
        //         }
        //         break;
        //     case SelectionState.SelectLevel:
        //         if (this.sceneChoices.activeSelf) {
        //             this.sceneChoices.SetActive(false);
        //         }
        //         if (!this.levelChoices.activeSelf && !this.sceneChoices.activeSelf) {
        //             this.levelChoices.SetActive(true);
        //         }
        //         break;
        //     case SelectionState.SelectTrain:
        //         if (this.levelChoices.activeSelf) {
        //             this.levelChoices.SetActive(false);
        //         }
        //         if (!this.trainChoices.activeSelf && !this.levelChoices.activeSelf) {
        //             this.trainChoices.SetActive(true);
        //         }
        //         break;
        //     default:
        //         break;
        // }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.mainManager.changeScene("SelectionScene");
        }
    }

    public void selectionSceneInitialized() {
        this.ROOM.transform.position = new Vector3(this.mainManager.sceneOriginPosition.x,
                                                  this.mainManager.sceneOriginPosition.y,
                                                  this.mainManager.sceneOriginPosition.z);
        this.ROOM.transform.rotation = this.mainManager.sceneOriginRotation;

        this.selectionRoom.transform.localPosition = new Vector3(0.0f, 0.0f, this.mainManager.myUserInfo.userBodySize.armLength * 1.1f - (5.0f - 1.0f));
        this.curState = SelectionState.Place;
        this.placeChoices.SetActive(true);
        this.handednessChoices.SetActive(false);
        this.sceneChoices.SetActive(false);
        this.trainChoices.SetActive(false);
        this.levelChoices.SetActive(false);
    }

    public void toggleSelect(bool selection) {
        switch(this.curState) {
            case SelectionState.Place:
                this.mainManager.mySelectionInfo.isOnRing = selection;
                this.placeChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
                Invoke("handednessChoiceToWall", 0.5f);
                this.curState = SelectionState.Handedness;
                break;
            case SelectionState.Handedness:
                this.mainManager.mySelectionInfo.coachIsLeftHanded = !selection;
                this.handednessChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
                Invoke("sceneChoicesToWall", 0.5f);
                this.curState = SelectionState.SelectMode;
                break;
            default:
                break;
        }
    }

    public void handednessChoiceToWall() {
        this.placeChoices.SetActive(false);
        DOTween.Kill(this.placeChoices.transform);
        this.handednessChoices.SetActive(true);
        this.handednessChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    public void sceneChoicesToWall() {
        this.handednessChoices.SetActive(false);
        DOTween.Kill(this.handednessChoices.transform);
        this.sceneChoices.SetActive(true);
        this.sceneChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    public void trainLevelToWall() {
        this.sceneChoices.SetActive(false);
        DOTween.Kill(this.sceneChoices.transform);
        this.levelChoices.SetActive(true);
        this.levelChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }
    
    public void trainModeToWall() {
        this.levelChoices.SetActive(false);
        DOTween.Kill(this.levelChoices.transform);
        this.trainChoices.SetActive(true);
        this.trainChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    public void moveToLevelSelect() {
        this.sceneChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
        Invoke("trainLevelToWall", 0.5f);
        this.curState = SelectionState.SelectLevel;
    }

    public void levelSelect(TrainingLevel level) {
        this.mainManager.mySelectionInfo.selectedLevel = level;
        this.moveToTrainSelect();
    }

    public void moveToTrainSelect() {
        this.levelChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
        Invoke("trainModeToWall", 0.5f);
        this.curState = SelectionState.SelectTrain;
    }

    public void modeSelect(SystemMode mode) {
        this.mainManager.mySelectionInfo.selectedMode = mode;
        this.mainManager.curSystemMode = mode;
        this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
        switch (mode) {
            case SystemMode.TestingMode:
                this.mainManager.mySelectionInfo.selectedLevel = TrainingLevel.hard;
                this.mainManager.changeScene("TestingScene");
                break;
            case SystemMode.TrainingMode:
            case SystemMode.TrainingMode_LineCue:
            case SystemMode.TrainingMode_SphereCue_v1:
            case SystemMode.TrainingMode_SphereCue_v2:
            case SystemMode.TrainingMode_SphereCue_v3:
                this.mainManager.changeScene("TrainingScene");
                break;
            default:
                break;
        }
    }
}
