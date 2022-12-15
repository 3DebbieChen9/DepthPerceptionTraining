using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    
    [SerializeField]
    private int distanceMarkerCount = 0;
    [SerializeField]
    public GameObject[] distanceMarkers;

    [SerializeField]
    private int armLengthMarkerStatue = 0; // 0: not started, 1: R-hand done, 2: L-hand done
    [SerializeField]
    private GameObject[] armLengthMarkers;
    
    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void clearCalibrationMarkers() {
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
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y, 
                                                                                            this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.z);
            if (this.distanceMarkerCount == this.distanceMarkers.Length-1) {
                this.systemManager.avgDistance = this.calculateAvgDistance();
                this.systemManager.consoleText.text = "Average Distance = " + this.systemManager.avgDistance.ToString();
                print("Average Distance = " + this.systemManager.avgDistance.ToString());
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
        if (this.armLengthMarkerStatue == 0) { // 0: not started, 1: R-hand done, 2: L-hand done
            this.armLengthMarkers[0].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            this.armLengthMarkers[1].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            this.systemManager.avgArmLength = this.calculateHorizatonalDistance(this.armLengthMarkers[0].transform.position, this.armLengthMarkers[1].transform.position);
            this.armLengthMarkers[0].SetActive(true);
            this.armLengthMarkers[1].SetActive(true);
            this.armLengthMarkerStatue = 1;

            this.systemManager.consoleText.text = "Right Arm Length = " + this.systemManager.avgArmLength.ToString();
        }
        else if (this.armLengthMarkerStatue == 1) { // 0: not started, 1: R-hand done, 2: L-hand done
            this.armLengthMarkers[1].SetActive(false);

            this.armLengthMarkers[0].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            this.armLengthMarkers[2].transform.position = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            this.systemManager.avgArmLength += this.calculateHorizatonalDistance(this.armLengthMarkers[0].transform.position, this.armLengthMarkers[2].transform.position);
            this.systemManager.avgArmLength /= 2;

            this.armLengthMarkers[0].SetActive(true);
            this.armLengthMarkers[2].SetActive(true);
            this.armLengthMarkerStatue = 2;

            this.systemManager.consoleText.text = "Average Arm Length = " + this.systemManager.avgArmLength.ToString();
            print("Average Arm Length = " + this.systemManager.avgArmLength.ToString());
        }      
    }

    public void CalibrationInitialize() {
        this.systemManager.cur_systemMode = SystemManager.SystemMode.Calibration_Size;
        this.distanceMarkerCount = 0;
        foreach (GameObject marker in this.distanceMarkers) {
            marker.SetActive(false);
        }
        armLengthMarkerStatue = 0;
        foreach (GameObject marker in this.armLengthMarkers) {
            marker.SetActive(false);
        }
        this.systemManager.sceneOrigin.SetActive(false);
        this.systemManager.consoleTitle.text = "Initialize";
        this.systemManager.consoleText.text = "-";
    }
    
    public void calibrateSize() {
        if (this.distanceMarkerCount < this.distanceMarkers.Length) {
            this.putDistanceMarker();
        }
        else {
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Calibration_ArmLength);
            this.setSceneOrigin();
            this.systemManager.scaleTransferFactor = this.systemManager.avgDistance / systemManager.referenceDistance;
            this.systemManager.consoleTitle.text = "Calibration: Arm Length";
            this.systemManager.consoleText.text = "-";
        }
    }

    public void calibrateArmLength() {
        if (this.armLengthMarkerStatue == 2) {
            this.systemManager.changeSystemMode(SystemManager.SystemMode.Training);
            this.systemManager.consoleTitle.text = "Training";
            this.systemManager.consoleText.text = "-";
            this.systemManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
            // this.systemManager.sceneBuilding.BuildTheScene();
            this.clearCalibrationMarkers();
            // this.systemManager.switchControllerToGloves();
            this.systemManager.changeScene("Training");
        }
        else {
            this.putArmLengthMarker();
        }
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
        this.systemManager.sceneOrigin.SetActive(true);
        this.calculateSceneVectors();
    }
    
    public void calculateSceneVectors() {
        Vector3 horizontalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[1].transform.position) / 2;
        Vector3 verticalMidPoint = (this.distanceMarkers[0].transform.position + this.distanceMarkers[3].transform.position) / 2;
        this.systemManager.sceneHorizontalDirection = (this.systemManager.sceneOrigin.transform.position - verticalMidPoint).normalized;
        this.systemManager.sceneVerticalDirection = (this.systemManager.sceneOrigin.transform.position - horizontalMidPoint).normalized;

        this.systemManager.sceneLeftBottomCorner = this.systemManager.sceneOrigin.transform.position 
                                    - this.systemManager.sceneHorizontalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor
                                    + this.systemManager.sceneVerticalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.sceneLeftUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    - this.systemManager.sceneHorizontalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.sceneVerticalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.sceneRightUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    + this.systemManager.sceneHorizontalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.sceneVerticalDirection * (this.systemManager.referenceDistance / 2.0f) * this.systemManager.scaleTransferFactor;
    }
}
