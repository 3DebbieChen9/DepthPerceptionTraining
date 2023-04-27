using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DepthPerceptionSystem;
using UnityEngine.SceneManagement;

public class TrainingUIManager : MonoBehaviour
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
    private GameObject finalButtonsCanvas;

    // Start is called before the first frame update
    void Start()
    {
        this.startCanvas.SetActive(false);
        this.readyCanvas.SetActive(false);
        this.unitResultCanvas.SetActive(false);
        this.finalResultCanvas.SetActive(false);
        this.finalButtonsCanvas.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (this.startCanvas.activeSelf) {
            this.startCanvas.transform.position = this.startCanvasRect.position;
            this.startCanvas.transform.rotation = this.startCanvasRect.rotation;
        }
        if (this.readyCanvas.activeSelf) {
            this.readyCanvas.transform.position = this.readyCanvasRect.position;
            this.readyCanvas.transform.rotation = this.readyCanvasRect.rotation;
        }
    }

    public void welcomeToTrainingMode(int targetUnit, SystemMode curSystemMode, TrainingLevel curTrainingLevel) {
        string trainingCue = "";
        switch (curSystemMode) {
            case SystemMode.TrainingMode:
                // trainingCue = "Without any cue";
                trainingCue = "沒有任何提示";
                break;
            case SystemMode.TrainingMode_LineCue:
                // trainingCue = "Line cue";
                trainingCue = "連線提示";
                break;
            case SystemMode.TrainingMode_SphereCue_v1:
                // trainingCue = "Sphere cue v1";
                trainingCue = "球體提示 v1";
                break;
            case SystemMode.TrainingMode_SphereCue_v2:
                // trainingCue = "Sphere cue v2";
                trainingCue = "球體提示 v2";
                break;
            case SystemMode.TrainingMode_SphereCue_v3:
                // trainingCue = "Sphere cue v3";
                trainingCue = "球體提示 v3";
                break;
        }
        string trainingLevel = "";
        switch (curTrainingLevel) {
            case TrainingLevel.easy:
                // trainingLevel = "Slowest moving speed";
                trainingLevel = "最慢移動速度";
                break;
            case TrainingLevel.medium:
                // trainingLevel = "Fastest moving speed";
                trainingLevel = "最快移動速度";
                break;
            case TrainingLevel.hard:
                // trainingLevel = "Random moving speed";
                trainingLevel = "隨機移動速度";
                break;
        }
        this.startCanvas.SetActive(true);
        // this.startTitle.text = "Welcome to Training Mode";
        // this.startText.text = "There will be " + targetUnit.ToString() + " units in each training." + 
        //                         "\nPlease move to center and press the button 'A' to start.";
        this.startTitle.text = $"歡迎來到訓練階段 ({trainingCue})\n{trainingLevel}";
        this.startText.text = $"每一次訓練一共會有 {targetUnit.ToString()} 個回合\n請移動到中心並按下按鈕 'A' 以開始";
        
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

    public void closeStartCanvas() {
        this.startCanvas.SetActive(false);
    }

    public void openReadyCanvas() {
        this.readyCanvas.SetActive(true);
    }

    public void closeReadyCanvas() {
        this.readyCanvas.SetActive(false);
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "";
        this.readyUnitTitle.text = "";
    }

    public void closeResultCanvas() {
        this.unitResultCanvas.SetActive(false);
        this.unitResultTitle.text = "";
        this.unitResultText.text = "";
        this.finalResultText.text = "";
        this.finalResultTitle.text = "";
    }

    public void showMoveToCenter() {
        // this.readyUnitTitle.text = "Please move to the center";
        this.readyUnitTitle.text = "請移動到紅色中心點";
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "!";
    }
    public void unitResultView(int unitNumber, int unitScore, float reactionTime, List<string> comment, bool isOverTime) {
        this.unitResultCanvas.SetActive(true);
        // this.unitResultTitle.text = "Unit " + unitNumber.ToString() + ": " + unitScore.ToString() + "/3";
        this.unitResultTitle.text = $"第 {unitNumber.ToString()} 回合: {unitScore.ToString()}/3";
        if (isOverTime) {
            // this.unitResultText.text = "It's over time.";
            this.unitResultText.text = "超時了!";
        }
        else {
            // this.unitResultText.text = "Reaction Time: " + reactionTime.ToString("F3") + "s";
            this.unitResultText.text = "反應時間" + reactionTime.ToString("F3") + "s";
            foreach (string c in comment) {
                this.unitResultText.text += "\n" + c;
            }
            Debug.Log(this.unitResultText.text);
        }
    }

    public void finalResultView(int totalScore, float averageReactionTime, int numberOfMovingCorrectly, int numberOfReacting, int numberOfSuccess, int numberOfOverTime) {
        this.finalResultCanvas.SetActive(true);
        // this.finalResultTitle.text = "Test Finished";
        // this.finalResultText.text = "Total Score: " + totalScore.ToString() + "\n" +
        //                             "Average Reaction Time: " + averageReactionTime.ToString("F3") + "s" + "\n" + 
        //                             "=============================" + "\n" +
        //                             "Number of Moving Correctly: " + numberOfMovingCorrectly.ToString() + "\n" + 
        //                             "Number of Reacting: " + numberOfReacting.ToString() + "\n" +
        //                             "Number of Success: " + numberOfSuccess.ToString() + "\n" +
        //                             "Number of Over Time: " + numberOfOverTime.ToString();
        this.finalResultTitle.text = "測試結束";
        this.finalResultText.text = "總分: " + totalScore.ToString() + "\n" +
                                    "平均反應時間: " + averageReactionTime.ToString("F3") + "s" + "\n" + 
                                    "=============================" + "\n" +
                                    "移動方向正確次數: " + numberOfMovingCorrectly.ToString() + "\n" + 
                                    "做出反應次數: " + numberOfReacting.ToString() + "\n" +
                                    "成功次數: " + numberOfSuccess.ToString() + "\n" +
                                    "超時次數: " + numberOfOverTime.ToString();
        this.finalButtonsCanvas.SetActive(true);
    }

    public void readyTitleView (int curUnitNum) {
        this.readyCanvas.SetActive(true);
        // this.readyUnitTitle.text = "Ready for Unit " + curUnitNum.ToString();
        this.readyUnitTitle.text = $"準備開始第 {curUnitNum.ToString()} 回合";
    }

    public void readyCountdownView (float timeLeft, float timeTarget) {
        this.readyCountdownText.text = timeLeft.ToString("F0");
        this.readyCoundownImage.fillAmount = timeLeft / timeTarget;
    }

    public void readyStartView (int curUnitNum) {
        // this.readyUnitTitle.text = "Unit " + curUnitNum.ToString() + " Start!";
        this.readyUnitTitle.text = $"第 {curUnitNum.ToString()} 回合開始";
    }

    public string userIsMoving() {
        // return "User is moving";
        return "有移動";
    }
    public string userNotMoving() {
        // return "User is not moving";
        return "沒有移動";
    }
    public string userIsPunching() {
        // return "User is punching";
        return "出拳了";
    }

    public string userNotPunching() {
        // return "User is not punching";
        return "沒有出拳"; 
    }

    public string userReachNotStraight() {
        // return "Reach target but arm isn't straight";
        return "有打到肩膀, 但手臂不是直的";
    }

    public string userStraightNotReach() {
        // return "Arm is straight but not reach target";
        return "手臂伸直, 但沒有打到肩膀";
    }

    public string reactionScore() {
        // return "Reaction Score + 1";
        return "有反應, 得分 + 1";
    }

    public string movingWrong() {
        // return "Moving Wrong Direction";
        return "移動方向錯誤";
    }
    public string movingCorretlyScore() {
        // return "Moving Correctly Score + 1";
        return "移動方向正確, 得分 + 1";
    }

    public string reachAndStraightScore() {
        // return "Reach and Straight Score + 1";
        return "伸直打到肩膀, 得分 + 1";
    }

    public void btnSelection() {
        string sceneName = "SelectionScene";
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }

    public void btnTesting() {
        string sceneName = "TestingScene";
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }

    public void btnCalibration() {
        string sceneName = "CalibrationScene";
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }

    public void btnExit() {
        Application.Quit();
    }

}
