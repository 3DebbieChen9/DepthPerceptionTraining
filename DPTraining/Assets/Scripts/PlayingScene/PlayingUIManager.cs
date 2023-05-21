using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using DepthPerceptionSystem;
using InstructionText;

public class PlayingUIManager : MonoBehaviour
{
    [SerializeField]
    private GameObject startCanvas;
    [SerializeField]
    private RectTransform startCanvasRect;
    [SerializeField]
    private TMP_Text startTitle;
    [SerializeField]
    private TMP_Text startText;

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
    private GameObject unitResultCanvas;
    [SerializeField]
    private TMP_Text unitResultTitle;
    [SerializeField]
    private TMP_Text unitResultText;
    [SerializeField]
    private GameObject finalResultCanvas;
    [SerializeField]
    private TMP_Text finalResultTitle;
    [SerializeField]
    private TMP_Text finalResultText;
    [SerializeField]
    public GameObject finalButtonsCanvas;

    void Awake()
    {
        this.startCanvas.SetActive(false);
        this.readyCanvas.SetActive(false);
        this.unitResultCanvas.SetActive(false);
        this.finalResultCanvas.SetActive(false);
        this.finalButtonsCanvas.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (this.startCanvas.activeSelf)
        {
            this.startCanvas.transform.position = this.startCanvasRect.position;
            this.startCanvas.transform.rotation = this.startCanvasRect.rotation;
        }
        if (this.readyCanvas.activeSelf)
        {
            this.readyCanvas.transform.position = this.readyCanvasRect.position;
            this.readyCanvas.transform.rotation = this.readyCanvasRect.rotation;
        }

    }

    public void welcomToTestingMode(int targetUnit, bool isTestingMode)
    {
        this.startCanvas.SetActive(true);
        // this.startTitle.text = "Welcome to Testing Mode";
        // this.startText.text = "There will be " + targetUnit.ToString() + " units in this test." + 
        //                         "\nPlease move to center and press the button 'A' to start.";
        string mode = isTestingMode ? "測試" : "訓練";

        this.startTitle.text = $"歡迎來到{mode}階段";
        this.startText.text = $"本{mode}一共會有 {targetUnit.ToString()} 個回合\n請移動到中心並按下按鈕 'A' 以開始";

        this.readyCanvas.SetActive(false);
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "";
        this.readyUnitTitle.text = "";

        this.unitResultCanvas.SetActive(false);
        this.unitResultTitle.text = "";
        this.unitResultText.text = "";

        this.finalResultCanvas.SetActive(false);
        this.finalResultTitle.text = "";
        this.finalResultText.text = "";

        this.finalButtonsCanvas.SetActive(false);
    }

    public void closeStartCanvas()
    {
        this.startCanvas.SetActive(false);
    }

    public void openReadyCanvas()
    {
        this.readyCanvas.SetActive(true);
    }

    public void closeReadyCanvas()
    {
        this.readyCanvas.SetActive(false);
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "";
        this.readyUnitTitle.text = "";
    }

    public void closeResultCanvas()
    {
        this.unitResultCanvas.SetActive(false);
        this.unitResultTitle.text = "";
        this.unitResultText.text = "";
        this.finalResultText.text = "";
        this.finalResultTitle.text = "";
    }

    public void showMoveToCenter()
    {
        // this.readyUnitTitle.text = "Please move to the center";
        this.readyUnitTitle.text = "請移動到紅色中心點";
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "!";
    }
    public void unitResultView(int unitNumber, int unitScore, float reactionTime, List<string> comment, bool isOverTime, bool training)
    {
        this.unitResultCanvas.SetActive(true);
        // this.unitResultTitle.text = "Unit " + unitNumber.ToString() + ": " + unitScore.ToString() + "/5";
        this.unitResultTitle.text = $"第 {unitNumber.ToString()} 回合: {unitScore.ToString()}/5";
        if (isOverTime)
        {
            // this.unitResultText.text = "It's over time.";
            string limitTime = training ? "4.0" : "4.0";
            this.unitResultText.text = $"超過 {limitTime} 秒了!";
        }
        else
        {
            // this.unitResultText.text = "Reaction Time: " + reactionTime.ToString("F3") + "s";
            this.unitResultText.text = "反應時間 " + reactionTime.ToString("F3") + " 秒";
        }

        if (training)
        {
            foreach (string c in comment)
            {
                this.unitResultText.text += "\n" + c;
            }
            Debug.Log(this.unitResultText.text);
        }
    }

