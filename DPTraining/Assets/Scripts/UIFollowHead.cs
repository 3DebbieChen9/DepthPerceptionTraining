using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UIFollowHead : MonoBehaviour
{
    [SerializeField]
    private float canvasHeight;
    [SerializeField]
    private float moveTime;
    [SerializeField]
    private GameObject OVRCameraRig;

    private void Awake() {
        this.canvasHeight = 1.3f;
        this.moveTime = 1.0f;
        this.OVRCameraRig = GameObject.Find("OVRCameraRig");    
    }

    // Start is called before the first frame update
    void Start()
    {
        this.recenterUICanvas();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Start, OVRInput.Controller.LTouch)) {
            this.recenterUICanvas();
        }
    }

    void recenterUICanvas() {
        this.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        this.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.canvasHeight, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
    }
}
