using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationManager : MonoBehaviour
{
    [SerializeField] 
    public GameObject _OVRCameraRig;
    [SerializeField]
    public SystemManager _systemManager;

    [SerializeField]
    private TextMesh _consoleText;
    [SerializeField]
    private TextMesh _consoleTitle;
    
    [SerializeField]
    private int _distanceMarkerCount = 0;
    [SerializeField]
    public GameObject[] _distanceMarkers;
    [SerializeField]
    public GameObject _sceneOrigin;

    [SerializeField]
    private int _armLengthMarkerStatue = 0; // 0: not started, 1: R-hand done, 2: L-hand done
    [SerializeField]
    private GameObject[] _armLengthMarkers;
    
    // Start is called before the first frame update
    void Start()
    {
        this.initialize();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            // if (_systemManager.cur_systemMode == SystemManager.SystemMode.Calibration_Rotation) {
            //     this._sceneOrigin.transform.rotation = _OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation;
            //     _consoleTitle.text = "Calibration: Rotation";
            //     this.changeSystemMode(SystemManager.SystemMode.Calibration_Size);
            // }
            if (_systemManager.cur_systemMode == SystemManager.SystemMode.Calibration_Size) {
                _consoleTitle.text = "Calibration: Distance";
                if (_distanceMarkerCount < _distanceMarkers.Length) {
                    this.putDistanceMarker();
                }
                else {
                    this.changeSystemMode(SystemManager.SystemMode.Calibration_ArmLength);
                    this.setSceneOrigin();
                    _systemManager._scaleTransferFactor = _systemManager.avgDistance / _systemManager._referenceDistance;
                    _consoleTitle.text = "Calibration: Arm Length";
                    _consoleText.text = "-";
                }
                
            }
            else if (_systemManager.cur_systemMode == SystemManager.SystemMode.Calibration_ArmLength) {
                _consoleTitle.text = "Calibration: Arm Length";
                if (_armLengthMarkerStatue == 2) {
                    this.changeSystemMode(SystemManager.SystemMode.Testing);
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
        _sceneOrigin.SetActive(false);
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
        // _sceneOrigin.SetActive(false);
    }
    
    private void putDistanceMarker() {
        if (_distanceMarkerCount < _distanceMarkers.Length) {
            _distanceMarkers[_distanceMarkerCount].SetActive(true);
            _distanceMarkers[_distanceMarkerCount].transform.position = new Vector3(_OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.x, 
                                                                                    _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y, 
                                                                                    _OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position.z);
            if (_distanceMarkerCount == _distanceMarkers.Length-1) {
                _systemManager.avgDistance = this.calculateAvgDistance();
                this._consoleText.text = "Average Distance = " + _systemManager.avgDistance.ToString();
                print("Average Distance = " + _systemManager.avgDistance.ToString());
            }
            _distanceMarkerCount++;
        }
        
    }

    private float calculateHorizatonalDistance(Vector3 p1,  Vector3 p2) {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    private float calculateAvgDistance() {
        float squareLengthTotal = 0;
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[0].transform.position, _distanceMarkers[1].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[1].transform.position, _distanceMarkers[2].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[2].transform.position, _distanceMarkers[3].transform.position);
        squareLengthTotal += this.calculateHorizatonalDistance(_distanceMarkers[3].transform.position, _distanceMarkers[0].transform.position);
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

    private void changeSystemMode(SystemManager.SystemMode curMode) {
        _systemManager.cur_systemMode = curMode;
    }
    
    private void setSceneOrigin() {
        Vector3 centroid = new Vector3(0, 0, 0);
        foreach (GameObject marker in _distanceMarkers) {
            centroid += marker.transform.position;
        }
        centroid /= (_distanceMarkers.Length);
        
        Vector3 lookTarget = new Vector3(0, 0, 0);
        lookTarget += _distanceMarkers[0].transform.position;
        lookTarget += _distanceMarkers[1].transform.position;
        lookTarget /= 2;

        _sceneOrigin.transform.position = centroid; //new Vector3(centroid.x, _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position.y, centroid.z);
        _sceneOrigin.transform.LookAt(lookTarget);
        _sceneOrigin.SetActive(true);
    }
    
}