    public void finalResultView(int totalScore, float averageReactionTime, int numberOfMoving, int numberOfPunching, int numberOfMovingCorrectly, int numberOfReach, int numberOfSuccess, int numberOfOverTime)
    {
        this.finalResultCanvas.SetActive(true);
        // this.finalResultTitle.text = "Test Finished";
        // this.finalResultText.text = "Total Score: " + totalScore.ToString() + "\n" +
        //                             "Average Reaction Time: " + averageReactionTime.ToString("F3") + "s" + "\n" + 
        //                             "=============================" + "\n" +
        //                             "Number of Moving: " + numberOfMoving.ToString() + "\n" +
        //                             "Number of Punching: " + numberOfPunching.ToString() + "\n" +
        //                             "Number of Moving Correctly: " + numberOfMovingCorrectly.ToString() + "\n" + 
        //                             "Number of Reaching: " + numberOfReach.ToString() + "\n" +
        //                             "Number of Success: " + numberOfSuccess.ToString() + "\n" +
        //                             "Number of Over Time: " + numberOfOverTime.ToString();
        this.finalResultTitle.text = "測試結束";
        this.finalResultText.text = "總分: " + totalScore.ToString() + "\n" +
                                    "平均反應時間: " + averageReactionTime.ToString("F3") + "s" + "\n" +
                                    "=============================" + "\n" +
                                    "移動次數: " + numberOfMoving.ToString() + "\n" +
                                    "出拳次數: " + numberOfPunching.ToString() + "\n" +
                                    "移動方向正確次數: " + numberOfMovingCorrectly.ToString() + "\n" +
                                    "碰到目標次數: " + numberOfReach.ToString() + "\n" +
                                    "成功次數: " + numberOfSuccess.ToString() + "\n" +
                                    "超時次數: " + numberOfOverTime.ToString();
        this.finalButtonsCanvas.SetActive(true);
    }

    public void readyTitleView(int curUnitNum)
    {
        this.readyCanvas.SetActive(true);
        // this.readyUnitTitle.text = "Ready for Unit " + curUnitNum.ToString();
        this.readyUnitTitle.text = $"準備開始第 {curUnitNum.ToString()} 回合";
    }

    public void readyCountdownView(float timeLeft, float timeTarget)
    {
        this.readyCountdownText.text = timeLeft.ToString("F0");
        this.readyCoundownImage.fillAmount = timeLeft / timeTarget;
    }

    public void readyStartView(int curUnitNum)
    {
        // this.readyUnitTitle.text = "Unit " + curUnitNum.ToString() + " Start!";
        this.readyUnitTitle.text = $"第 {curUnitNum.ToString()} 回合開始";
    }

    public string userIsMovingScore(bool isOverTime)
    {
        if (isOverTime)
        {
            // return "User is moving";
            return "有移動";
        }
        else
        {
            // return "User is moving Score + 1";
            return "有移動, 得分 + 1";
        }
    }
    public string userNotMoving()
    {
        // return "User is not moving";
        return "沒有移動";
    }
    public string movingWrongDirection()
    {
        // return "Moving Wrong Direction";
        return "移動方向錯誤";
    }
    public string movingCorretlyScore(bool isOverTime)
    {
        if (isOverTime)
        {
            // return "Moving Correctly";
            return "移動方向正確";
        }
        else
        {
            // return "Moving Correctly Score + 1";
            return "移動方向正確, 得分 + 1";
        }
    }

    public string userIsPunchingScore(bool isOverTime)
    {
        if (isOverTime)
        {
            // return "User is punching";
            return "有出拳";
        }
        else
        {
            // return "User Punching Score + 1";
            return "有出拳, 得分 + 1";
        }
    }
    public string userNotPunching()
    {
        // return "User is not punching";
        return "沒有出拳";
    }

