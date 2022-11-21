using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationManager : MonoBehaviour
{
    [SerializeField]
    public double _referenceDistance = 0.20; // in meters
    [SerializeField] 
    private GameObject _OVRCameraRig;
    [SerializeField]
    private TextMesh _consoleText;
    [SerializeField]
    private TextMesh _consoleTitle;
    [SerializeField]
    private int _distanceMarkerCount = 0;
    [SerializeField]
    private GameObject[] _distanceMarkers;
    [SerializeField]
    private int _armLengthMarkerStatue = 0; // 0: not started, 1: R-hand done, 2: L-hand done
    [SerializeField]
    private GameObject[] _armLengthMarkers;
    [SerializeField]
    private SystemManager _systemManager;

    // Start is called before the first frame update
    void Start()
    {
        this.initialize();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (_systemManager.cur_systemMode == SystemManager.SystemMode.Calibration_Size) {
                _consoleTitle.text = "Calibration: Distance";
                if (_distanceMarkerCount < 5) {
                    this.putDistanceMarker();
                }
                else {
                    _systemManager.cur_systemMode = SystemManager.SystemMode.Calibration_ArmLength;
                    _consoleTitle.text = "Calibration: Arm Length";
                    _consoleText.text = "-";
                }
                
            }
            else if (_systemManager.cur_systemMode == SystemManager.SystemMode.Calibration_ArmLength) {
                _consoleTitle.text = "Calibration: Arm Length";
                if (_armLengthMarkerStatue == 2) {
                    _systemManager.cur_systemMode = SystemManager.SystemMode.Testing;
                    _consoleTitle.text = "Testing";
                    _consoleText.text = "-";
                    _OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = false;
                    this.clearCalibrationMarkers();
                }
                else {
                    this.putArmLengthMarker();
                }
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            this.passthroughSwitch();
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.LTouch)) {
            this.initialize();
        } 
    }

    private void initialize() {
        _systemManager.cur_systemMode = SystemManager.SystemMode.Calibration_Size;
        _distanceMarkerCount = 0;
        foreach (GameObject marker in _distanceMarkers) {
            marker.SetActive(false);
        }
        _armLengthMarkerStatue = 0;
        foreach (GameObject marker in _armLengthMarkers) {
            marker.SetActive(false);
        }
        _consoleTitle.text = "Initialize";
        _consoleText.text = "-";
    }

    private void clearCalibrationMarkers() {
        foreach (GameObject marker in _distanceMarkers) {
            marker.SetActive(false);
        }
        _armLengthMarkerStatue = 0;
        foreach (GameObject marker in _armLengthMarkers) {
            marker.SetActive(false);
        }
    }
    
    private void putDistanceMarker() {
        if (_distanceMarkerCount < 5) {
            _distanceMarkers[_distanceMarkerCount].SetActive(true);
            _distanceMarkers[_distanceMarkerCount].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            if (_distanceMarkerCount == 4) {
                _systemManager.avgDistnace = this.calculateAvgDistance();
                this._consoleText.text = "Average Distance = " + _systemManager.avgDistnace.ToString();
                print("Average Distance = " + _systemManager.avgDistnace.ToString());
            }
            _distanceMarkerCount++;
        }
        
    }

    private float calculateHorizatonalDistance(Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    private float calculateAvgDistance() {
        float squareLengthTotal = 0;
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[1].transform.position, _distanceMarkers[2].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[2].transform.position, _distanceMarkers[3].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[3].transform.position, _distanceMarkers[4].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[4].transform.position, _distanceMarkers[1].transform.position);
        return squareLengthTotal / 4;
    }

    private void passthroughSwitch() {
        _OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = !_OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled;
    }

    private void putArmLengthMarker() {
        if (_armLengthMarkerStatue == 0) { // 0: not started, 1: R-hand done, 2: L-hand done
            _armLengthMarkers[0].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            _armLengthMarkers[1].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().rightControllerAnchor.position;
            _systemManager.avgArmLength = this.calculateHorizatonalDistance(_armLengthMarkers[0].transform.position, _armLengthMarkers[1].transform.position);
            _armLengthMarkers[0].SetActive(true);
            _armLengthMarkers[1].SetActive(true);
            _armLengthMarkerStatue = 1;

            this._consoleText.text = "Right Arm Length" + _systemManager.avgArmLength.ToString();
        }
        else if (_armLengthMarkerStatue == 1) { // 0: not started, 1: R-hand done, 2: L-hand done
            _armLengthMarkers[1].SetActive(false);

            _armLengthMarkers[0].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
            _armLengthMarkers[2].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            _systemManager.avgArmLength += this.calculateHorizatonalDistance(_armLengthMarkers[0].transform.position, _armLengthMarkers[2].transform.position);
            _systemManager.avgArmLength /= 2;

            _armLengthMarkers[0].SetActive(true);
            _armLengthMarkers[2].SetActive(true);
            _armLengthMarkerStatue = 2;

            this._consoleText.text = "Average Arm Length" + _systemManager.avgArmLength.ToString();
            print("Average Arm Length = " + _systemManager.avgArmLength.ToString());
        }      
    }
    
}
