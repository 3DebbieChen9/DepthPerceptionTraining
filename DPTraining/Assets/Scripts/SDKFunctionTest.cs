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

    // Start is called before the first frame update
    void Start()
    {
        _plane.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position;
        
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
            _cube.SetActive(true);
            _cube.transform.position = _OVRCameraRig.GetComponent<OVRCameraRig>().trackerAnchor.position;
        }

    }
}