    public string userReachScore(bool isOverTime)
    {
        if (isOverTime)
        {
            // return "User reach target";
            return "有打到肩膀";
        }
        else
        {
            // return "User Reach Target Score + 1";
            return "有打到肩膀, 得分 + 1";
        }
    }
    public string userNotReach()
    {
        // return "User is not reach target";
        return "沒有打到肩膀";
    }

    public string reachAndStraightScore(bool isOverTime)
    {
        // return "Reach and Straight Score + 1";
        if (isOverTime)
        {
            return "伸直打到肩膀";
        }
        else
        {
            return "伸直打到肩膀, 得分 + 1";
        }
    }
    public string reachButNotStraight()
    {
        // return "Hand is not straight";
        return "手臂沒有伸直";
    }

    public void btnChangeScene(string sceneName)
    {
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }

    public void btnExit()
    {
        Application.Quit();
    }

    // public void btnSetting() {
    //     // string sceneName = "SettingScene";
    //     string sceneName = "SettingScene_TC";
    //     Debug.Log("Change Scene to " + sceneName);
    //     SceneManager.LoadScene(sceneName);
    // }

    // public void settingInfoDisplay(SettingInfo settingInfo, UserInfo userInfo) {
    //     // this.settingText.text = $"Coach Height Difference w/ user: {settingInfo.coachDefaultValue.heightDifferenceWithUser:F2}\n" + 
    //     //                         $"Coach Distance to user (multiple): {settingInfo.coachDefaultValue.distanceToUserMultiple:F2}\n" +
    //     //                         $"Coach is pushable (!isKinematic): {!settingInfo.coachDefaultValue.isKinematic}\n" +
    //     //                         $"Moving Speed Max: {settingInfo.coachDefaultValue.movingSpeedMax:F2} (m/s) | Min: {settingInfo.coachDefaultValue.movingSpeedMin:F2} (m/s)\n" +
    //     //                         $"Controller Vibration Amplitude: {settingInfo.controllerVibration.amplitude:F1} | Frequency: {settingInfo.controllerVibration.frequency:F1}\n" +
    //     //                         $"Threshold of Straight: {settingInfo.evaluationThreshold.handStraightAngle:F2} (degree)\n" +
    //     //                         $"Testing Mode Ready Time: {settingInfo.testingModeSetting.readyTime:F1} (s) | Time Limit: {settingInfo.testingModeSetting.timeLimit:F1} (s)\n" +
    //     //                         $"Testing Mode Number of Tasks: {settingInfo.testingModeSetting.targetNumberOfTasks} units\n";

    //     // this.userText.text = $"User Height: {userInfo.userBodySize.height:F2} (m) | Arm Length: {userInfo.userBodySize.armLength:F2} (m)\n";

    //     this.settingText.text = $"教練與使用者的身高差: {settingInfo.coachDefaultValue.heightDifferenceWithUser:F2}\n" + 
    //                             $"教練初始位置與使用者之間的距離(多少倍臂長): {settingInfo.coachDefaultValue.distanceToUserMultiple:F2}\n" +
    //                             // $"移動速度最大值: {settingInfo.coachDefaultValue.movingSpeedMax:F2} (m/s) | 最小值: {settingInfo.coachDefaultValue.movingSpeedMin:F2} (m/s)\n" +
    //                             $"遙控器震動振幅: {settingInfo.controllerVibration.amplitude:F1} | 頻率: {settingInfo.controllerVibration.frequency:F1}\n" +
    //                             $"伸直的角度接受範圍: {settingInfo.evaluationThreshold.handStraightAngle:F2} (度)\n" +
    //                             $"測試階段的預備時間: {settingInfo.testingModeSetting.readyTime:F1} (s) | 反應時間限制: {settingInfo.testingModeSetting.unitTimeLimit:F1} (s)\n" +
    //                             $"測試階段要進行的回合數: {settingInfo.testingModeSetting.targetNumberOfTasks} units\n";

    //     this.userText.text = $"使用者身高: {userInfo.userBodySize.height:F2} (m) | 臂長: {userInfo.userBodySize.armLength:F2} (m)\n";
    // }
}
