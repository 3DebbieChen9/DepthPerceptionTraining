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
    private GameObject speedChoices;
    [SerializeField]
    private GameObject directionChoices;
    [SerializeField]
    private GameObject modeChoices;
    [SerializeField]
    private GameObject trainMethodChoices;
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
        // this.curState = SelectionState.Place;
        this.curState = SelectionState.Handedness;
        this.placeChoices.SetActive(false);
        this.handednessChoices.SetActive(true);
        this.speedChoices.SetActive(false);
        this.directionChoices.SetActive(false);
        this.modeChoices.SetActive(false);
        this.trainMethodChoices.SetActive(false);
        this.changeSceneButton.SetActive(false);
    }

    public void btnCalibrationScene()
    {
        this.mainManager.changeScene("CalibrationScene");
        this.mainManager.curSystemMode = SystemMode.CalibrationMode;
    }

    public void btnSelectionScene()
    {
        this.mainManager.changeScene("SelectionScene");
        this.mainManager.curSystemMode = SystemMode.SelectionMode;
    }

    public void toggleSelect(bool selection)
    {
        switch (this.curState)
        {
            case SelectionState.Place:
                this.moveToHandednessSelect(selection);
                break;
            case SelectionState.Handedness:
                this.moveToSpeedSelect(selection);
                break;
            default:
                break;
        }
    }
    public void moveToHandednessSelect(bool selection)
    {
        this.mainManager.mySelectionInfo.isOnRing = selection;
        Invoke("placeChoicesAway", 0.2f);
        Invoke("handednessChoicesToWall", 0.5f);
        this.curState = SelectionState.Handedness;
    }
    public void moveToSpeedSelect(bool selection)
    {
        this.mainManager.mySelectionInfo.coachIsLeftHanded = !selection;
        Invoke("handednessChoicesAway", 0.2f);
        Invoke("speedChoicesToWall", 0.5f);
        this.curState = SelectionState.SelectSpeed;
    }
    public void moveToDirectionSelect(MovingSpeed speed)
    {
        this.mainManager.mySelectionInfo.selectedSpeed = speed;
        Invoke("speedChoicesAway", 0.2f);
        Invoke("directionChoicesToWall", 0.5f);
        this.curState = SelectionState.SelectDirection;
    }
    public void moveToModeSelect(MovingDirection direction)
    {
        this.mainManager.mySelectionInfo.selectedCoachDirection = direction;
        Invoke("directionChoicesAway", 0.2f);
        Invoke("modeChoicesToWall", 0.5f);
        this.curState = SelectionState.SelectMode;
    }
    public void moveToTrainMethodSelect()
    {
        Invoke("modeChoicesAway", 0.2f);
        Invoke("trainMethodChoicesToWall", 0.5f);
        this.curState = SelectionState.SelectTrainMethod;
    }

    public void modeSelect(SystemMode mode)
    {
        this.mainManager.mySelectionInfo.selectedMode = mode;
        this.mainManager.curSystemMode = mode;
        this.mainManager.saveToJSON_selection(this.mainManager.mySelectionInfo);
        switch (mode)
        {
            case SystemMode.TestingMode:
                this.mainManager.changeScene("TestingScene");
                break;
            default:
                this.mainManager.changeScene("TrainingScene");
                break;
        }
    }

    private void placeChoicesAway()
    {
        this.placeChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    private void handednessChoicesToWall()
    {
        this.placeChoices.SetActive(false);
        DOTween.Kill(this.placeChoices.transform);
        this.handednessChoices.SetActive(true);
        this.handednessChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }
    private void handednessChoicesAway()
    {
        this.handednessChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    private void speedChoicesToWall()
    {
        this.handednessChoices.SetActive(false);
        DOTween.Kill(this.handednessChoices.transform);
        this.speedChoices.SetActive(true);
        this.speedChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }
    private void speedChoicesAway()
    {
        this.speedChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    private void directionChoicesToWall()
    {
        this.speedChoices.SetActive(false);
        DOTween.Kill(this.speedChoices.transform);
        this.directionChoices.SetActive(true);
        this.directionChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }
    private void directionChoicesAway()
    {
        this.directionChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    private void modeChoicesToWall()
    {
        this.directionChoices.SetActive(false);
        DOTween.Kill(this.directionChoices.transform);
        this.modeChoices.SetActive(true);
        this.modeChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }
    private void modeChoicesAway()
    {
        this.modeChoices.transform.DOLocalMoveZ(-2.0f, 1.0f);
    }
    private void trainMethodChoicesToWall()
    {
        this.modeChoices.SetActive(false);
        DOTween.Kill(this.modeChoices.transform);
        this.trainMethodChoices.SetActive(true);
        this.trainMethodChoices.transform.DOLocalMoveY(0.0f, 0.3f);
    }

}
