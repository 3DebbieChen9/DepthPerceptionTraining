using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
using TMPro;
using Newtonsoft.Json;
using System.IO;
using System;
using System.Linq;

public class PunchSettingManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public StraightModule straightModule;
    [SerializeField]
    private GameObject ROOM;
    [SerializeField]
    private GameObject selectionRoom;

    [SerializeField]
    private int curDataNum;
    [SerializeField]
    public PunchStraightUnitTest punchUnitTestResult;
    [SerializeField]
    private PunchStraightUnit punchStraightUnit;

    [SerializeField]
    private TMP_Text leftStraightStandardAngleText;
    [SerializeField]
    private TMP_Text rightStraightStandardAngleText;
    [SerializeField]
    private TMP_Text curStraightAngleText;
    [SerializeField]
    private TMP_Text curDataNumText;
    [SerializeField]
    private TMP_Text handText;
    [SerializeField]
    private TMP_Text systemResultText;
    [SerializeField]
    private TMP_Text coachResultText;
    [SerializeField]
    private TMP_Text coachResultButtonText;
    [SerializeField]
    private TMP_Text instructionText;

    [SerializeField]
    private GameObject straightPanel;
    [SerializeField]
    private GameObject straightResultPanel;
    [SerializeField]
    private TMP_Text straightResultText;

    private Transform rightStraightCollider = null;
    private Transform leftStraightCollider = null;

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
        this.sceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch))
        {
            this.reloadPunchSettingScene();
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch) && this.curDataNum <= 5)
        {
            bool isPunchStraight = this.straightModule.judgeArmStraight(Hand.Right);
            ArmRotationAngle armRotationAngle = this.straightModule.getArmAngle(Hand.Right);
            this.displayPunchUnitResult(Hand.Right, isPunchStraight, armRotationAngle);
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch) && this.curDataNum > 5)
        {
            bool isPunchStraight = this.straightModule.judgeArmStraight(Hand.Left);
            ArmRotationAngle armRotationAngle = this.straightModule.getArmAngle(Hand.Left);
            this.displayPunchUnitResult(Hand.Left, isPunchStraight, armRotationAngle);
        }
    }

    private void sceneInitialized()
    {
        this.ROOM.transform.position = new Vector3(this.mainManager.sceneOriginPosition.x,
                                                  this.mainManager.sceneOriginPosition.y,
                                                  this.mainManager.sceneOriginPosition.z);
        this.ROOM.transform.rotation = this.mainManager.sceneOriginRotation;

        this.selectionRoom.transform.localPosition = new Vector3(0.0f, 0.0f, this.mainManager.myUserInfo.userBodySize.armLength * 1.1f - (5.0f - 1.0f));
        this.leftStraightStandardAngleText.text = this.mainManager.myUserInfo.userArmStraightAngle.leftIK.angleToString();
        this.rightStraightStandardAngleText.text = this.mainManager.myUserInfo.userArmStraightAngle.rightIK.angleToString();

        this.punchUnitTestResult = new PunchStraightUnitTest();
        this.punchStraightUnit = new PunchStraightUnit();
        this.punchUnitTestResult.punchStraightUnitList.Clear();
        this.punchUnitTestInitial();

        this.straightPanel.SetActive(true);
        this.straightResultPanel.SetActive(false);
        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(true);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(true);
        // this.rightStraightCollider = this.mainManager.rightUpperArm_IK.transform.Find("StraightCollider(Clone)");
        // if (this.rightStraightCollider)
        // {
        //     this.rightStraightCollider.gameObject.GetComponent<MeshRenderer>().enabled = true;
        // }
        // this.leftStraightCollider = this.mainManager.leftUpperArm_IK.transform.Find("StraightCollider(Clone)");
        // if (this.leftStraightCollider)
        // {
        //     this.leftStraightCollider.gameObject.GetComponent<MeshRenderer>().enabled = true;
        // }
    }

    private void saveToJSON_punchResult()
    {
        string jsonString = JsonConvert.SerializeObject(this.punchUnitTestResult);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_{this.mainManager.myExperimentSetting.subjectID}_PunchUnitTest.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"PunchUnitTest_{dateTime} saved to {filePath}");
    }

    public void displayPunchUnitResult(Hand _hand, bool _systemResult, ArmRotationAngle _armRotationAngle)
    {
        this.punchStraightUnit.armRotationAngle = _armRotationAngle;
        this.punchStraightUnit.systemJudgeAsStraight = _systemResult;
        this.punchStraightUnit.handStraightAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;
        this.punchStraightUnit.hand = _hand;
        if (_hand == Hand.Right)
        {
            this.handText.text = "Right";
            // this.handText.text = "右手";
        }
        else
        {
            this.handText.text = "Left";
            // this.handText.text = "左手";
        }
        this.curStraightAngleText.text = _armRotationAngle.angleToString();
        this.systemResultText.text = _systemResult.ToString();
    }
    private void displayPunchResult()
    {
        this.rightStraightCollider = this.mainManager.rightUpperArm_IK.transform.Find("StraightCollider(Clone)");
        if (this.rightStraightCollider)
        {
            this.rightStraightCollider.gameObject.GetComponent<MeshRenderer>().enabled = false;
        }
        this.leftStraightCollider = this.mainManager.leftUpperArm_IK.transform.Find("StraightCollider(Clone)");
        if (this.leftStraightCollider)
        {
            this.leftStraightCollider.gameObject.GetComponent<MeshRenderer>().enabled = false;
        }

        // this.straightResultText.text = $"第幾次 | 哪隻手 | 角度\n";
        this.straightResultText.text = $"Number | Hand | Angle\n";
        // this.straightResultText.text += $"設定前左手標準角度: {this.punchUnitTestResult.initialUserArmStraightAngle.leftIK.angleToString()}\n";
        this.straightResultText.text += $"Left Standard Angle (Before): {this.punchUnitTestResult.initialUserArmStraightAngle.leftIK.angleToString()}\n";
        // this.straightResultText.text += $"設定前右手標準角度: {this.punchUnitTestResult.initialUserArmStraightAngle.rightIK.angleToString()}\n";
        this.straightResultText.text += $"Right Standard Angle (Before): {this.punchUnitTestResult.initialUserArmStraightAngle.rightIK.angleToString()}\n";
        int i = 1;
        foreach (var item in this.punchUnitTestResult.punchStraightUnitList)
        {
            string hand = "";
            if (item.hand == Hand.Right)
            {
                // hand = "右";
                hand = "R";
            }
            else
            {
                // hand = "左";
                hand = "L";
            }
            // this.straightResultText.text += $"{i:D2} | {hand} | {item.systemJudgeAsStraight} | {item.coachJudgeAsStraight} | {item.armRotationAngle.angleToString()}\n";
            this.straightResultText.text += $"{i:D2} | {hand} | {item.armRotationAngle.angleToString()}\n";
            i++;
        }
        // this.straightResultText.text += $"更新後左手標準角度: {this.punchUnitTestResult.updatedUserArmStraightAngle.leftIK.angleToString()}\n";
        this.straightResultText.text += $"Left Standard Angle (After): {this.punchUnitTestResult.updatedUserArmStraightAngle.leftIK.angleToString()}\n";
        // this.straightResultText.text += $"更新後右手標準角度: {this.punchUnitTestResult.updatedUserArmStraightAngle.rightIK.angleToString()}\n";
        this.straightResultText.text += $"Right Standard Angle (After): {this.punchUnitTestResult.updatedUserArmStraightAngle.rightIK.angleToString()}\n";
    }

    public void savePunchUnitResult()
    {
        if (this.handText.text == "")
        {
            return;
        }

        this.punchUnitTestResult.addUnitResult(this.punchStraightUnit);
        this.curDataNum++;
        if (this.curDataNum > 10)
        {
            this.punchUnitTestResult.userArmLength = this.mainManager.myUserInfo.userBodySize.armLength;
            this.punchUnitTestResult.userHeight = this.mainManager.myUserInfo.userBodySize.height;
            this.punchUnitTestResult.initialUserArmStraightAngle = this.mainManager.myUserInfo.userArmStraightAngle;
            this.punchUnitTestResult.updatedUserArmStraightAngle = this.calculateNewStraightStandardAngle();
            this.mainManager.myUserInfo.userArmStraightAngle = this.punchUnitTestResult.updatedUserArmStraightAngle;
            this.saveToJSON_punchResult();
            this.mainManager.saveToJSON_user(this.mainManager.myUserInfo);
            this.straightPanel.SetActive(false);
            this.straightResultPanel.SetActive(true);
            this.displayPunchResult();
        }
        else
        {
            if (curDataNum == 6)
            {
                // this.instructionText.text = "準備好請用<color=#FFA6FF>左手</color>向前出拳，伸直時按下'X'\n下方顯示數據後請按「儲存」";
                this.instructionText.text = "Use<color=#FFA6FF>LEFT hand</color>to punch forward, press 'X' when arm is straight.\nWhen there is value below press 'Save'.";
            }
            this.curDataNumText.text = $"{curDataNum}/10";
            this.handText.text = "";
            this.systemResultText.text = "";
            this.curStraightAngleText.text = "";
            this.punchStraightUnit.coachJudgeAsStraight = true;
            this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
            if (this.punchStraightUnit.coachJudgeAsStraight)
            {
                this.coachResultButtonText.text = "Not Straight";
                // this.coachResultButtonText.text = "沒伸直";
            }
            else
            {
                this.coachResultButtonText.text = "Straight";
                // this.coachResultButtonText.text = "伸直";
            }
        }
    }

    private void punchUnitTestInitial()
    {
        this.punchUnitTestResult.reset();
        this.curDataNum = 1;
        this.curDataNumText.text = "1/10";
        // this.instructionText.text = "準備好請用<color=#FFA6FF>右手</color>向前出拳，伸直時按下'A'\n下方顯示數據後請按「儲存」";
        this.instructionText.text = "Use<color=#FFA6FF>RIGHT hand</color>to punch forward, press 'A' when arm is straight.\nWhen there is value below press 'Save'.";
        this.handText.text = "";
        this.systemResultText.text = "";
        this.curStraightAngleText.text = "";
        this.punchStraightUnit.coachJudgeAsStraight = true;
        this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
        if (this.punchStraightUnit.coachJudgeAsStraight)
        {
            this.coachResultButtonText.text = "Not Straight";
            // this.coachResultButtonText.text = "沒伸直";
        }
        else
        {
            this.coachResultButtonText.text = "Straight";
            // this.coachResultButtonText.text = "伸直";
        }
    }

    public void modifyCoachJudegement()
    {
        this.punchStraightUnit.coachJudgeAsStraight = !this.punchStraightUnit.coachJudgeAsStraight;
        this.coachResultText.text = this.punchStraightUnit.coachJudgeAsStraight.ToString();
        if (this.punchStraightUnit.coachJudgeAsStraight)
        {
            this.coachResultButtonText.text = "Not Straight";
            // this.coachResultButtonText.text = "沒伸直";
        }
        else
        {
            this.coachResultButtonText.text = "Straight";
            // this.coachResultButtonText.text = "伸直";
        }
    }

    public void btnSelectionSceneClick()
    {
        if (this.mainManager.myExperimentSetting.experimentSection == ExperimentSection.Experience)
        {
            this.mainManager.curSystemMode = SystemMode.SelectionMode;
            this.mainManager.changeScene("SelectionScene");
        }
        else
        {
            this.mainManager.curSystemMode = this.mainManager.myExperimentSetting.experimentMode;
            switch (this.mainManager.myExperimentSetting.experimentMode)
            {
                case SystemMode.TestingMode:
                    this.mainManager.changeScene("TestingScene");
                    break;
                default:
                    this.mainManager.changeScene("TrainingScene");
                    break;
            }
        }
    }

    public void reloadPunchSettingScene()
    {
        this.mainManager.changeScene("PunchSettingScene");
    }

    private UserArmStraightAngle calculateNewStraightStandardAngle()
    {
        UserArmStraightAngle result = new UserArmStraightAngle();
        result.leftNoitom = this.mainManager.myUserInfo.userArmStraightAngle.leftNoitom;
        result.rightNoitom = this.mainManager.myUserInfo.userArmStraightAngle.rightNoitom;
        List<float> leftHandAngleForward = new List<float>();
        List<float> leftHandAngleUp = new List<float>();
        List<float> leftHandAngleRight = new List<float>();
        List<float> rightHandAngleForward = new List<float>();
        List<float> rightHandAngleUp = new List<float>();
        List<float> rightHandAngleRight = new List<float>();

        foreach (var item in this.punchUnitTestResult.punchStraightUnitList)
        {
            switch (item.hand)
            {
                case Hand.Right:
                    rightHandAngleForward.Add(item.armRotationAngle.forward);
                    rightHandAngleUp.Add(item.armRotationAngle.up);
                    rightHandAngleRight.Add(item.armRotationAngle.right);
                    break;
                case Hand.Left:
                    leftHandAngleForward.Add(item.armRotationAngle.forward);
                    leftHandAngleUp.Add(item.armRotationAngle.up);
                    leftHandAngleRight.Add(item.armRotationAngle.right);
                    break;
            }
        }

        result.leftIK.forward = leftHandAngleForward.Average();
        result.leftIK.up = leftHandAngleUp.Average();
        result.leftIK.right = leftHandAngleRight.Average();
        result.rightIK.forward = rightHandAngleForward.Average();
        result.rightIK.up = rightHandAngleUp.Average();
        result.rightIK.right = rightHandAngleRight.Average();

        return result;
    }
}
