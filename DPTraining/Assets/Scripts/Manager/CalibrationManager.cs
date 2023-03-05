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
    // 0: not started, 1: R-hand forearm done, 2: R-hand upperarm done, 3: L-hand forearm done, 4: L-hand upperarm done
    
    [SerializeField]
    private GameObject[] armLengthMarkers;

    [SerializeField]
    private float RUpperArmLength = 0.0f;
    [SerializeField]
    private float RForeArmLength = 0.0f;
    [SerializeField]
    private float LUpperArmLength = 0.0f;
    [SerializeField]
    private float LForeArmLength = 0.0f;
    [SerializeField]
    private float RCenterEyeToControllerLength = 0.0f;
    [SerializeField]
    private float LCenterEyeToControllerLength = 0.0f;

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
        foreach (GameObject marker in this.armLengthMarkers) {
            marker.SetActive(false);
        }
    }
    
    private void putDistanceMarker() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            this.distanceMarkers[this.distanceMarkerCount].SetActive(true);
            this.distanceMarkers[this.distanceMarkerCount].transform.position = new Vector3(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.x, 
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y + 0.01f,  
                                                                                            // this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y,
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.z);
            if (this.distanceMarkerCount == this.distanceMarkers.Length-1) {
                this.systemManager.myMovableRangeInfo.avgLengthInVR = this.calculateAvgDistance();
                this.systemManager.myMovableRangeInfo.avgLengthInVR = 4.0f; // DEBUG ONLY
                this.systemManager.consoleTitle.text = "Movable Range Result";
                this.systemManager.consoleText.text = "Average Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString();
                print("[DC]\nAverage Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString());
            }
            this.distanceMarkerCount++;
        }
        
    }

    private float calculateHorizatonalDistance(Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    private float calculateAvgDistance() {
        float squareLengthTotal = 0;
        squareLengthTotal += this.calculateHorizatonalDistance(this.distanceMarkers[0].transform.position, this.distanceMarkers[1].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(this.distanceMarkers[1].transform.position, this.distanceMarkers[2].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(this.distanceMarkers[2].transform.position, this.distanceMarkers[3].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(this.distanceMarkers[3].transform.position, this.distanceMarkers[0].transform.position);
        return squareLengthTotal / 4;
    }

    private void putArmLengthMarker() {
        //0: not started, 1: R-hand forearm done, 2: R-hand upperarm done, 3: L-hand forearm done, 4: L-hand upperarm done
        if (this.armLengthMarkerStatue == 0) { 
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.RForeArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) * this.systemManager.scaleTransferFactor;

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 1;

            this.systemManager.userArmRenderManager.setRightHandStraightAngle();
            // print("[DC]\nR-Angles(F|U|R): (" + this.systemManager.myUserInfo.straightAngle_forward_R.ToString() + "|" + this.systemManager.myUserInfo.straightAngle_up_R.ToString() + "|" + this.systemManager.myUserInfo.straightAngle_right_R.ToString() + ")");
            
            this.systemManager.consoleText.text = "R-ForeArm Length = " + this.RForeArmLength.ToString();
            print("[DC]\nR-ForeArm Length = " + this.RForeArmLength.ToString());
        }
        else if (this.armLengthMarkerStatue == 1) {
            this.armLengthMarkers[0].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.RUpperArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) * this.systemManager.scaleTransferFactor - this.RForeArmLength;

            this.RCenterEyeToControllerLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[0].transform.position) * this.systemManager.scaleTransferFactor;

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 2;

            this.systemManager.consoleText.text = "R-UpperArm Length = " + this.RUpperArmLength.ToString()+ "\nR-CenterEyeToController Length = " + this.RCenterEyeToControllerLength.ToString();
            print("[DC]\nR-UpperArm Length = " + this.RUpperArmLength.ToString() + "\nR-CenterEyeToController Length = " + this.RCenterEyeToControllerLength.ToString());
        }
        else if (this.armLengthMarkerStatue == 2) {
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LForeArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) * this.systemManager.scaleTransferFactor;

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 3;

            this.systemManager.userArmRenderManager.setLeftHandStraightAngle();
            // print("[DC]\nL-Angles(F|U|R): (" + this.systemManager.myUserInfo.straightAngle_forward_L.ToString() + "|" + this.systemManager.myUserInfo.straightAngle_up_L.ToString() + "|" + this.systemManager.myUserInfo.straightAngle_right_L.ToString() + ")");
            
            this.systemManager.consoleText.text = "L-ForeArm Length = " + this.LForeArmLength.ToString();
            // print("[DC]\nL-ForeArm Length = " + this.LForeArmLength.ToString());
        }
        else if (this.armLengthMarkerStatue == 3) {
            this.armLengthMarkers[0].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LUpperArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) * this.systemManager.scaleTransferFactor - this.LForeArmLength;

            this.LCenterEyeToControllerLength = this.calculateHorizatonalDistance(this.armLengthMarkers[2].transform.position, this.armLengthMarkers[0].transform.position) * this.systemManager.scaleTransferFactor;
            // print("[DC]\nL-UpperArm Length = " + this.LUpperArmLength.ToString() + "\nL-CenterEyeToController Length = " + this.LCenterEyeToControllerLength.ToString());

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 4;

            this.systemManager.myUserInfo.avgUpperArmLength = (this.RUpperArmLength + this.LUpperArmLength) / 2.0f;
            this.systemManager.myUserInfo.avgForeArmLength = (this.RForeArmLength + this.LForeArmLength) / 2.0f;
            this.systemManager.myUserInfo.avgCenterEyeToControllerLength = (this.RCenterEyeToControllerLength + this.LCenterEyeToControllerLength) / 2.0f;

            // print("[DC]\nUpperArm Length = " + this.systemManager.myUserInfo.avgUpperArmLength.ToString() + "\nForeArm Length = " + this.systemManager.myUserInfo.avgForeArmLength.ToString() + "\nCenterEyeToController Length = " + this.systemManager.myUserInfo.avgCenterEyeToControllerLength.ToString());

            this.systemManager.consoleText.text = "UpperArm Length = " + this.systemManager.myUserInfo.avgUpperArmLength.ToString() + "\nForeArm Length = " + this.systemManager.myUserInfo.avgForeArmLength.ToString() + "\nCenterEyeToController Length = " + this.systemManager.myUserInfo.avgCenterEyeToControllerLength.ToString();
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
        foreach (GameObject marker in this.armLengthMarkers) {
            marker.SetActive(false);
        }
        this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;
        this.systemManager.consoleTitle.text = "Initialize";
        this.systemManager.consoleText.text = "";
    }
    
    public void calibrationArmLengthInitialize() {
        this.systemManager.curSystemMode = SystemManager.SystemMode.Calibration_ArmLength;
        this.armLengthMarkerStatue = 0;
        foreach (GameObject marker in this.armLengthMarkers) {
            marker.SetActive(false);
        }
        this.systemManager.consoleTitle.text = "Arm Length Initialize";
        this.systemManager.consoleText.text = "";
    }

    public void calibrateMovableSize() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            // TODO: Movable Size UI Reference
            this.putDistanceMarker();
        }
        else {
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_ArmLength);
            this.systemManager.consoleTitle.text = "Ready to Calibrate Arm Length";
            this.setSceneOrigin();
            if (this.useRealWorldReference) {
                this.systemManager.scaleTransferFactor = this.systemManager.myMovableRangeInfo.avgLengthInVR / this.systemManager.myMovableRangeInfo.referenceRanageLength;
            }
            else {
                this.systemManager.scaleTransferFactor = 1.0f;
            }
        }
    }

    public void calibrateArmLength() {
        if (this.armLengthMarkerStatue == 4) {
            this.systemManager.consoleTitle.text = "Ready to Calibrate Idle Pose";
            this.clearCalibrationMarkers();
            this.systemManager.userArmRenderManager.resizeUserScale();
            // this.systemManager.userArmRenderManager.resizeUserArm();
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_IdlePose);
        }
        else {
            // TODO: Arm Length UI Reference
            this.putArmLengthMarker();
        }
    }

    public void calibrateIdlePose() {
        // TODO: Idle Pose UI Reference
        this.systemManager.userArmRenderManager.userAvatarMeshSetActive(true);

        float headToLeftHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float headToRightHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float radius = Mathf.Max(headToLeftHand, headToRightHand) + 0.20f;

        this.systemManager.myUserInfo.idlePoseRadius = radius * this.systemManager.scaleTransferFactor;
        
        float avgDistanceBetweenEyesAndTopHead = 0.11f; // 11 cm
        this.systemManager.myUserInfo.userHeight = (this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.y + avgDistanceBetweenEyesAndTopHead) * this.systemManager.scaleTransferFactor;

        // print("[DC]\nIdlePose Radius = " + this.systemManager.myUserInfo.idlePoseRadius.ToString() + "\nIdlePose Height = " + this.systemManager.myUserInfo.userHeight.ToString());

        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().radius = this.systemManager.myUserInfo.idlePoseRadius;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().radius = this.systemManager.mySettingInfo.tolerateRaduisBetweenOriginAndUser;
        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userInitialPosition.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        float userShoulderWidth_half = this.systemManager.myUserInfo.avgCenterEyeToControllerLength - this.systemManager.myUserInfo.avgUpperArmLength - this.systemManager.myUserInfo.avgForeArmLength;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().radius = userShoulderWidth_half;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().height = this.systemManager.myUserInfo.userHeight;
        this.systemManager.userCenterPosition.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserInfo.userHeight / 2.0f, 0.0f);

        this.systemManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
        this.systemManager.changeSystemMode(SystemManager.SystemMode.Mode_Selection);
        this.systemManager.changeScene("ModeSelection");
        this.systemManager.consoleTitle.text = "Ready to Select Mode";
        this.systemManager.consoleText.text = "";
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
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    + this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.leftUpperCorner = this.systemManager.sceneOrigin_poisition
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.rightUpperCorner = this.systemManager.sceneOrigin_poisition
                                    + this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
    }

}
