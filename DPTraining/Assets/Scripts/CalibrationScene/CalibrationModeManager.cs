using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class CalibrationModeManager : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;
    [SerializeField]
    private CalibrationUIManager calibrationUIManager;
    [SerializeField]
    private CalibrationState curState;

    private int markerPutCount = 0;

    private float armLength = 0.0f;
    private float centerEyeToControllerLength = 0.0f;
    private float centerEyeToFloor = 0.0f;

    [SerializeField]
    public GameObject[] movableRangeMarkers;
    [SerializeField]
    public GameObject heightModifyKeyPad;
    [SerializeField]
    public GameObject heightModifyButton;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.calibrationUIManager == null) {
            this.calibrationUIManager = this.gameObject.GetComponent<CalibrationUIManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.calibrationSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            switch (this.curState) {
                case CalibrationState.MovableRange:
                    this.putRangeMarker();
                    break;
                case CalibrationState.TPose_RHand:
                case CalibrationState.TPose_LHand:
                    this.getTPoseData();
                    break;
                case CalibrationState.ArmStraight_RHand:
                case CalibrationState.ArmStraight_LHand:
                    this.getArmStraightData();
                    break;
                case CalibrationState.IdlePose:
                    this.calibrateIdlePose();
                    break;

                default:
                    break;
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            switch (this.curState) {
                case CalibrationState.MovableRange:
                    this.calibrationSceneInitialized();
                    break;
                case CalibrationState.TPose_RHand:
                case CalibrationState.TPose_LHand:
                case CalibrationState.ArmStraight_RHand:
                case CalibrationState.ArmStraight_LHand:
                case CalibrationState.IdlePose:
                    this.armLengthInitialized();
                    break;
                default:
                    break;
            }
        }
    }

    public void calibrationSceneInitialized() {
        this.mainManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = true;
        this.mainManager.curSystemMode = SystemMode.CalibrationMode;
        this.mainManager.OVRControllerLeft.SetActive(true);
        this.mainManager.OVRControllerRight.SetActive(true);
        this.mainManager.OVRBoxingLeft.SetActive(false);
        this.mainManager.OVRBoxingRight.SetActive(false);

        this.curState = CalibrationState.MovableRange;
        this.markerPutCount = 0;
        this.armLength = 0.0f;
        this.centerEyeToControllerLength = 0.0f;
        this.centerEyeToFloor = 0.0f;
        this.clearMarkers();
        this.mainManager.enableUserArmMeshRenderers(false);
        this.heightModifyKeyPad.SetActive(false);
        this.heightModifyButton.SetActive(false);
        // [----] Call Calibration UI Function
        // Movable Range Instruction
        this.calibrationUIManager.movableRangeInstruction(this.curState);
    }

    public void armLengthInitialized() {
        this.curState = CalibrationState.TPose_RHand;
        this.armLength = 0.0f;
        this.centerEyeToControllerLength = 0.0f;
        this.centerEyeToFloor = 0.0f;
        this.mainManager.enableUserArmMeshRenderers(false);
        // [----] Call Calibration UI Function
        // Movable Range Result
        this.calibrationUIManager.movableRangeResult(false, this.mainManager.myUserInfo.movableRange.length);
        // T-Pose Instruction - Right
        this.calibrationUIManager.tPoseInstruction(this.curState);
    }

    void calibrateIdlePose() {
        this.getIdlePoseData();
        this.mainManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
        // [----] Save User Info to JSON
        this.mainManager.saveToJSON_user(this.mainManager.myUserInfo);
        this.mainManager.curSystemMode = SystemMode.SelectionMode;
        this.mainManager.changeScene("SelectionScene");
    }

    void putRangeMarker() {
        if (this.markerPutCount < this.movableRangeMarkers.Length) {
            this.movableRangeMarkers[this.markerPutCount].transform.position = new Vector3 (
                this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.x,
                this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y,
                this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.z
            );
            this.movableRangeMarkers[this.markerPutCount].SetActive(true);

            this.markerPutCount++;

            if (this.markerPutCount == this.movableRangeMarkers.Length) {
                this.setSceneOrigin();
                this.getMovableRangeLength();
                this.curState = CalibrationState.TPose_RHand;
                // [----] Call Calibration UI Function
                // T-Pose Instruction - Right
                this.calibrationUIManager.tPoseInstruction(this.curState);
            }
        }
    }

    void getTPoseData() {
        Vector3 centerEyePos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
        Vector3 rightControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
        Vector3 leftControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
        switch (this.curState) {
            case CalibrationState.TPose_RHand:
                this.centerEyeToControllerLength += this.calculateHorizatonalDistance(centerEyePos, rightControllerPos);
                this.centerEyeToFloor += centerEyePos.y;

                // [----] Call Calibration UI Function
                // T-Pose Result - Right 
                this.calibrationUIManager.tPoseResult(this.curState, this.centerEyeToControllerLength, this.centerEyeToFloor);
                this.curState = CalibrationState.TPose_LHand;
                // T-Pose Instruction - Left
                this.calibrationUIManager.tPoseInstruction(this.curState);
                break;
            case CalibrationState.TPose_LHand:
                this.centerEyeToControllerLength += this.calculateHorizatonalDistance(centerEyePos, leftControllerPos);
                this.centerEyeToFloor += centerEyePos.y;

                this.mainManager.myUserInfo.userBodySize.centerEyeToControllerLength = this.centerEyeToControllerLength / 2.0f;
                this.mainManager.myUserInfo.userBodySize.height = this.centerEyeToFloor / 2.0f + this.mainManager.mySettingInfo.userAvgDistanceBetweenEyesAndTopHead;
                
                this.mainManager.resizeUserIK();

                // [----] Call Calibration UI Function
                // T-Pose Result - Left & Height
                this.calibrationUIManager.tPoseResult(this.curState, this.mainManager.myUserInfo.userBodySize.centerEyeToControllerLength, this.mainManager.myUserInfo.userBodySize.height);
                this.curState = CalibrationState.ArmStraight_RHand;
                // Arm Straight Instruction - Right
                this.calibrationUIManager.armLengthInstruction(this.curState);
                this.heightModifyButton.SetActive(true);
                this.mainManager.enableUserArmMeshRenderers(true);
                this.mainManager.OVRControllerLeft.SetActive(false);
                this.mainManager.OVRControllerRight.SetActive(false);
                this.mainManager.OVRBoxingLeft.SetActive(true);
                this.mainManager.OVRBoxingRight.SetActive(true);
                break;
            default:
                Debug.LogError("Error: Something Wrong while getting T-Pose Data");
                break;
        }
    }

    void getArmStraightData() {

        Vector3 rightControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
        Vector3 leftControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
        switch (this.curState) {
            case CalibrationState.ArmStraight_RHand:
                this.heightModifyButton.SetActive(false);
                this.armLength += Vector3.Distance(rightControllerPos, leftControllerPos);
                this.mainManager.getHandStraightDefaultAngle(Hand.Right);

                // [----] Call Calibration UI Function
                // Arm Straight Result - Right (Length)
                this.calibrationUIManager.armLengthResult(this.curState, this.armLength, 0.0f);
                this.curState = CalibrationState.ArmStraight_LHand;
                // Arm Straight Instruction - Left
                this.calibrationUIManager.armLengthInstruction(this.curState);
                break;
            case CalibrationState.ArmStraight_LHand:
                this.armLength += Vector3.Distance(rightControllerPos, leftControllerPos);
                this.mainManager.getHandStraightDefaultAngle(Hand.Left);

                this.mainManager.myUserInfo.userBodySize.armLength = this.armLength / 2.0f;
                this.mainManager.myUserInfo.userBodySize.shoulderWidth = (this.mainManager.myUserInfo.userBodySize.centerEyeToControllerLength - this.mainManager.myUserInfo.userBodySize.armLength) * 2.0f;
                
                // [----] Call Calibration UI Function
                // Arm Straight Result - Left (Length)
                this.calibrationUIManager.armLengthResult(this.curState, this.mainManager.myUserInfo.userBodySize.armLength, this.mainManager.myUserInfo.userBodySize.shoulderWidth);
                this.curState = CalibrationState.IdlePose;
                // Idle Pose Instruction
                // this.mainManager.enableUserArmMeshRenderers(true);
                this.calibrationUIManager.idlePoseInstruction(this.curState);
                break;
            default:
                break;
        }
    }

    void getIdlePoseData() {
        Vector3 centerEyePos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
        Vector3 rightControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
        Vector3 leftControllerPos = this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
        float headToLeftHand = this.calculateHorizatonalDistance(centerEyePos, leftControllerPos);
        float headToRightHand = this.calculateHorizatonalDistance(centerEyePos, rightControllerPos);
        float radius = Mathf.Max(headToLeftHand, headToRightHand);

        this.mainManager.myUserInfo.userBodySize.idlePoseRadius = radius + 0.20f;
    }

    void clearMarkers() {
        this.mainManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;
        foreach (GameObject marker in this.movableRangeMarkers) {
            marker.SetActive(false);
        }
    }

    float calculateHorizatonalDistance (Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    void getMovableRangeLength() {
        List<float> lengthList = new List<float>();
        lengthList.Add(this.calculateHorizatonalDistance(this.movableRangeMarkers[0].transform.position, this.movableRangeMarkers[1].transform.position));
        lengthList.Add(this.calculateHorizatonalDistance(this.movableRangeMarkers[1].transform.position, this.movableRangeMarkers[2].transform.position));
        lengthList.Add(this.calculateHorizatonalDistance(this.movableRangeMarkers[2].transform.position, this.movableRangeMarkers[3].transform.position));
        lengthList.Add(this.calculateHorizatonalDistance(this.movableRangeMarkers[3].transform.position, this.movableRangeMarkers[0].transform.position));

        lengthList.Sort(); // Sort in ascending order
        float detectedResult = (lengthList[2] + lengthList[3]) / 2.0f;
        this.mainManager.myUserInfo.movableRange.detectedLengthInVR = detectedResult;

        if (detectedResult < this.mainManager.myUserInfo.movableRange.minRequiredLengthInVR) {
            this.mainManager.myUserInfo.movableRange.length = this.mainManager.myUserInfo.movableRange.minRequiredLengthInVR;
            // [----] Call Calibration UI Function
            // Movable Range Result - Too Short
            this.calibrationUIManager.movableRangeResult(true, this.mainManager.myUserInfo.movableRange.length);
        }
        else {
            this.mainManager.myUserInfo.movableRange.length = detectedResult;
            // [----] Call Calibration UI Function
            // Movable Range Result - Success
            this.calibrationUIManager.movableRangeResult(false, this.mainManager.myUserInfo.movableRange.length);
        }
    }

    public void setSceneOrigin() {
        Vector3 centroid = new Vector3(0.0f, 0.0f, 0.0f);
        foreach (GameObject marker in this.movableRangeMarkers) {
            centroid += marker.transform.position;
        }
        centroid /= this.movableRangeMarkers.Length;

        Vector3 lookAtPoint = new Vector3(0.0f, 0.0f, 0.0f);
        lookAtPoint += this.movableRangeMarkers[0].transform.position;
        lookAtPoint += this.movableRangeMarkers[1].transform.position;
        lookAtPoint /= 2.0f;

        this.mainManager.sceneOrigin.transform.localScale = new Vector3 (
            this.mainManager.mySettingInfo.evaluationThreshold.radiusBetweenOriginAndUser * 2.0f,
            0.02f,
            this.mainManager.mySettingInfo.evaluationThreshold.radiusBetweenOriginAndUser * 2.0f
        );
        this.mainManager.sceneOrigin.transform.position = centroid;
        this.mainManager.sceneOriginPosition = centroid;
        this.mainManager.sceneOrigin.transform.LookAt(lookAtPoint);
        this.mainManager.sceneOriginRotation = this.mainManager.sceneOrigin.transform.rotation;

        this.mainManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = true;
    }

    public void modifyHeightBtnClick() {
        this.heightModifyKeyPad.GetComponent<KeypadInput>().inputText.text = this.mainManager.myUserInfo.userBodySize.height.ToString("F2");
        this.heightModifyKeyPad.SetActive(true);
    }

    public void saveHeightBtnClick() {
        try {
            this.mainManager.myUserInfo.userBodySize.height = float.Parse(this.heightModifyKeyPad.GetComponent<KeypadInput>().inputText.text);
            this.heightModifyKeyPad.SetActive(false);
            this.mainManager.resizeUserIK();
            this.calibrationUIManager.tPoseResult(this.curState, this.mainManager.myUserInfo.userBodySize.centerEyeToControllerLength, this.mainManager.myUserInfo.userBodySize.height);
        } catch (System.Exception e) {
            this.heightModifyKeyPad.GetComponent<KeypadInput>().inputText.text = this.mainManager.myUserInfo.userBodySize.height.ToString("F2");
            Debug.Log(e);
        }
    }
}
