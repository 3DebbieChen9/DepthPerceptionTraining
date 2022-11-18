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
    private TextMesh _conseolText;
    [SerializeField]
    private int _markerCount = 0;
    [SerializeField]
    private GameObject[] _markers;


    // Start is called before the first frame update
    void Start()
    {
        this.initialize();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (_markerCount < 5) {
                this.putMarker();
                if (_markerCount == 4) {
                    this._conseolText.text = this.calculateSquareLength().ToString();
                    print(this.calculateSquareLength().ToString());
                }
                _markerCount++;
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.passthroughSwitch();
        }
    }

    private void initialize() {
        _markerCount = 0;
        foreach (GameObject marker in _markers) {
            marker.SetActive(false);
        }
    }
    
    private void putMarker() {
        _markers[_markerCount].SetActive(true);
        _markers[_markerCount].transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
    }

    private float calculateSquareLength() {
        float squareLengthTotal = 0;
        squareLengthTotal += Vector3.Distance(_markers[1].transform.position, _markers[2].transform.position);
        squareLengthTotal += Vector3.Distance(_markers[2].transform.position, _markers[3].transform.position);
        squareLengthTotal += Vector3.Distance(_markers[3].transform.position, _markers[4].transform.position);
        squareLengthTotal += Vector3.Distance(_markers[4].transform.position, _markers[1].transform.position);
        return squareLengthTotal / 4;
    }

    private void passthroughSwitch() {
        _OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = !_OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled;
    }
}
