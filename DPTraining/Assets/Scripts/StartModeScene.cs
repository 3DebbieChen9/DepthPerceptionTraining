using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class StartModeScene : MonoBehaviour
{
    [SerializeField]
    public GameObject UICylinder;
    [SerializeField]
    public GameObject OVRCameraRig;
    [SerializeField]
    private float canvasHeight;
    [SerializeField]
    private float moveTime;

    public GameObject tmpCylinder;

    // Start is called before the first frame update
    void Start()
    {
        this.canvasHeight = 1.3f;
        this.moveTime = 1.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch))
        {
            string sceneName = "CalibrationScene";
            Debug.Log($"Change Scene to {sceneName}");
            SceneManager.LoadScene(sceneName);
        }
    }

    void FixedUpdate()
    {
        this.UICylinder.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        this.UICylinder.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.canvasHeight, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
        this.tmpCylinder.transform.DORotateQuaternion(Quaternion.Euler(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.x, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.z), this.moveTime);
        this.tmpCylinder.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.canvasHeight, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
    }
}
