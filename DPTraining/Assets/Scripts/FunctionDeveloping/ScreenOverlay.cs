using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ScreenOverlay : MonoBehaviour
{
    [SerializeField]
    private GameObject OVRCameraRig;
    [SerializeField]
    private float moveTime;
    [SerializeField]
    private GameObject overlayCanvas;

    // Start is called before the first frame update
    void Start()
    {
        this.moveTime = 0.3f;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void FixedUpdate()
    {
        this.overlayCanvas.transform.DORotateQuaternion(OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation, this.moveTime);
        this.overlayCanvas.transform.DOMove(OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position, this.moveTime);
    }
}
