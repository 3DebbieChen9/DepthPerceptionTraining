using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationEvaluation : MonoBehaviour
{
    [SerializeField]
    public SystemManager _systemManager;
    [SerializeField]
    public CalibrationManager _calibrationManager;
    [SerializeField]
    private GameObject _plane;
    [SerializeField]
    private LineRenderer[] _verticalLines;
    [SerializeField]
    private LineRenderer[] _horizontalLines;

    // Start is called before the first frame update
    void Start()
    {
        _plane.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)){
            if (_systemManager.cur_systemMode == SystemManager.SystemMode.Testing) {
                this.planeResize();
                this.planeMove();
                _plane.SetActive(true);
                this.drawEvaluateLines();
            }
        }
    }

    void planeResize() {
        _plane.transform.localScale = new Vector3(_systemManager._referenceDistance * _systemManager._scaleTransferFactor, _plane.transform.localScale.y, _systemManager._referenceDistance * _systemManager._scaleTransferFactor);
    }

    void planeMove() {
        _plane.transform.position = new Vector3(_calibrationManager._sceneOrigin.transform.position.x,
                                                _calibrationManager._sceneOrigin.transform.position.y - 0.01f,
                                                _calibrationManager._sceneOrigin.transform.position.z);
        _plane.transform.rotation = _calibrationManager._sceneOrigin.transform.rotation;
    }

    private void drawEvaluateLines() {
        /**
             *  * Hmp *  *
             *  *  *  *  *
            Vmp *  O  *  *
             *  *  *  *  *
             *  *  *  *  *

            VerticalDirection = O -> Hmp
            HorizontalDirection = Vmp -> O
        **/
        Vector3 horizontalMidPoint = (_calibrationManager._distanceMarkers[0].transform.position + _calibrationManager._distanceMarkers[1].transform.position) / 2;
        Vector3 verticalMidPoint = (_calibrationManager._distanceMarkers[0].transform.position + _calibrationManager._distanceMarkers[3].transform.position) / 2;
        Vector3 horizontalDirection = (_calibrationManager._sceneOrigin.transform.position - verticalMidPoint).normalized;
        Vector3 verticalDirection = (_calibrationManager._sceneOrigin.transform.position - horizontalMidPoint).normalized;

        Vector3 leftBottomCorner = _calibrationManager._sceneOrigin.transform.position 
                                    - horizontalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor
                                    + verticalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor;
        Vector3 leftUpperCorner = _calibrationManager._sceneOrigin.transform.position
                                    - horizontalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor
                                    - verticalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor;
        Vector3 rightUpperCorner = _calibrationManager._sceneOrigin.transform.position
                                    + horizontalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor
                                    - verticalDirection * (_systemManager._referenceDistance / 2.0f) * _systemManager._scaleTransferFactor;

        for(int i = 0; i < 5; i++) {
            _verticalLines[i].SetPosition(0, leftUpperCorner + horizontalDirection * i * (_systemManager._referenceDistance / 4.0f) * _systemManager._scaleTransferFactor);
            _verticalLines[i].SetPosition(1, leftBottomCorner + horizontalDirection * i * (_systemManager._referenceDistance / 4.0f) * _systemManager._scaleTransferFactor);
        }

        for(int i = 0; i < 5; i++) {
            _horizontalLines[i].SetPosition(0, leftUpperCorner + verticalDirection * i * (_systemManager._referenceDistance / 4.0f) * _systemManager._scaleTransferFactor);
            _horizontalLines[i].SetPosition(1, rightUpperCorner + verticalDirection * i * (_systemManager._referenceDistance / 4.0f) * _systemManager._scaleTransferFactor);
        }
    }
}
