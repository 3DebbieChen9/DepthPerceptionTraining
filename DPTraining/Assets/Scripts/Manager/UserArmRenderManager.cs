using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.FinalIK;

public class UserArmRenderManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;

    [SerializeField]
    public EvaluationStraightModule evaluationStraightModule;
    
    [SerializeField]
    public GameObject userAvatar;
    
    [SerializeField]
    public GameObject SM_leftArm;
    [SerializeField]
    public GameObject SM_leftForeArm;

    [SerializeField]
    public GameObject SM_rightArm;
    [SerializeField]
    public GameObject SM_rightForeArm;

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
    private Transform rightShoulderTransform;
    [SerializeField]
    private Transform rightArmTransform;
    [SerializeField]
    private Transform rightForeArmTransform;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resizeUserScale() 
    {
        // Modify the userAvatar's height
        float avatarDefaultHeight = 1.80f;
        float newAvatarScale = this.systemManager.myUserInfo.userHeight / avatarDefaultHeight;
        
        this.userAvatar.GetComponent<RootMotion.Demos.VRIKCalibrationBasic>().scaleMlp = newAvatarScale;
    }

    public void userAvatarMeshSetActive(bool active) {
        this.SM_leftArm.SetActive(active);
        this.SM_leftForeArm.SetActive(active);
        
        this.SM_rightArm.SetActive(active);
        this.SM_rightForeArm.SetActive(active);
    }

    public void setRightHandStraightAngle() {
        float[] angles = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.rightArmTransform.transform, this.rightForeArmTransform.transform);
        this.systemManager.myUserInfo.straightAngle_forward_R = angles[0];
        this.systemManager.myUserInfo.straightAngle_up_R = angles[1];
        this.systemManager.myUserInfo.straightAngle_right_R = angles[2];
    }

    public void setLeftHandStraightAngle() {
        float[] angles = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.leftArmTransform.transform, this.leftForeArmTransform.transform);
        this.systemManager.myUserInfo.straightAngle_forward_L = angles[0];
        this.systemManager.myUserInfo.straightAngle_up_L = angles[1];
        this.systemManager.myUserInfo.straightAngle_right_L = angles[2];
    }
}
