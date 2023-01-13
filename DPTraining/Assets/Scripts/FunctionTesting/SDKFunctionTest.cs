using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SDKFunctionTest : MonoBehaviour
{
    [SerializeField] 
    private GameObject _OVRCameraRig;
    [SerializeField] 
    private GameObject _plane;
    [SerializeField]
    private GameObject _cube;
    [SerializeField]
    private TextMesh _conseolText;

    // Start is called before the first frame update
    void Start()
    {
        _plane.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position;
        _cube.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position;
        _OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            if (_plane.activeSelf == true) {
                _plane.SetActive(false);
            }
            else {
                _plane.SetActive(true);
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            // _OVRCameraRig.GetComponent<OVRCameraRig>().UpdateAnchors(true, true);
            // _conseolText.GetComponent<TextMesh>().text = "wtf";
            _conseolText.text = "wtf";
            _cube.SetActive(true);
            // _cube.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().leftHandAnchor.position;
            _cube.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().leftControllerAnchor.position;
            // _cube.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            _OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = !_OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled;
        }

    }
}
