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
            }
        }
    }

    void planeResize() {
        _plane.transform.localScale = new Vector3(_systemManager.avgDistance, _plane.transform.localScale.y, _systemManager.avgDistance);
    }

    void planeMove() {
        _plane.transform.position = _calibrationManager._sceneOrigin.transform.position;
        _plane.transform.rotation = _calibrationManager._sceneOrigin.transform.rotation;
    }
}
