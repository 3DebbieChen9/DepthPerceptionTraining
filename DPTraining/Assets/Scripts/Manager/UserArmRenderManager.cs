using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserArmRenderManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    
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


    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resizeUserArm() 
    {
        // parameters of user info
        float centerEyetoControllerLength = this.systemManager.myUserSizeInfo.avgCenterEyeToControllerLength;
        float uppperarmLength = this.systemManager.myUserSizeInfo.avgUpperArmLength;
        float forearmLength = this.systemManager.myUserSizeInfo.avgForeArmLength;
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

    private void reRotationUserArm() {
        this.hips.transform.rotation = this.hipsTransform.rotation;
        this.spine.transform.rotation = this.spineTransform.rotation;
        this.spine1.transform.rotation = this.spine1Transform.rotation;
        this.spine2.transform.rotation = this.spine2Transform.rotation;
        this.leftShoulder.transform.rotation = this.leftShoulderTransform.rotation;
        this.leftArm.transform.rotation = this.leftArmTransform.rotation;
        this.leftForeArm.transform.rotation = this.leftForeArmTransform.rotation;
        this.leftHand.transform.rotation = this.leftHandTransform.rotation;
        this.rightShoulder.transform.rotation = this.rightShoulderTransform.rotation;
        this.rightArm.transform.rotation = this.rightArmTransform.rotation;
        this.rightForeArm.transform.rotation = this.rightForeArmTransform.rotation;
        this.rightHand.transform.rotation = this.rightHandTransform.rotation;
    }
}
