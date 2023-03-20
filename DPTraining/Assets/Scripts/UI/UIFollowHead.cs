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
    [Range(0.0f, 5.0f)]
    public float toleratteDistance;
    [SerializeField]
    private float moveTime;

    [SerializeField]
    public MeshRenderer[] controllerPokeInteractor_visual;
    [SerializeField]
    public GameObject[] controllerRayInteractor_visual;


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
            this.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), this.moveTime);
        }
        if (Mathf.Abs(Vector2.Distance(new Vector2(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), new Vector2(this.transform.position.x, this.transform.position.z))) > this.toleratteDistance) {
            this.transform.DOMove(new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.height, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), this.moveTime);
        }
    }

    public void EnableControllerInteractorVisual(bool enable) {
        foreach (MeshRenderer meshRenderer in this.controllerPokeInteractor_visual) {
            meshRenderer.enabled = false;
        }
        foreach (GameObject gameObject in this.controllerRayInteractor_visual) {
            gameObject.SetActive(enable);
        }
        Debug.Log("EnableControllerInteractorVisual: " + enable);
    }
}
