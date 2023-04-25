using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
using TMPro;
using UnityEngine.UI;
using Newtonsoft.Json;
using System.IO;

public class SettingManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public CoachManager coachManager;
    [SerializeField]
    public StraightModule straightModule;
    
    [SerializeField]
    private SettingState curState;

    [SerializeField]
    private GameObject gym;
    [SerializeField]
    public bool isHitTrigger;

    [SerializeField]
    private TMP_Text settingText;
    [SerializeField]
    private TMP_Text userText;

    [SerializeField]
    private GameObject userSizePanel;
    [SerializeField]
    private TMP_Text userHeightText;
    [SerializeField]
    private TMP_Text userArmLengthText;

    [SerializeField]
    private GameObject coachSizePanel;
    [SerializeField]
    private TMP_Text heightText;
    [SerializeField]
    private TMP_Text distanceText;
    [SerializeField]
    private TMP_Text isPushableText;

    [SerializeField]
    private GameObject movingSpeedPanel;
    [SerializeField]
    private TMP_Text speedMaxText;
    [SerializeField]
    private TMP_Text speedMinText;

    [SerializeField]
    private GameObject vibrationPanel;
    [SerializeField]
    private TMP_Text vibationAText;
    [SerializeField]
    private TMP_Text vibationFText;

    [SerializeField]
    private GameObject testingModePanel;
    [SerializeField]
    private TMP_Text readyTimeText;
    [SerializeField]
    private TMP_Text limitTimeText;
    [SerializeField]
    private TMP_Text numTasksText;

    [SerializeField]
    private GameObject readyCanvas;
    [SerializeField]
    private RectTransform readyCanvasRect;
    [SerializeField]
    private TMP_Text readyUnitTitle;
    [SerializeField]
    private TMP_Text readyCountdownText;
    [SerializeField]
    private Image readyCoundownImage;
    [SerializeField]
    private Timer reactionTimer;
    [SerializeField]
    private Timer readyTimer;

    [SerializeField]
    private GameObject straightPanel;
    [SerializeField]
    private Timer punchTimer;
    [SerializeField]
    private int curDataNum;
    [SerializeField]
    public bool isDoingPunchingTest;
    [SerializeField]
    public PunchStraightUnitTest punchUnitTestResult;
    [SerializeField]
    private PunchStraightUnit punchStraightUnit;
    [SerializeField]
    private TMP_Text curDataNumText;
    [SerializeField]
    private TMP_Text thresholdText;
    [SerializeField]
    private TMP_Text handText;
    [SerializeField]
    private TMP_Text systemResultText;
    [SerializeField]
    private TMP_Text coachResultText;
    [SerializeField]
    private TMP_Text coachResultButtonText;
    

    [SerializeField]
    private GameObject straightResultPanel;
    [SerializeField]
    private TMP_Text straightResultText;
    

    private void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.coachManager == null) {
            this.coachManager = this.gameObject.GetComponent<CoachManager>();
        }
        if (this.straightModule == null) {
            this.straightModule = this.gameObject.GetComponent<StraightModule>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.settingInitialize();
    }

    // Update is called once per frame
    void Update()
    {
        if (this.curState == SettingState.MovingSpeed) {
            // if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            //     this.coachManager.moveToFurthest(MovingDirection.Backward, this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMax);
            // }
            // if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            //     this.coachManager.moveToFurthest(MovingDirection.Forward, this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMax);
            // }
            // if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            //     this.coachManager.moveToFurthest(MovingDirection.Backward, this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMin);
            // }
            // if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.LTouch)) {
            //     this.coachManager.moveToFurthest(MovingDirection.Forward, this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMin);
            // }
            if (OVRInput.GetDown(OVRInput.Button.PrimaryThumbstick, OVRInput.Controller.RTouch)) {
                this.coachManager.moveToInitialPosition();
                this.isHitTrigger = false;
                this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
            }
            if (OVRInput.Get(OVRInput.Button.PrimaryThumbstick, OVRInput.Controller.RTouch)) {
                this.coachManager.stopMoving();
            }
        }

        if (this.curState == SettingState.TestingMode) {
            if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                this.readyTitleView();
            }

            if (this.readyCanvas.activeSelf) {
                this.readyCanvas.transform.position = this.readyCanvasRect.position;
                this.readyCanvas.transform.rotation = this.readyCanvasRect.rotation;
            }

            if (this.readyTimer.timerOn) {
                this.readyCountdownView(this.readyTimer.timeLeft, this.readyTimer.timeTarget);
                this.readyTimer.timeLeft -= Time.deltaTime;
                if (this.readyTimer.timeLeft <= 0.2f) {
                    this.readyStartView();
                } 
                if (this.readyTimer.timeLeft <= 0.0f) {
                    this.readyTimer.ResetTimer();
                    this.coachManager.randomMovement();
                    this.reactionTimer.StartTimer();
                }
            }

            if (this.reactionTimer.timerOn) {
                this.reactionTimer.timeLeft += Time.deltaTime;
                this.readyCountdownView(this.reactionTimer.timeLeft, this.reactionTimer.timeTarget);
                if (this.reactionTimer.timeLeft >= this.reactionTimer.timeTarget) {
                    // this.readyUnitTitle.text = "Over Time!!";
                    this.readyUnitTitle.text = "超時了";
                    this.reactionTimer.ResetTimer();
                }
            }
        }

        if (this.curState == SettingState.StraightCollecting) {
            if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
                this.coachManager.moveToInitialPosition();
                this.isHitTrigger = false;
                this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
                this.readyPunchView();
            }

            if (this.readyCanvas.activeSelf) {
                this.readyCanvas.transform.position = this.readyCanvasRect.position;
                this.readyCanvas.transform.rotation = this.readyCanvasRect.rotation;
            }

            if (this.punchTimer.timerOn) {
                this.punchTimer.timeLeft -= Time.deltaTime;
                this.readyCountdownView(this.punchTimer.timeLeft, this.punchTimer.timeTarget);
                if (this.punchTimer.timeLeft <= 0.0f) {
                    this.isDoingPunchingTest = true;
                    this.readyCanvas.SetActive(false);
                    this.punchTimer.ResetTimer();
                }
            }
            
        }
    }

    void settingInitialize() {
        this.curState = SettingState.UserSize;
        this.reactionTimer = new Timer(false, false, this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit, 0.0f);
        this.readyTimer = new Timer(false, true, this.mainManager.mySettingInfo.testingModeSetting.readyTime, this.mainManager.mySettingInfo.testingModeSetting.readyTime);
        this.punchTimer = new Timer(false, true, 3.0f, 3.0f);
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
        this.userHeightText.text = this.mainManager.myUserInfo.userBodySize.height.ToString("F2");
        this.userArmLengthText.text = this.mainManager.myUserInfo.userBodySize.armLength.ToString("F2");
        this.heightText.text = this.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser.ToString("F2");
        this.distanceText.text = this.mainManager.mySettingInfo.coachDefaultValue.distanceToUserMultiple.ToString("F2");
        // this.speedMaxText.text = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMax.ToString("F2");
        // this.speedMinText.text = this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMin.ToString("F2");
        this.vibationAText.text = this.mainManager.mySettingInfo.controllerVibration.amplitude.ToString("F1");
        this.vibationFText.text = this.mainManager.mySettingInfo.controllerVibration.frequency.ToString("F1");
        this.readyTimeText.text = this.mainManager.mySettingInfo.testingModeSetting.readyTime.ToString("F1");
        this.limitTimeText.text = this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit.ToString("F1");
        this.numTasksText.text = this.mainManager.mySettingInfo.testingModeSetting.targetNumberOfTasks.ToString();

        this.gym.transform.position = new Vector3(this.mainManager.sceneOriginPosition.x, this.mainManager.sceneOriginPosition.y, this.mainManager.sceneOriginPosition.z);
        this.gym.transform.rotation = this.mainManager.sceneOriginRotation;
        this.gym.SetActive(true);

        this.isHitTrigger = false;

        this.userSizePanel.SetActive(true);
        this.coachSizePanel.SetActive(false);
        this.movingSpeedPanel.SetActive(false);
        this.vibrationPanel.SetActive(false);
        this.testingModePanel.SetActive(false);
        this.readyCanvas.SetActive(false);
        this.straightPanel.SetActive(false);
        this.straightResultPanel.SetActive(false);

        this.isDoingPunchingTest = false;
        this.punchUnitTestResult = new PunchStraightUnitTest();
        this.punchStraightUnit = new PunchStraightUnit();
        this.punchUnitTestResult.punchStraightUnitList.Clear();
    }
    public void btnSkipClick() {
        this.curState = SettingState.StraightCollecting;
        this.setUserSize();
        this.setCoachSize();
        // this.setMovingSpeed();
        this.punchUnitTestInitial();
        this.setControllerVibration();
        this.setTestingMode();
        this.userSizePanel.SetActive(false);
        this.coachSizePanel.SetActive(false);
        this.movingSpeedPanel.SetActive(false);
        this.vibrationPanel.SetActive(false);
        this.testingModePanel.SetActive(false);
        this.readyCanvas.SetActive(false);
        this.straightPanel.SetActive(true);
    }
    public void btnSetClick() {
        switch (this.curState) {
            case SettingState.UserSize:
                this.setUserSize();
                break;
            case SettingState.CoachSize:
                this.setCoachSize();
                break;
            case SettingState.MovingSpeed:
                // this.setMovingSpeed();
                break;
            case SettingState.ControllerVibartion:
                this.setControllerVibration();
                break;
            case SettingState.TestingMode:
                this.setTestingMode();
                break;
            default:
                break;
        }
    }
    public void btnNextClick() {
        switch (this.curState) {
            case SettingState.UserSize:
                this.setUserSize();
                this.curState = SettingState.CoachSize;
                this.userSizePanel.SetActive(false);
                this.coachSizePanel.SetActive(true);
                break;
            case SettingState.CoachSize:
                this.setCoachSize();
                this.curState = SettingState.MovingSpeed;
                this.coachSizePanel.SetActive(false);
                this.movingSpeedPanel.SetActive(true);
                break;
            case SettingState.MovingSpeed:
                // this.setMovingSpeed();
                this.curState = SettingState.ControllerVibartion;
                this.movingSpeedPanel.SetActive(false);
                this.vibrationPanel.SetActive(true);
                break;
            case SettingState.ControllerVibartion:
                this.setControllerVibration();
                this.curState = SettingState.TestingMode;
                this.vibrationPanel.SetActive(false);
                this.testingModePanel.SetActive(true);
                break;
            case SettingState.TestingMode:
                this.setTestingMode();
                this.curState = SettingState.StraightCollecting;
                this.punchUnitTestInitial();
                this.testingModePanel.SetActive(false);
                this.readyCanvas.SetActive(false);
                this.straightPanel.SetActive(true);
                break;
            case SettingState.StraightCollecting:
                this.curState = SettingState.StraightDataResult;
                this.saveToJSON_punchResult();
                this.straightPanel.SetActive(false);
                this.straightResultPanel.SetActive(true);
                this.displayPunchResult();
                break;
            default:
                break;
        }
    }
    public void btnLastClick() {
        switch (this.curState) {
            case SettingState.CoachSize:
                this.curState = SettingState.UserSize;
                this.coachSizePanel.SetActive(false);
                this.userSizePanel.SetActive(true);
                break;
            case SettingState.MovingSpeed:
                this.curState = SettingState.CoachSize;
                this.movingSpeedPanel.SetActive(false);
                this.coachSizePanel.SetActive(true);
                break;
            case SettingState.ControllerVibartion:
                this.curState = SettingState.MovingSpeed;
                this.vibrationPanel.SetActive(false);
                this.movingSpeedPanel.SetActive(true);
                break;
            case SettingState.TestingMode:
                this.curState = SettingState.ControllerVibartion;
                this.testingModePanel.SetActive(false);
                this.vibrationPanel.SetActive(true);
                break;
            case SettingState.StraightCollecting:
                this.curState = SettingState.TestingMode;
                this.straightPanel.SetActive(false);
                this.testingModePanel.SetActive(true);
                break;
            case SettingState.StraightDataResult:
                this.curState = SettingState.StraightCollecting;
                this.punchUnitTestInitial();
                this.straightResultPanel.SetActive(false);
                this.straightPanel.SetActive(true);
                break;
            default:
                break;
        }
    }
    
    public void setUserSize() {
        try {
            this.mainManager.myUserInfo.userBodySize.height = float.Parse(this.userHeightText.text);
        } catch (System.Exception e) {
            this.userHeightText.text = e.ToString();
            Debug.Log(e);
        }

        try {
            this.mainManager.myUserInfo.userBodySize.armLength = float.Parse(this.userArmLengthText.text);
        } catch (System.Exception e) {
            this.userArmLengthText.text = e.ToString();
            Debug.Log(e);
        }
        this.mainManager.resizeUserIK();
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }
    public void setCoachSize() {
        try {
            this.mainManager.mySettingInfo.coachDefaultValue.heightDifferenceWithUser = float.Parse(this.heightText.text);
        } catch (System.Exception e) {
            this.heightText.text = e.ToString();
            Debug.Log(e);
        }

        try {
            this.mainManager.mySettingInfo.coachDefaultValue.distanceToUserMultiple = float.Parse(this.distanceText.text);
        } catch (System.Exception e) {
            this.distanceText.text = e.ToString();
            Debug.Log(e);
        }

        this.coachManager.coachSettingInitial();
        this.isHitTrigger = false;
        this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }
    public void setCoachPushable() {
        
        this.coachManager.coachSettingInitial();
        this.isHitTrigger = false;
        this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }
    // public void setMovingSpeed() {
    //     try {
    //         this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMax = float.Parse(this.speedMaxText.text);
    //     } catch (System.Exception e) {
    //         this.speedMaxText.text = e.ToString();
    //         Debug.Log(e);
    //     }
    //     try {
    //         this.mainManager.mySettingInfo.coachDefaultValue.movingSpeedMin = float.Parse(this.speedMinText.text);
    //     } catch (System.Exception e) {
    //         this.speedMinText.text = e.ToString();
    //         Debug.Log(e);
    //     }
    //     this.coachManager.coachSettingInitial();
    //     this.isHitTrigger = false;
    //     this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
    //     this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    // }
    public void setControllerVibration() {
        try {
            float amplitude = float.Parse(this.vibationAText.text);
            if (amplitude > 1.0f || amplitude < 0.0f) {
                // this.vibationFText.text = "Out of range";
                this.vibationFText.text = "超出範圍";
            }
            else {
                this.mainManager.mySettingInfo.controllerVibration.amplitude = amplitude;
            }
        }
        catch (System.Exception e) {
            this.vibationAText.text = e.ToString();
            Debug.Log(e);
        }
        try {
            float frequency = float.Parse(this.vibationFText.text);
            if (frequency > 1.0f || frequency < 0.0f) {
                // this.vibationFText.text = "Out of range";
                this.vibationFText.text = "超出範圍";
            }
            else {
                this.mainManager.mySettingInfo.controllerVibration.frequency = frequency;
            }
        }
        catch (System.Exception e) {
            this.vibationFText.text = e.ToString();
            Debug.Log(e);
        }
        this.coachManager.coachSettingInitial();
        this.isHitTrigger = false;
        this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }
    public void setTestingMode() {
        try {
            this.mainManager.mySettingInfo.testingModeSetting.readyTime = float.Parse(this.readyTimeText.text);
            this.readyTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        }
        catch (System.Exception e) {
            this.readyTimeText.text = e.ToString();
            Debug.Log(e);
        }

        try {
            this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit = float.Parse(this.limitTimeText.text);
            this.reactionTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit;
        }
        catch (System.Exception e) {
            this.limitTimeText.text = e.ToString();
            Debug.Log(e);
        }

        try {
            this.mainManager.mySettingInfo.testingModeSetting.targetNumberOfTasks = int.Parse(this.numTasksText.text);
        }
        catch (System.Exception e) {
            this.numTasksText.text = e.ToString();
            Debug.Log(e);
        }
        this.coachManager.moveToInitialPosition();
        this.isHitTrigger = false;
        this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();
        this.readyCanvas.SetActive(true);
        this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
    }
    public void setStraightThreshold() {
        try {
            this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle = float.Parse(this.thresholdText.text);
            this.coachManager.moveToInitialPosition();
            this.isHitTrigger = false;
            this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
            this.readyTimer.ResetTimer();
            this.readyCanvas.SetActive(true);
            this.settingInfoDisplay(this.mainManager.mySettingInfo, this.mainManager.myUserInfo);
        }
        catch (System.Exception e) {
            this.thresholdText.text = e.ToString();
            Debug.Log(e);
        }
    }

    void readyTitleView() {
        this.readyCanvas.SetActive(true);
        if (!this.reactionTimer.timerOn && !this.readyTimer.timerOn) {
            this.reactionTimer.ResetTimer();
            this.readyTimer.ResetTimer();
            this.readyTimer.StartTimer();
            // this.readyUnitTitle.text = "Ready for the Unit";
            this.readyUnitTitle.text = "準備開始本回合";
        }
    }
    void readyCountdownView (float timeLeft, float timeTarget) {
        this.readyCountdownText.text = timeLeft.ToString("F0");
        this.readyCoundownImage.fillAmount = timeLeft / timeTarget;
    }

    void readyPunchView () {
        this.readyCanvas.SetActive(true);
        if (!this.punchTimer.timerOn) {
            this.isDoingPunchingTest = true;
            this.punchTimer.ResetTimer();
            this.punchTimer.StartTimer();
            // this.readyUnitTitle.text = "Ready to punch!";
            this.readyUnitTitle.text = "準備出拳!";
        }
    }
    public void readyStartView () {
        // this.readyUnitTitle.text = "Unit Start!";
        this.readyUnitTitle.text = "回合開始!";
    }

    public void savePunchUnitResult() {
        this.punchUnitTestResult.addUnitResult(this.punchStraightUnit);
        this.coachManager.moveToInitialPosition();
        this.isHitTrigger = false;
        this.coachManager.coachAvatar.GetComponent<CoachRenderManager>().clearCoachColor();
        this.curDataNum++;
        if (this.curDataNum > 10) {
            this.curState = SettingState.StraightDataResult;
            this.punchUnitTestResult.userArmLength = this.mainManager.myUserInfo.userBodySize.armLength;
            this.punchUnitTestResult.userHeight = this.mainManager.myUserInfo.userBodySize.height;
            this.punchUnitTestResult.userArmStraightAngle = this.mainManager.myUserInfo.userArmStraightAngle;
            this.saveToJSON_punchResult();
            this.straightPanel.SetActive(false);
            this.straightResultPanel.SetActive(true);
            this.displayPunchResult();
        }
        else {
            this.curDataNumText.text = $"{curDataNum}/10";
            this.thresholdText.text = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle.ToString("F1");
            this.handText.text = "";
            this.systemResultText.text = "";
            this.punchStraightUnit.coachJudgeAsStraight = false;
            this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
            if (this.punchStraightUnit.coachJudgeAsStraight) {
            // this.coachResultButtonText.text = "Not Straight";
            this.coachResultButtonText.text = "沒伸直";
            }
            else {
                // this.coachResultButtonText.text = "Straight";
                this.coachResultButtonText.text = "伸直";
            }
        }
    }
    public void modifyCoachJudegement() {
        this.punchStraightUnit.coachJudgeAsStraight = !this.punchStraightUnit.coachJudgeAsStraight;
        this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
        if (this.punchStraightUnit.coachJudgeAsStraight) {
            // this.coachResultButtonText.text = "Not Straight";
            this.coachResultButtonText.text = "沒伸直";
        }
        else {
            // this.coachResultButtonText.text = "Straight";
            this.coachResultButtonText.text = "伸直";
        }
    }
    public void displayPunchUnitResult(Hand _hand, bool _systemResult, ArmRotationAngle _armRotationAngle) {
        this.punchStraightUnit.armRotationAngle = _armRotationAngle;
        this.punchStraightUnit.systemJudgeAsStraight = _systemResult;
        this.punchStraightUnit.handStraightAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;
        this.punchStraightUnit.hand = _hand;
        if (_hand == Hand.Right) {
            // this.handText.text = "Right";
            this.handText.text = "右手";
        }
        else {
            // this.handText.text = "Left";
            this.handText.text = "左手";
        }
        this.systemResultText.text = _systemResult.ToString();
    }
    public void punchUnitTestInitial() {
        this.punchUnitTestResult.reset();
        this.curDataNum = 1;
        this.curDataNumText.text = "1/10";
        this.thresholdText.text = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle.ToString("F1");
        this.handText.text = "";
        this.systemResultText.text = "";
        this.punchStraightUnit.coachJudgeAsStraight = false;
        this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
        if (this.punchStraightUnit.coachJudgeAsStraight) {
            // this.coachResultButtonText.text = "Not Straight";
            this.coachResultButtonText.text = "沒伸直";
        }
        else {
            // this.coachResultButtonText.text = "Straight";
            this.coachResultButtonText.text = "伸直";
        }
    }
    public void saveToJSON_punchResult () 
    {
        string jsonString = JsonConvert.SerializeObject(this.punchUnitTestResult);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_PunchUnitTest.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"PunchUnitTest_{dateTime} saved to {filePath}");
    }
    public void displayPunchResult() {
        // this.straightResultText.text = $"    | Threshold | System | Coach | Hand\n";
        this.straightResultText.text = $"    | 接受範圍 | 系統判定 | 教練判定 | 哪隻手\n";

        int i = 1;
        foreach (var item in this.punchUnitTestResult.punchStraightUnitList) {
            string hand = "";
            if (item.hand == Hand.Right) {
                // hand = "R";
                hand = "右";
            }
            else {
                // hand = "L";
                hand = "左";
            }
            this.straightResultText.text += $"{i:D2} | {item.handStraightAngleThreshold:F2} | {item.systemJudgeAsStraight} | {item.coachJudgeAsStraight:F2} |  {hand}\n";
            i++;
        }                            
    }

    public void settingInfoDisplay(SettingInfo settingInfo, UserInfo userInfo) {
        // this.settingText.text = $"Coach Height Difference w/ user: {settingInfo.coachDefaultValue.heightDifferenceWithUser:F2}\n" + 
        //                         $"Coach Distance to user (multiple): {settingInfo.coachDefaultValue.distanceToUserMultiple:F2}\n" +
        //                         $"Coach is pushable (!isKinematic): {!settingInfo.coachDefaultValue.isKinematic}\n" +
        //                         $"Moving Speed Max: {settingInfo.coachDefaultValue.movingSpeedMax:F2} (m/s) | Min: {settingInfo.coachDefaultValue.movingSpeedMin:F2} (m/s)\n" +
        //                         $"Controller Vibration Amplitude: {settingInfo.controllerVibration.amplitude:F1} | Frequency: {settingInfo.controllerVibration.frequency:F1}\n" +
        //                         $"Threshold of Straight: {settingInfo.evaluationThreshold.handStraightAngle:F2} (degree)\n" +
        //                         $"Testing Mode Ready Time: {settingInfo.testingModeSetting.readyTime:F1} (s) | Time Limit: {settingInfo.testingModeSetting.timeLimit:F1} (s)\n" +
        //                         $"Testing Mode Number of Tasks: {settingInfo.testingModeSetting.targetNumberOfTasks} units\n";
        
        // this.userText.text = $"User Height: {userInfo.userBodySize.height:F2} (m) | Arm Length: {userInfo.userBodySize.armLength:F2} (m)\n";
        this.settingText.text = $"教練與使用者的身高差: {settingInfo.coachDefaultValue.heightDifferenceWithUser:F2}\n" + 
                                $"教練初始位置與使用者之間的距離(多少倍臂長): {settingInfo.coachDefaultValue.distanceToUserMultiple:F2}\n" +
                                // $"移動速度最大值: {settingInfo.coachDefaultValue.movingSpeedMax:F2} (m/s) | 最小值: {settingInfo.coachDefaultValue.movingSpeedMin:F2} (m/s)\n" +
                                $"遙控器震動振幅: {settingInfo.controllerVibration.amplitude:F1} | 頻率: {settingInfo.controllerVibration.frequency:F1}\n" +
                                $"伸直的角度接受範圍: {settingInfo.evaluationThreshold.handStraightAngle:F2} (度)\n" +
                                $"測試階段的預備時間: {settingInfo.testingModeSetting.readyTime:F1} (s) | 反應時間限制: {settingInfo.testingModeSetting.unitTimeLimit:F1} (s)\n" +
                                $"測試階段要進行的回合數: {settingInfo.testingModeSetting.targetNumberOfTasks} units\n";
        
        this.userText.text = $"使用者身高: {userInfo.userBodySize.height:F2} (m) | 臂長: {userInfo.userBodySize.armLength:F2} (m)\n";
    }
    public void saveSetting() {
        this.mainManager.saveToJSON_setting(this.mainManager.mySettingInfo);
        this.mainManager.saveToJSON_user(this.mainManager.myUserInfo);
        this.mainManager.changeScene("TestingScene");
    }
}
