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
    [SerializeField]
    public TMP_Text finalButtonsTitle;
    [SerializeField]
    private TMP_Text[] tableSubTitles;
    [SerializeField]
    private TMP_Text[] tableUnitText;
    [SerializeField]
    private TMP_Text[] tableDirectionText;
    [SerializeField]
    private TMP_Text[] tableTargetText;
    [SerializeField]
    private TMP_Text[] tableIsMovingText;
    [SerializeField]
    private TMP_Text[] tableIsMovingCorrectlyText;
    [SerializeField]
    private TMP_Text[] tableIsPunchingText;
    [SerializeField]
    private TMP_Text[] tableIsReachingText;
    [SerializeField]
    private TMP_Text[] tableIsSuccessText;
    [SerializeField]
    private TMP_Text[] tableReactionTimeText;

    [SerializeField]
    public GameObject buttonsCanvas;


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

    public void welcomToTestingMode(int targetUnit, bool isTestingMode, int trailNumber)
    {
        this.startCanvas.SetActive(true);
        // string mode = isTestingMode ? "測試" : "訓練";
        string mode = isTestingMode ? "Testing" : "Training";
        this.startTitle.text = $"Welcome to {mode} Mode";
        this.startText.text = "There will be " + targetUnit.ToString() + " units in this test." + 
                                "\nPlease move to center and press the button 'A' to start.";

        // int targetTrail = isTestingMode ? 2 : 4;
        // this.startTitle.text = $"歡迎來到第 {trailNumber + 1}/{targetTrail} 次{mode}階段";
        // this.startText.text = $"本{mode}一共會有 {targetUnit.ToString()} 個回合\n請移動到中心並按下按鈕 'A' 以開始";

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
        this.buttonsCanvas.SetActive(false);
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
        this.readyUnitTitle.text = "Please move to center";
        // this.readyUnitTitle.text = "請移動到紅色中心點";
        this.readyCoundownImage.fillAmount = 0;
        this.readyCountdownText.text = "!";
    }
    public void unitResultView(int unitNumber, int unitScore, float reactionTime, List<string> comment, bool isOverTime, bool isTraining, float standardReactionTime)
    {
        this.unitResultCanvas.SetActive(true);
        // this.unitResultTitle.text = $"第 {unitNumber.ToString()} 回合結束";
        this.unitResultTitle.text = $"End of Unit {unitNumber.ToString()}";

        if (isTraining)
        {
            if (isOverTime)
            {
                // this.unitResultText.text = "It's over time.";
                string limitTime = isTraining ? "4.0" : "4.0";
                // this.unitResultText.text = $"<color=#4EFEB3>超過 {limitTime} 秒了!</color>";
                this.unitResultText.text = $"<color=#4EFEB3>Over {limitTime} seconds!</color>";
            }
            else
            {
                string textColorHex = "#FFFFFF";
                string timeDeltaSign = "+";
                if (reactionTime - standardReactionTime <= 0)
                {
                    textColorHex = "#4EFEB3";
                    timeDeltaSign = "";
                }
                else if (reactionTime - standardReactionTime > 0)
                {
                    textColorHex = "#FFC1E0";
                    timeDeltaSign = "+";
                }
                // this.unitResultText.text = "Reaction Time: " + reactionTime.ToString("F3") + "s";
                // this.unitResultText.text = "反應時間 " + reactionTime.ToString("F3") + " 秒";
                // this.unitResultText.text = $"反應時間: {reactionTime:F3} s <color={textColorHex}>({timeDeltaSign}{reactionTime - standardReactionTime:F3})</color>";
                this.unitResultText.text = $"Reaction Time: {reactionTime:F3} s <color={textColorHex}>({timeDeltaSign}{reactionTime - standardReactionTime:F3})</color>";
            }

            foreach (string c in comment)
            {
                this.unitResultText.text += "\n" + c;
            }
            Debug.Log(this.unitResultText.text);
        }
    }

    public void finalResultView(bool notShowResultPanel, TotalUnitResult totalResult, int totalScore, float standardReactionTime, float averageReactionTime, int numberOfMoving, int numberOfPunching, int numberOfMovingCorrectly, int numberOfReach, int numberOfSuccess, int numberOfOverTime, int numberOfUnit)
    {
        this.finalResultCanvas.SetActive(true);

        float movingRate = (float)numberOfMoving / (float)numberOfUnit * 100.0f;
        float movingCorrectlyRate = (float)numberOfMovingCorrectly / (float)numberOfUnit * 100.0f;
        float punchingRate = (float)numberOfPunching / (float)numberOfUnit * 100.0f;
        float reachRate = (float)numberOfReach / (float)numberOfUnit * 100.0f;
        float successRate = (float)numberOfSuccess / (float)numberOfUnit * 100.0f;

        if (notShowResultPanel)
        {
            // this.finalResultTitle.text = "測試結束";
            this.finalResultTitle.text = "End of the Testing";
            this.finalResultText.text = "";
        }
        else
        {
            // this.finalResultTitle.text = "訓練結束";
            this.finalResultTitle.text = "End of the Training";
            string textColorHex = "#FFFFFF";
            string timeDeltaSign = "+";
            if (averageReactionTime - standardReactionTime <= 0)
            {
                textColorHex = "#4EFEB3";
                timeDeltaSign = "";
            }
            else if (averageReactionTime - standardReactionTime > 0)
            {
                textColorHex = "#FFC1E0";
                timeDeltaSign = "+";
            }
            // this.finalResultText.text = $"平均反應時間: {averageReactionTime:F3}s (<color={textColorHex}>{timeDeltaSign}{averageReactionTime - standardReactionTime:F3}</color>)";
            this.finalResultText.text = $"Average Reaction Time: {averageReactionTime:F3}s (<color={textColorHex}>{timeDeltaSign}{averageReactionTime - standardReactionTime:F3}</color>)";

            // this.tableSubTitles[0].text = "回合";
            this.tableSubTitles[0].text = "Unit";
            // this.tableSubTitles[1].text = "目標拳頭";
            this.tableSubTitles[1].text = "Target Punch";
            // this.tableSubTitles[2].text = "目標方向";
            this.tableSubTitles[2].text = "Direction";
            // this.tableSubTitles[3].text = "有移動";
            this.tableSubTitles[3].text = "Moving";
            // this.tableSubTitles[4].text = "移動正確";
            this.tableSubTitles[4].text = "Moving Correctly";
            // this.tableSubTitles[5].text = "有出拳";
            this.tableSubTitles[5].text = "Punching";
            // this.tableSubTitles[6].text = "打到目標";
            this.tableSubTitles[6].text = "Reach Target";
            // this.tableSubTitles[7].text = "成功";
            this.tableSubTitles[7].text = "Success";
            // this.tableSubTitles[8].text = "反應時間";
            this.tableSubTitles[8].text = "Reaction Time";

            int index = 0;
            foreach (UnitResult unitResult in totalResult.unitResultList)
            {
                // string userIdealDirection = unitResult.coachMovingDirection == MovingDirection.Forward ? "後退" : "前進";
                string userIdealDirection = unitResult.coachMovingDirection == MovingDirection.Forward ? "Retreat" : "Advance";
                // string userIdealHand = unitResult.coachTargetShoulder == Hand.Right ? "左拳" : "右拳";
                string userIdealHand = unitResult.coachTargetShoulder == Hand.Right ? "Left" : "Right";
                string moving = unitResult.isMoving ? "O" : "X";
                string movingCorrectly = unitResult.isMovingCorrectly ? "O" : "X";
                string punching = unitResult.isPunching ? "O" : "X";
                string reach = unitResult.isReach ? "O" : "X";
                string success = unitResult.isSuccess ? "O" : "X";
                this.tableUnitText[index].text = $"{unitResult.unitNum}";
                this.tableTargetText[index].text = $"{userIdealHand}";
                this.tableDirectionText[index].text = $"{userIdealDirection}";
                this.tableIsMovingText[index].text = $"{moving}";
                this.tableIsMovingCorrectlyText[index].text = $"{movingCorrectly}";
                this.tableIsPunchingText[index].text = $"{punching}";
                this.tableIsReachingText[index].text = $"{reach}";
                this.tableIsSuccessText[index].text = $"{success}";
                this.tableReactionTimeText[index].text = $"{unitResult.reactionTime:F2}";
                index++;
            }
        }

        this.finalButtonsCanvas.SetActive(true);
    }

    public void readyTitleView(int curUnitNum)
    {
        this.readyCanvas.SetActive(true);
        this.readyUnitTitle.text = $"Ready for Unit {curUnitNum.ToString()}";
        // this.readyUnitTitle.text = $"準備開始第 {curUnitNum.ToString()} 回合";
    }

    public void readyCountdownView(float timeLeft, float timeTarget)
    {
        this.readyCountdownText.text = timeLeft.ToString("F0");
        this.readyCoundownImage.fillAmount = timeLeft / timeTarget;
    }

    public void readyStartView(int curUnitNum)
    {
        this.readyUnitTitle.text = $"Unit {curUnitNum.ToString()} Start!";
        // this.readyUnitTitle.text = $"第 {curUnitNum.ToString()} 回合開始";
    }

    public string userIsMovingScore(bool isOverTime)
    {
        // return "o 有移動";
        return "o Moving";
    }
    public string userNotMoving()
    {
        // return "<color=#FF7FCA>x 沒有移動</color>";
        return "<color=#FF7FCA>x Didn't Move</color>";
    }
    public string movingWrongDirection()
    {
        // return "<color=#FF7FCA>x 移動方向錯誤</color>";
        return "<color=#FF7FCA>x Wrong Direction</color>";
    }
    public string movingCorretlyScore(bool isOverTime)
    {
        // return "o 移動方向正確";
        return "o Moving Correctly";
    }

    public string userIsPunchingScore(bool isOverTime)
    {
        // return "o 有出拳";
        return "o Punching";
    }
    public string userNotPunching()
    {
        // return "<color=#FF7FCA>x 沒有出拳</color>";
        return "<color=#FF7FCA>x Didn't Punch</color>";
    }

    public string userReachScore(bool isOverTime)
    {
        // return "o 打到目標";
        return "o Reach Target";
    }
    public string userNotReach()
    {
        // return "<color=#FF7FCA>x 沒有打到目標</color>";
        return "<color=#FF7FCA>x Didn't Reach the Target</color>";
    }

    public string reachAndStraightScore(bool isOverTime)
    {
        // return "o 伸直打到目標 (成功)";
        return "o Reach Target w/ Straight Arm (Success)";
    }
    public string armIsStraight()
    {
        // return "o 手臂伸直";
        return "o Arm Straigt";
    }
    public string armNotStraight()
    {
        // return "<color=#FF7FCA>x 手臂沒有伸直</color>";
        return "<color=#FF7FCA>x Arm isn't Straight</color>";
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

}
