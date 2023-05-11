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
    private GameObject changeSceneButton;
    [SerializeField]
    private SelectionState curState = SelectionState.Place;

    void Awake()
    {
        if (this.mainManager == null)
        {
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
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch))
        {
            this.mainManager.changeScene("SelectionScene");
        }

        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch))
        {
            bool showButton = !this.changeSceneButton.activeSelf;
            this.changeSceneButton.SetActive(showButton);
            this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(showButton);
            this.mainManager.OVRControllerRayRight.RayInteractorSwitch(showButton);
        }
    }

    public void selectionSceneInitialized()
    {
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
        this.changeSceneButton.SetActive(false);
    }

    public void toggleSelect(bool selection)
    {
        switch (this.curState)
        {
            case SelectionState.Place:
                this.mainManager.mySelectionInfo.isOnRing = selection;
                Invoke("placeChoicesAway", 0.2f);
                Invoke("handednessChoiceToWall", 0.5f);
                this.curState = SelectionState.Handedness;
                break;
            case SelectionState.Handedness:
                this.mainManager.mySelectionInfo.coachIsLeftHanded = !selection;
                Invoke("handednessChoicesAway", 0.2f);
                Invoke("sceneChoicesToWall", 0.5f);
                this.curState = SelectionState.SelectMode;
                break;
            default:
                break;
        }
    }

    public void moveToLevelSelect()
    {
        Invoke("sceneChoicesAway", 0.2f);
        Invoke("trainLevelToWall", 0.5f);
        this.curState = SelectionState.SelectLevel;
    }

    public void levelSelect(TrainingLevel level)
    {
        this.mainManager.mySelectionInfo.selectedLevel = level;
        this.moveToTrainSelect();
    }

    public void moveToTrainSelect()
    {
        Invoke("levelChoicesAway", 0.2f);
        Invoke("trainModeToWall", 0.5f);
        this.curState = SelectionState.SelectTrain;
    }

    public void modeSelect(SystemMode mode)
    {
        this.mainManager.mySelectionInfo.selectedMode = mode;
        this.mainManager.curSystemMode = mode;
        this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
        switch (mode)
        {
            case SystemMode.TestingMode:
                this.mainManager.mySelectionInfo.selectedLevel = TrainingLevel.hard;
                this.mainManager.changeScene("TestingScene");
                break;
            case SystemMode.TrainingMode:
            case SystemMode.TrainingMode_LineCue:
            case SystemMode.TrainingMode_BallCue_onPlayer:
            case SystemMode.TrainingMode_BallCue_onTarget:
            case SystemMode.TrainingMode_BallCue_onBoth:
            case SystemMode.TrainingMode_LineCuePlusBallCue:
                this.mainManager.changeScene("TrainingScene");
                break;
            default:
                break;
        }
    }

    void placeChoicesAway()
    {
        this.placeChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }

    void handednessChoicesAway()
    {
        this.handednessChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }

    void handednessChoiceToWall()
    {
        this.placeChoices.SetActive(false);
        DOTween.Kill(this.placeChoices.transform);
        this.handednessChoices.SetActive(true);
        this.handednessChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    void sceneChoicesAway()
    {
        this.sceneChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    void sceneChoicesToWall()
    {
        this.handednessChoices.SetActive(false);
        DOTween.Kill(this.handednessChoices.transform);
        this.sceneChoices.SetActive(true);
        this.sceneChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    public void trainLevelToWall()
    {
        this.sceneChoices.SetActive(false);
        DOTween.Kill(this.sceneChoices.transform);
        this.levelChoices.SetActive(true);
        this.levelChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

    public void levelChoicesAway()
    {
        this.levelChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    public void trainModeToWall()
    {
        this.levelChoices.SetActive(false);
        DOTween.Kill(this.levelChoices.transform);
        this.trainChoices.SetActive(true);
        this.trainChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

}
