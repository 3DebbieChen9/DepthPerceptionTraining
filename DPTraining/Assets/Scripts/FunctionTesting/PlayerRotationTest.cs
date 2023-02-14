using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerRotationTest : MonoBehaviour
{
    // public GameObject OVRCameraRig;
    public Transform refernceTransform;
    public bool flag = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            this.flag = !this.flag;
        }
        if (flag) {
            // this.updatePlayerRotation();
            transform.rotation = Quaternion.Euler(0.0f, refernceTransform.rotation.eulerAngles.y, 0.0f);
            this.transform.position = new Vector3(this.refernceTransform.position.x, this.transform.position.y, this.refernceTransform.position.z);
        }
    }

    // public void updatePlayerRotation() {
        
    //     Transform root = OVRCameraRig.GetComponent<OVRCameraRig>().trackingSpace;
	// 	Transform centerEye = OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor;

    //     Vector3 prevPos = root.position;
    //     Quaternion prevRot = root.rotation;

    //     transform.rotation = Quaternion.Euler(0.0f, centerEye.rotation.eulerAngles.y, 0.0f);

    //     root.position = prevPos;
    //     root.rotation = prevRot;

    // }
}
