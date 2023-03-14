using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIFollowHead : MonoBehaviour
{
    [SerializeField] 
    public GameObject OVRCameraRig;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position = new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.transform.position.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
        this.transform.rotation = Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
    }
}
