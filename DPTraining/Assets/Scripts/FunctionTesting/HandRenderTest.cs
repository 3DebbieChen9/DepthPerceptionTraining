using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandRenderTest : MonoBehaviour
{
    [SerializeField]
    public GameObject userAvatar;

    [SerializeField]
    private GameObject hips;
    [SerializeField]
    private GameObject spine;
    [SerializeField]
    private GameObject spine1;
    [SerializeField]
    private GameObject spine2;

    [SerializeField]
    private GameObject leftShoulder;
    [SerializeField]
    private GameObject leftArm;
    [SerializeField]
    public GameObject SM_leftArm;
    [SerializeField]
    private GameObject leftForeArm;
    [SerializeField]
    public GameObject SM_leftForeArm;
    [SerializeField]
    private GameObject leftHand;

    [SerializeField]
    private GameObject rightShoulder;
    [SerializeField]
    private GameObject rightArm;
    [SerializeField]
    public GameObject SM_rightArm;
    [SerializeField]
    private GameObject rightForeArm;
    [SerializeField]
    public GameObject SM_rightForeArm;
    [SerializeField]
    private GameObject rightHand;

    // For Rotation reference
    [SerializeField]
    private Transform hipsTransform;
    [SerializeField]
    private Transform spineTransform;
    [SerializeField]
    private Transform spine1Transform;
    [SerializeField]
    private Transform spine2Transform;
    [SerializeField]
    private Transform leftShoulderTransform;
    [SerializeField]
    private Transform leftArmTransform;
    [SerializeField]
    private Transform leftForeArmTransform;
    [SerializeField]
    private Transform leftHandTransform;
    [SerializeField]
    private Transform rightShoulderTransform;
    [SerializeField]
    private Transform rightArmTransform;
    [SerializeField]
    private Transform rightForeArmTransform;
    [SerializeField]
    private Transform rightHandTransform;

    [SerializeField]
    public bool isRerotation = false;

    [SerializeField]
    // public GameObject OVRCameraRig;
    public GameObject refernceObject;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
        //     this.isRerotation = !this.isRerotation;
        // }
        if (isRerotation) {
            this.reRotationUserArm();
            // this.userAvatar.transform.position = new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.userAvatar.transform.position.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
            this.userAvatar.transform.position = new Vector3(this.refernceObject.transform.position.x, this.userAvatar.transform.position.y, this.refernceObject.transform.position.z);
        }
    }

    public void resizeUserArm() {
        // parameters for testing
        float centerEyetoControllerLength = 0.62f;
        float uppperarmLength = 0.21f;
        float forearmLength = 0.33f;
        /////////////////////////////////////////////

        // Modify the userAvatar's height
        float avatarDafaultCenterToHandLength = 0.73f;
        float newAvatarScale = centerEyetoControllerLength / avatarDafaultCenterToHandLength;
        
        this.userAvatar.transform.localScale = new Vector3(1.0f, newAvatarScale, 1.0f);

        // Modify the userAvatar's hand length
        float avatarDefaultUpperArmLength = 0.28f;
        float avatarDefaultForeArmLength = 0.26f;
        float newUpperArmScale = uppperarmLength / avatarDefaultUpperArmLength;
        float newForeArmScale = forearmLength / avatarDefaultForeArmLength;

        this.SM_leftArm.transform.localScale = new Vector3(newUpperArmScale, 1.0f, 1.0f);
        this.SM_rightArm.transform.localScale = new Vector3(newUpperArmScale, 1.0f, 1.0f);
        this.SM_leftForeArm.transform.localScale = new Vector3(newForeArmScale, 1.0f, 1.0f);
        this.SM_rightForeArm.transform.localScale = new Vector3(newForeArmScale, 1.0f, 1.0f);

        // Modify the userAvatar's position
        float centerToArmLength = centerEyetoControllerLength - uppperarmLength - forearmLength;
        this.leftArm.transform.localPosition = new Vector3(-centerToArmLength, this.leftArm.transform.localPosition.y, this.leftArm.transform.localPosition.z);
        this.rightArm.transform.localPosition = new Vector3(centerToArmLength, this.rightArm.transform.localPosition.y, this.rightArm.transform.localPosition.z);

        this.leftForeArm.transform.localPosition = new Vector3(-uppperarmLength, this.leftForeArm.transform.localPosition.y, this.leftForeArm.transform.localPosition.z);
        this.rightForeArm.transform.localPosition = new Vector3(uppperarmLength, this.rightForeArm.transform.localPosition.y, this.rightForeArm.transform.localPosition.z);

        this.leftHand.transform.localPosition = new Vector3(-forearmLength, this.leftHand.transform.localPosition.y, this.leftHand.transform.localPosition.z);
        this.rightHand.transform.localPosition = new Vector3(forearmLength, this.rightHand.transform.localPosition.y, this.rightHand.transform.localPosition.z);
    }

    public void reRotationUserArm() {
        // this.hips.transform.localRotation = this.hipsTransform.localRotation;
        // this.spine.transform.localRotation = this.spineTransform.localRotation;
        // this.spine1.transform.localRotation = this.spine1Transform.localRotation;
        // this.spine2.transform.localRotation = this.spine2Transform.localRotation;
        this.leftShoulder.transform.localRotation = this.leftShoulderTransform.localRotation;
        this.leftArm.transform.localRotation = this.leftArmTransform.localRotation;
        this.leftForeArm.transform.localRotation = this.leftForeArmTransform.localRotation;
        this.leftHand.transform.localRotation = this.leftHandTransform.localRotation;
        this.rightShoulder.transform.localRotation = this.rightShoulderTransform.localRotation;
        this.rightArm.transform.localRotation = this.rightArmTransform.localRotation;
        this.rightForeArm.transform.localRotation = this.rightForeArmTransform.localRotation;
        this.rightHand.transform.localRotation = this.rightHandTransform.localRotation;

        this.userAvatar.transform.forward = this.refernceObject.transform.forward; 
        this.userAvatar.transform.rotation = Quaternion.LookRotation(this.refernceObject.transform.forward, this.userAvatar.transform.up);
    }

    public void switchReRotation() {
        this.isRerotation = !this.isRerotation;
    }
}
