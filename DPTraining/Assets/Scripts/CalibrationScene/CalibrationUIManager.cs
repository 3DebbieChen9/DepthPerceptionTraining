using System;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;
using DepthPerceptionSystem;
using InstructionText;

public class CalibrationUIManager : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;

    [SerializeField]
    private CalibrationInstruction instructions;

    [SerializeField]
    public GameObject UICylinder;
    
    [SerializeField]
    public GameObject OVRCameraRig;
    [SerializeField]
    private float canvasHeight;
    // [SerializeField]
    // private float tolerateAngle;
    // [SerializeField]
    // private float tolerateDistanceMin;
    // [SerializeField]
    // private float tolerateDistanceMax;
    [SerializeField]
    private float moveTime;
    [SerializeField]
    private TMP_Text instructionTitle;
    [SerializeField]
    private TMP_Text instructionText;
    [SerializeField]
    private TMP_Text resultTitle;
    [SerializeField]
    private TMP_Text resultText;
    [SerializeField]
    private Image resultPanel;
    [SerializeField]
    private Sprite[] imageSources;
    [SerializeField]
    private Image image;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.instructions = new CalibrationInstruction();
        this.canvasHeight = 1.3f;
        // this.tolerateAngle = 100.0f;
        // this.tolerateDistanceMin = 1.0f;
        // this.tolerateDistanceMax = 3.0f;
        this.moveTime = 1.0f;
        this.OVRCameraRig = this.mainManager.OVRCameraRig;
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch)) {
            this.recenterUICanvas();
        }
    }

    void FixedUpdate() {
        this.recenterUICanvas();
        // if (Mathf.Abs(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y - this.transform.rotation.eulerAngles.y) > this.tolerateAngle) {
        //     this.UICylinder.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        // }

        // if ((Mathf.Abs(Vector2.Distance(new Vector2(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), new Vector2(this.transform.position.x, this.transform.position.z))) > this.tolerateDistanceMax) || 
        //     (Mathf.Abs(Vector2.Distance(new Vector2(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), new Vector2(this.transform.position.x, this.transform.position.z))) < this.tolerateDistanceMin)) {
        //     this.UICylinder.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.canvasHeight, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
        // }
    }

    void recenterUICanvas() {
        this.UICylinder.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        this.UICylinder.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.canvasHeight, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
    }

    public void movableRangeInstruction(CalibrationState state) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.instructionTitle.text = this.instructions.movableRangeInstruction.title[languageIndex];
        // this.instructionText.text = this.instructions.movableRangeInstruction.instruction[languageIndex];
        // this.instructionTitle.text = "Movable Range Calibration";
        this.instructionTitle.text = "校正可移動範圍";
        // this.instructionText.text = "Please put your LEFT-controller on a floor around the movable place and press button 'A' on R-controller.";
        this.instructionText.text = "請將左手控制器放在可移動範圍的角落，並按下右手控制器上的 'A' 按鈕。";
        this.image.sprite = this.imageSources[Convert.ToInt32(state)];
        this.resultPanel.enabled = false;
    }

    public void movableRangeResult(bool isTooShort, float length) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        this.resultPanel.enabled = true;
        this.resultTitle.text = this.instructions.movableRangeInstruction.resultTitle[languageIndex];
        this.resultTitle.text = "可移動範圍結果";
        if (isTooShort) {
            // this.resultText.text = this.instructions.movableRangeInstruction.resultDefault[languageIndex] + length.ToString("F2");
            this.resultText.text = "太短了，使用預設長度 (公尺) = " + length.ToString("F2");
        }
        else {
            // this.resultText.text = this.instructions.movableRangeInstruction.result[languageIndex] + length.ToString("F2");
            this.resultText.text = "可移動範圍邊長 (公尺) = " + length.ToString("F2");
        }
    }

    public void tPoseInstruction(CalibrationState state) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.instructionTitle.text = this.instructions.tPoseInstruction.title[languageIndex];
        this.instructionTitle.text = "校正 T-Pose";
        if (state == CalibrationState.TPose_RHand) {
            // this.instructionText.text = this.instructions.tPoseInstruction.instructionR[languageIndex];
            this.instructionText.text = "將右手向右伸直(T-Pose)，並將頭部轉動看向右手控制器，並按下右手控制器上的 'A' 按鈕。";
        }
        else{
            // this.instructionText.text = this.instructions.tPoseInstruction.instructionL[languageIndex];
            this.instructionText.text = "將左手向左伸直(T-Pose)，並將頭部轉動看向左手控制器，並按下右手控制器上的 'A' 按鈕。";
        }
        this.image.sprite = this.imageSources[Convert.ToInt32(state)];
    }

    public void tPoseResult(CalibrationState state, float length, float height) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.resultTitle.text = this.instructions.tPoseInstruction.resultTitle[languageIndex];
        this.resultTitle.text = "T-Pose 結果";
        if (state == CalibrationState.TPose_RHand) {
            // this.resultText.text = this.instructions.tPoseInstruction.resultLengthR[languageIndex] + length.ToString("F2");
            this.resultText.text = "頭部到右手的距離 (公尺) = " + length.ToString("F2");
        }
        else{
            this.resultText.text = "頭部到手的平均距離 (公尺) = " + length.ToString("F2") + 
                                    "\n" + "身高 (公尺) = " + height.ToString("F2");
        }
    }

    public void armLengthInstruction(CalibrationState state) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.instructionTitle.text = "Straight Forward Pose Calibration";
        this.instructionTitle.text = "向前出直拳\n姿勢校正";
        if (state == CalibrationState.ArmStraight_RHand) {
            // this.instructionText.text = "Please put your RIGHT hand straight to the front, put your L-controller on your right shoulder, and press button 'A' on R-controller.";
            this.instructionText.text = "請將右手向前伸直，將左手控制器放在右手肩膀上，並按下右手控制器上的 'A' 按鈕。";
        }
        else {
            // this.instructionText.text = "Please put your LEFT hand straight to the front, put your R-controller on your left shoulder, and press button 'A' on R-controller.";
            this.instructionText.text = "請將左手向前伸直，將右手控制器放在左手肩膀上，並按下右手控制器上的 'A' 按鈕。";
        }
        
        this.image.sprite = this.imageSources[Convert.ToInt32(state)];
    }
    public void armLengthResult(CalibrationState state, float length, float width) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.resultTitle.text = "Straight Forward Pose Calibration Result";
        this.resultTitle.text = "向前出直拳姿勢\n校正結果";
        if (state == CalibrationState.ArmStraight_RHand) {
            // this.resultText.text = "RIGHT arm length (m) = " + length.ToString("F2");
            this.resultText.text = "右手臂長 (公尺) = " + length.ToString("F2");
        }
        else {
            // this.resultText.text = "Average arm length (m) =  " + length.ToString("F2") + 
            this.resultText.text = "平均臂長 (公尺) =  " + length.ToString("F2") + 
                                    // "\n" + "Average shoulder width (m) = " + width.ToString("F2");
                                    "\n" + "肩寬 (公尺) = " + width.ToString("F2");
        }
    }   

    public void idlePoseInstruction(CalibrationState state) {
        int languageIndex = Convert.ToInt32(this.mainManager.curLanguage);
        // this.instructionTitle.text = "Idle Pose Calibration";
        this.instructionTitle.text = "預備姿勢校正";
        // this.instructionText.text = "Please make yourself in boxing ready idle pose, and press button 'A' on R-controller.";
        this.instructionText.text = "請做出拳擊的預備姿勢，並按下右手控制器上的 'A' 按鈕。";
        this.image.sprite = this.imageSources[Convert.ToInt32(state)];
    }
}
