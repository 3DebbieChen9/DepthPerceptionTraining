using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    
    [SerializeField]
    public bool useRealWorldReference = false;

    [SerializeField]
    private int distanceMarkerCount = 0;
    [SerializeField]
    public GameObject[] distanceMarkers;

    [SerializeField]
    private int armLengthMarkerStatue = 0; 
    // 0: not started, 1: R-hand T-Pose done, 2: L-hand T-Pose done, 3: R-hand Straight done, 4: L-hand Straight done

    [SerializeField]
    private float RArmLength = 0.0f;
    [SerializeField]
    private float LArmLength = 0.0f;
    [SerializeField]
    private float RCenterEyeToControllerLength = 0.0f;
    [SerializeField]
    private float LCenterEyeToControllerLength = 0.0f;
    [SerializeField]
    private float userHeight = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.CalibrationInitialize();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void clearCalibrationMarkers() {
        foreach (GameObject marker in this.distanceMarkers) {
            marker.SetActive(false);
        }
        this.armLengthMarkerStatue = 0;
    }
    
    private void putDistanceMarker() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            this.distanceMarkers[this.distanceMarkerCount].SetActive(true);
            this.distanceMarkers[this.distanceMarkerCount].transform.position = new Vector3(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.x, 
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y + 0.01f,  
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.z);
            if (this.distanceMarkerCount == this.distanceMarkers.Length-1) {
                this.systemManager.myMovableRangeInfo.avgLengthInVR = this.calculateAvgDistance();
                this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_ArmLength);
                // this.systemManager.consoleTitle.text = "Next: Calibrate Arm Length (T-Pose)";

                this.systemManager.uiCalibration.instructionTitle_text.text = "T-Pose Calibration";
                this.systemManager.uiCalibration.instruction_text.text = "Raise your right hand as T-Pose, move your head to look at your right controller, and press button 'A'.";
                this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];
                this.setSceneOrigin();
                // this.systemManager.consoleTitle.text = "Movable Range Result";
                // this.systemManager.consoleText.text = "Average Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString();
                print("[DC]\nAverage Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString());
            }
            this.distanceMarkerCount++;
        }
    }

    private float calculateHorizatonalDistance(Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    private float calculateAvgDistance() {
        List<float> lengethList = new List<float>();
        lengethList.Add(this.calculateHorizatonalDistance(this.distanceMarkers[0].transform.position, this.distanceMarkers[1].transform.position));
        lengethList.Add(this.calculateHorizatonalDistance(this.distanceMarkers[1].transform.position, this.distanceMarkers[2].transform.position));
        lengethList.Add(this.calculateHorizatonalDistance(this.distanceMarkers[2].transform.position, this.distanceMarkers[3].transform.position));
        lengethList.Add(this.calculateHorizatonalDistance(this.distanceMarkers[3].transform.position, this.distanceMarkers[0].transform.position));

        lengethList.Sort(); // Sort in ascending order 
        float result = (lengethList[1] + lengethList[2]) / 2.0f;

        this.systemManager.uiCalibration.resultCanvas.SetActive(true);
        this.systemManager.uiCalibration.resultTitle_text.text = "Movable Range Result";
        
        if (result < 4.0f) {
            print("[DC]Average Distance = " + result.ToString() + " (Too short, use default value 4.0f)");
            this.systemManager.uiCalibration.resultDescription_text.text = "Too short, use default value 4.00 (m)";
            return 4.0f;
        }
        else {
            this.systemManager.uiCalibration.resultDescription_text.text = "Average Distance = " + result.ToString("F2") + " (m)";
            return result;
        }
    }

    private void putArmLengthMarker() {
        // 0: not started, 1: R-hand T-Pose done, 2: L-hand T-Pose done, 3: R-hand Straight done, 4: L-hand Straight done
        if (this.armLengthMarkerStatue == 0) { 
            // Get centerEye to R-controller length, height
            Vector3 centerEyePos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            Vector3 rightControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.RCenterEyeToControllerLength = this.calculateHorizatonalDistance(centerEyePos, rightControllerPos);
            
            this.userHeight += this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.y;
            
            this.armLengthMarkerStatue = 1;
            // this.systemManager.consoleText.text = "R - CenterEyeToControllerLength = " + this.RCenterEyeToControllerLength.ToString();
            this.systemManager.uiCalibration.resultTitle_text.text = "T-Pose Result";
            this.systemManager.uiCalibration.resultDescription_text.text = "Center Eye to R-Controller Length = " + this.RCenterEyeToControllerLength.ToString("F2") + " (m)";

            this.systemManager.uiCalibration.instructionTitle_text.text = "T-Pose Calibration";
            this.systemManager.uiCalibration.instruction_text.text = "Raise your left hand as T-Pose, move your head to look at your left controller, and press button 'A'.";
            this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];

            print("[DC] R - CenterEyeToControllerLength = " + this.RCenterEyeToControllerLength.ToString());
        }
        else if (this.armLengthMarkerStatue == 1) {
            // Get centerEye to L-controller length, height -> Save avgCenterEyeToControllerLength, userHeight
            Vector3 centerEyePos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            Vector3 leftControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LCenterEyeToControllerLength = this.calculateHorizatonalDistance(centerEyePos, leftControllerPos);
            
            this.systemManager.myUserInfo.avgCenterEyeToControllerLength = (this.RCenterEyeToControllerLength + this.LCenterEyeToControllerLength) / 2.0f;

            this.userHeight += this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.y;
            
            float avgDistanceBetweenEyesAndTopHead = 0.11f; // 11 cm
            // print("[DC] CenterEyeToFloor = " + (this.userHeight / 2.0f).ToString());
            this.systemManager.myUserInfo.userHeight = ((this.userHeight / 2.0f) + avgDistanceBetweenEyesAndTopHead);
            this.systemManager.userArmRenderManager.resizeUserScale();

            this.systemManager.userArmRenderManager.userAvatarMeshSetActive(true); // DEBUG-only

            this.armLengthMarkerStatue = 2;

            this.systemManager.uiCalibration.resultTitle_text.text = "T-Pose Result";
            this.systemManager.uiCalibration.resultDescription_text.text =  "Center Eye to Controller Length = " + this.systemManager.myUserInfo.avgCenterEyeToControllerLength.ToString("F2") + " (m)"+
                                                                            "\nUser Height = " + this.systemManager.myUserInfo.userHeight.ToString("F2") + " (m)";

            this.systemManager.uiCalibration.instructionTitle_text.text = "Straight forward Pose";
            this.systemManager.uiCalibration.instruction_text.text = "Please put your right hand straight to the front, put your L-controller on your right shoudler, and press the button 'A'.";
            this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];

            // this.systemManager.consoleTitle.text = "Next: R-Arm Straight to Front";
            // this.systemManager.consoleText.text = "CenterEyeToController Length = " + this.systemManager.myUserInfo.avgCenterEyeToControllerLength.ToString() + "\nUser Height = " + this.systemManager.myUserInfo.userHeight.ToString();
            // print("[DC] CenterEyeToController Length = " + this.systemManager.myUserInfo.avgCenterEyeToControllerLength.ToString() + 
            //             "\nUser Height = " + this.systemManager.myUserInfo.userHeight.ToString() +
            //             "\nCenter Eye To Floor = " + (this.userHeight / 2.0f).ToString());
        }
        else if (this.armLengthMarkerStatue == 2) {
            // Get Right Arm Length, Right Hand Straight Angle
            Vector3 rightControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            Vector3 leftControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.RArmLength = Vector3.Distance(rightControllerPos, leftControllerPos);

            this.systemManager.userArmRenderManager.setRightHandStraightAngle();

            this.armLengthMarkerStatue = 3;
            
            this.systemManager.uiCalibration.resultTitle_text.text = "Straight forward Pose Result";
            this.systemManager.uiCalibration.resultDescription_text.text = "Right Arm Length = " + this.RArmLength.ToString("F2") + " (m)";

            this.systemManager.uiCalibration.instructionTitle_text.text = "Straight forward Pose";
            this.systemManager.uiCalibration.instruction_text.text = "Please put your left hand straight to the front, put your R-controller on your left shoudler, and press the button 'A'.";
            this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];

            // this.systemManager.consoleTitle.text = "Next: L-Arm Straight to Front";
            // this.systemManager.consoleText.text = "R - Arm Length = " + this.RArmLength.ToString();
        }
        else if (this.armLengthMarkerStatue == 3) {
            // Get Left Arm Length, Left Hand Straight Angle -> Save 
            Vector3 rightControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            Vector3 leftControllerPos = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LArmLength = Vector3.Distance(rightControllerPos, leftControllerPos);

            this.systemManager.userArmRenderManager.setLeftHandStraightAngle();

            this.systemManager.myUserInfo.avgArmLength = (this.RArmLength + this.LArmLength) / 2.0f;

            this.armLengthMarkerStatue = 4;

            this.systemManager.uiCalibration.resultTitle_text.text = "Straight forward Pose Result";
            this.systemManager.uiCalibration.resultDescription_text.text = "Average Arm Length = " + this.systemManager.myUserInfo.avgArmLength.ToString("F2") + " (m)";

            this.systemManager.uiCalibration.instructionTitle_text.text = "Idle Pose Calibration";
            this.systemManager.uiCalibration.instruction_text.text = "Please make yourself in boxing ready idle pose, and press the button 'A'.";
            this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];
            // this.systemManager.consoleText.text = "Avg Arm Length = " + this.systemManager.myUserInfo.avgArmLength.ToString();
            // this.systemManager.consoleTitle.text = "Ready to Calibrate Idle Pose";

            this.clearCalibrationMarkers();
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_IdlePose);
        }
    }

    public void CalibrationInitialize() {
        this.systemManager.curSystemMode = SystemManager.SystemMode.Calibration_MovableSize;
        this.systemManager.userArmRenderManager.userAvatarMeshSetActive(false);
        this.distanceMarkerCount = 0;
        foreach (GameObject marker in this.distanceMarkers) {
            marker.SetActive(false);
        }
        armLengthMarkerStatue = 0;
        this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;

        this.systemManager.uiCalibration.calibrationUI.SetActive(true);
        this.systemManager.uiCalibration.resultCanvas.SetActive(false);
        this.systemManager.uiCalibration.instructionTitle_text.text = "Movable Size Calibration";
        this.systemManager.uiCalibration.instruction_text.text = "Please put your left controller on a floor around the movable place and press button 'A'.";
        this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[0];
        // this.systemManager.consoleTitle.text = "Initialize";
        // this.systemManager.consoleText.text = "";
    }
    
    public void calibrationArmLengthInitialize() {
        this.systemManager.curSystemMode = SystemManager.SystemMode.Calibration_ArmLength;
        this.armLengthMarkerStatue = 0;
        // this.systemManager.consoleTitle.text = "Arm Length Initialize";
        // this.systemManager.consoleText.text = "";
        this.systemManager.uiCalibration.resultTitle_text.text = "Movable Range Result";
        this.systemManager.uiCalibration.resultDescription_text.text = "Average Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString("F2") + " (m)";
        this.systemManager.uiCalibration.instructionTitle_text.text = "T-Pose Calibration";
        this.systemManager.uiCalibration.instruction_text.text = "Raise your right hand as T-Pose, move your head to look at your right controller, and press button 'A'.";
        this.systemManager.uiCalibration.instructionImage.sprite = this.systemManager.uiCalibration.instructionImagesSource[armLengthMarkerStatue+1];
    }

    public void calibrateMovableSize() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            this.putDistanceMarker();
        }
    }

    public void calibrateArmLength() {
        if (this.armLengthMarkerStatue < 4) {
            this.putArmLengthMarker();
        }
        else {
            Debug.LogError("Something Wrong when Calibrating Arm Length");
        }
    }

    public void calibrateIdlePose() {
        // TODO: Idle Pose UI Reference
        this.systemManager.userArmRenderManager.userAvatarMeshSetActive(true);

        float headToLeftHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float headToRightHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float radius = Mathf.Max(headToLeftHand, headToRightHand);

        this.systemManager.myUserInfo.idlePoseRadius = radius + 0.20f;

        print("[DC]\nIdlePose Radius = " + this.systemManager.myUserInfo.idlePoseRadius.ToString());

        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().radius = this.systemManager.myUserInfo.idlePoseRadius;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().radius = this.systemManager.mySettingInfo.tolerateRaduisBetweenOriginAndUser;
        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        float userShoulderWidth_half = this.systemManager.myUserInfo.avgCenterEyeToControllerLength - this.systemManager.myUserInfo.avgArmLength;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().radius = userShoulderWidth_half;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        this.systemManager.uiCalibration.calibrationUI.SetActive(false);
        this.systemManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
        this.systemManager.changeSystemMode(SystemManager.SystemMode.Setting);
        this.systemManager.changeScene("Setting");
        // this.systemManager.consoleTitle.text = "Ready to Select Mode";
        // this.systemManager.consoleText.text = "";
    }

    public void setSceneOrigin() {
        Vector3 centroid = new Vector3(0, 0, 0);
        foreach (GameObject marker in this.distanceMarkers) {
            centroid += marker.transform.position;
        }
        centroid /= (this.distanceMarkers.Length);
        
        Vector3 lookTarget = new Vector3(0, 0, 0);
        lookTarget += this.distanceMarkers[0].transform.position;
        lookTarget += this.distanceMarkers[1].transform.position;
        lookTarget /= 2;

        this.systemManager.sceneOrigin.transform.localScale = new Vector3(this.systemManager.mySettingInfo.tolerateRaduisBetweenOriginAndUser, 0.02f, this.systemManager.mySettingInfo.tolerateRaduisBetweenOriginAndUser);
        this.systemManager.sceneOrigin.transform.position = centroid;
        this.systemManager.sceneOrigin.transform.LookAt(lookTarget);
        this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = true;
        
        this.systemManager.sceneOrigin_poisition = centroid;
        this.systemManager.sceneOrigin_rotation = this.systemManager.sceneOrigin.transform.rotation;
        
        this.calculateSceneVectors();
    }
    
    public void calculateSceneVectors() {
        Vector3 horizontalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[1].transform.position) / 2;
        Vector3 verticalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[3].transform.position) / 2;
        this.systemManager.myMovableRangeInfo.horizontalDirection = (this.systemManager.sceneOrigin_poisition - verticalMidPoint).normalized;
        this.systemManager.myMovableRangeInfo.verticalDirection = (this.systemManager.sceneOrigin_poisition - horizontalMidPoint).normalized;

        this.systemManager.myMovableRangeInfo.leftBottomCorner = this.systemManager.sceneOrigin_poisition
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f)
                                    + this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f);
        this.systemManager.myMovableRangeInfo.leftUpperCorner = this.systemManager.sceneOrigin_poisition
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f)
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f);
        this.systemManager.myMovableRangeInfo.rightUpperCorner = this.systemManager.sceneOrigin_poisition
                                    + this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f)
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f);
    }

}
