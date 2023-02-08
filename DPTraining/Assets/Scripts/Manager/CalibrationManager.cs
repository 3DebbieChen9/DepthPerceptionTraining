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
                this.systemManager.consoleText.text = "Average Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString();
                print("Average Distance = " + this.systemManager.myMovableRangeInfo.avgLengthInVR.ToString());
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
            // this.armLengthMarkers[0].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            // this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            // this.systemManager.avgArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[0].transform.position, this.armLengthMarkers[1].transform.position);
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.RForeArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position);

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 1;

            this.systemManager.consoleText.text = "R-ForeArm Length = " + this.RForeArmLength.ToString();
        }
        else if (this.armLengthMarkerStatue == 1) {
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.RUpperArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) - this.RForeArmLength;

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 2;

            this.systemManager.consoleText.text = "R-UpperArm Length = " + this.RUpperArmLength.ToString();
        }
        else if (this.armLengthMarkerStatue == 2) {
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LForeArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position);

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 3;

            this.systemManager.consoleText.text = "L-ForeArm Length = " + this.LForeArmLength.ToString();
        }
        else if (this.armLengthMarkerStatue == 3) {
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.LUpperArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[1].transform.position, this.armLengthMarkers[2].transform.position) - this.LForeArmLength;

            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 4;

            this.systemManager.myUserSizeInfo.avgUpperArmLength = (this.RUpperArmLength + this.LUpperArmLength) / 2;
            this.systemManager.myUserSizeInfo.avgUpperArmLength = (this.RForeArmLength + this.LForeArmLength) / 2;

            this.systemManager.consoleText.text = "UpperArm Length = " + this.systemManager.myUserSizeInfo.avgUpperArmLength.ToString() + "\nForeArm Length = " + this.systemManager.myUserSizeInfo.avgForeArmLength.ToString();

        }
    }

    public void CalibrationInitialize() {
        this.systemManager.curSystemMode = SystemManager.SystemMode.Calibration_MovableSize;
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
        this.systemManager.consoleText.text = "-";
    }
    
    public void calibrationArmLengthInitialize() {
        this.systemManager.curSystemMode = SystemManager.SystemMode.Calibration_ArmLength;
        this.armLengthMarkerStatue = 0;
        foreach (GameObject marker in this.armLengthMarkers) {
            marker.SetActive(false);
        }
    }

    public void calibrateMovableSize() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            // TODO: Movable Size UI Reference
            this.putDistanceMarker();
        }
        else {
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_ArmLength);
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
            this.clearCalibrationMarkers();
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_IdlePose);
        }
        else {
            // TODO: Arm Length UI Reference
            this.putArmLengthMarker();
        }
    }

    public void calibrateIdlePose() {
        // TODO: Idle Pose UI Reference
        float headToLeftHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float headToRightHand = this.calculateHorizatonalDistance(this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position, this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position);
        float radius = Mathf.Max(headToLeftHand, headToRightHand);

        this.systemManager.myUserSizeInfo.idlePoseRadius = radius * this.systemManager.scaleTransferFactor;
        float avgDistanceBetweenEyesAndTopHead = 0.11f; // 11 cm
        this.systemManager.myUserSizeInfo.idlePoseHeight = (this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.y + avgDistanceBetweenEyesAndTopHead) * this.systemManager.scaleTransferFactor;

        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().radius = this.systemManager.myUserSizeInfo.idlePoseRadius;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().height = this.systemManager.myUserSizeInfo.idlePoseHeight;
        this.systemManager.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.systemManager.myUserSizeInfo.idlePoseHeight / 2.0f, 0.0f);

        this.systemManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
        this.systemManager.changeSystemMode(SystemManager.SystemMode.Mode_Selection);
        this.systemManager.changeScene("ModeSelection");
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
        this.calculateSceneVectors();
    }
    
    public void calculateSceneVectors() {
        Vector3 horizontalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[1].transform.position) / 2;
        Vector3 verticalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[3].transform.position) / 2;
        this.systemManager.myMovableRangeInfo.horizontalDirection = (this.systemManager.sceneOrigin.transform.position - verticalMidPoint).normalized;
        this.systemManager.myMovableRangeInfo.verticalDirection = (this.systemManager.sceneOrigin.transform.position - horizontalMidPoint).normalized;

        this.systemManager.myMovableRangeInfo.leftBottomCorner = this.systemManager.sceneOrigin.transform.position 
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    + this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.leftUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.rightUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    + this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
    }

}
