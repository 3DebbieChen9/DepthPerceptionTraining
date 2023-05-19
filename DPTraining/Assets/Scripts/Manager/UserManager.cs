using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserManager : MonoBehaviour
{
    [SerializeField]
    private PlayingModeManager playingModeManager;
    [SerializeField]
    private GameObject userCenter;
    [SerializeField]
    private GameObject userIdlePose;

    // Start is called before the first frame update
    void Start()
    {
        this.userIdlePose.GetComponent<CapsuleCollider>().radius = this.playingModeManager.mainManager.myUserInfo.userBodySize.idlePoseRadius;
        this.userIdlePose.GetComponent<CapsuleCollider>().height = this.playingModeManager.mainManager.myUserInfo.userBodySize.height;
        this.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.playingModeManager.mainManager.myUserInfo.userBodySize.height / 2.0f, 0.0f);

        // this.userCenter.GetComponent<CapsuleCollider>().radius = this.playingModeManager.mainManager.myUserInfo.userBodySize.shoulderWidth / 2.0f;
        this.userCenter.GetComponent<CapsuleCollider>().radius = 0.1f;
        this.userCenter.GetComponent<CapsuleCollider>().height = this.playingModeManager.mainManager.myUserInfo.userBodySize.height;
        this.userCenter.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.playingModeManager.mainManager.myUserInfo.userBodySize.height / 2.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        this.userCenter.transform.position = new Vector3(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.userCenter.transform.position.y, this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
        this.userCenter.transform.rotation = Quaternion.Euler(0.0f, this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
    }

}
