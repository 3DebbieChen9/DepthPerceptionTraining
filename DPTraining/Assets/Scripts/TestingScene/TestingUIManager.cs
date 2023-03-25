using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using DepthPerceptionSystem;
using InstructionText;

public class TestingUIManager : MonoBehaviour
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

    [SerializeField]
    private TMP_Text settingText;


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

    public void welcomToTestingMode(int targetUnit) {
        this.startCanvas.SetActive(true);
        this.startTitle.text = "Welcome to Testing Mode";
        this.startText.text = "There will be " + targetUnit.ToString() + " units in this test." + 
                                "\nPlease move to center and press the button 'A' to start.";
        
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
        this.readyUnitTitle.text = "Please move to the center";
    }
    public void unitResultView(int unitNumber, int unitScore, float reactionTime, List<string> comment, bool isOverTime) {
        this.unitResultCanvas.SetActive(true);
        this.unitResultTitle.text = "Unit " + unitNumber.ToString() + ": " + unitScore.ToString() + "/3";
        if (isOverTime) {
            this.unitResultText.text = "It's over time.";
        }
        else {
            this.unitResultText.text = "Reaction Time: " + reactionTime.ToString("F3") + "s";
            foreach (string c in comment) {
                this.unitResultText.text += "\n" + c;
            }
        }
    }

    public void finalResultView(int totalScore, float averageReactionTime, int numberOfMovingCorrectly, int numberOfReacting, int numberOfSuccess, int numberOfOverTime) {
        this.finalResultCanvas.SetActive(true);
        this.finalResultTitle.text = "Test Finished";
        this.finalResultText.text = "Total Score: " + totalScore.ToString() + "\n" +
                                    "Average Reaction Time: " + averageReactionTime.ToString("F3") + "s" + "\n" + 
                                    "=============================" + "\n" +
                                    "Number of Moving Correctly: " + numberOfMovingCorrectly.ToString() + "\n" + 
                                    "Number of Reacting: " + numberOfReacting.ToString() + "\n" +
                                    "Number of Success: " + numberOfSuccess.ToString() + "\n" +
                                    "Number of Over Time: " + numberOfOverTime.ToString();
        this.finalButtonsCanvas.SetActive(true);
    }

    public void readyTitleView (int curUnitNum) {
        this.readyCanvas.SetActive(true);
        this.readyUnitTitle.text = "Ready for Unit " + curUnitNum.ToString();
    }

    public void readyCountdownView (float timeLeft, float timeTarget) {
        this.readyCountdownText.text = timeLeft.ToString("F0");
        this.readyCoundownImage.fillAmount = timeLeft / timeTarget;
    }

    public void readyStartView (int curUnitNum) {
        this.readyUnitTitle.text = "Unit " + curUnitNum.ToString() + " Start!";
    }


    public string userNotMoving() {
        return "User is not moving";
    }

    public string userNotPunching() {
        return "User is not punching";
    }

    public string userReachNotStraight() {
        return "Reach target but arm isn't straight";
    }

    public string userStraightNotReach() {
        return "Arm is straight but not reach target";
    }

    public string reactionScore() {
        return "Reaction Score + 1";
    }

    public string movingCorretlyScore() {
        return "Moving Correctly Score + 1";
    }

    public string reachAndStraightScore() {
        return "Reach and Straight Score + 1";
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

    public void btnSetting() {
        string sceneName = "SettingScene";
        Debug.Log("Change Scene to " + sceneName);
        //[TODO] SceneManager.LoadScene(sceneName);
    }

    public void settingInfoDisplay(SettingInfo settingInfo) {
        this.settingText.text = $"Controller Vibration Amplitude: {settingInfo.controllerVibrationAmplitude}\n" + 
                             $"Coach Height Difference w/ user: {settingInfo.coachDefaultValue.heightDifferenceWithUser}\n" + 
                             $"Coach Distance to user (multiple): {settingInfo.coachDefaultValue.distanceToUserMultiple}\n" +
                             $"Moving Speed Max: {settingInfo.coachDefaultValue.movingSpeedMax}\n" +
                             $"Moving Speed Min: {settingInfo.coachDefaultValue.movingSpeedMin}\n" +
                             $"Threshold of Straight: {settingInfo.evaluationThreshold.handStraightAngle}\n" +
                             $"Testing Mode Ready Time: {settingInfo.testingModeSetting.readyTime}\n" +
                             $"Testing Mode Time Limit: {settingInfo.testingModeSetting.timeLimit}\n" +
                             $"Testing Mode Number of Tasks: {settingInfo.testingModeSetting.targetNumberOfTasks}\n";
    }
}
