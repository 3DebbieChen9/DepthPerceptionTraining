using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UIFollowHead : MonoBehaviour
{
    [SerializeField] 
    public GameObject OVRCameraRig;
    [Range(0.5f, 2.0f)]
    public float height;
    [Range(15.0f, 180.0f)]
    public float tolerateAngle;
    [SerializeField]
    private float moveTime;
    // Start is called before the first frame update
    void Start()
    {
        this.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.height, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void FixedUpdate() {
        // this.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.height, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveSpeed);
        // this.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveSpeed);
        if (Mathf.Abs(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y - this.transform.rotation.eulerAngles.y) > this.tolerateAngle) {
            this.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.height, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
            this.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        }
    }
}
