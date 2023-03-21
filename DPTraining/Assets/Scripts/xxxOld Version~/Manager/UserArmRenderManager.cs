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


    // For Rotation reference - Noitom
    [SerializeField]
    private Transform leftArmTransform_noitom;
    [SerializeField]
    private Transform leftForeArmTransform_noitom;

    [SerializeField]
    private Transform rightArmTransform_noitom;
    [SerializeField]
    private Transform rightForeArmTransform_noitom;

    // For Roataion reference - FinalIK
    [SerializeField]
    private Transform leftArmTransform_finalIK;
    [SerializeField]
    private Transform leftForeArmTransform_finalIK;

    [SerializeField]
    private Transform rightArmTransform_finalIK;
    [SerializeField]
    private Transform rightForeArmTransform_finalIK;

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
        this.SM_leftArm.GetComponent<MeshRenderer>().enabled = active;
        this.SM_leftForeArm.GetComponent<MeshRenderer>().enabled = active;

        this.SM_rightArm.GetComponent<MeshRenderer>().enabled = active;
        this.SM_rightForeArm.GetComponent<MeshRenderer>().enabled = active;
    }

    public void setRightHandStraightAngle() {
        float[] angles_noitom = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.rightArmTransform_noitom.transform, this.rightForeArmTransform_noitom.transform);
        this.systemManager.myUserInfo.straightAngle_forward_R_noitom = angles_noitom[0];
        this.systemManager.myUserInfo.straightAngle_up_R_noitom = angles_noitom[1];
        this.systemManager.myUserInfo.straightAngle_right_R_noitom = angles_noitom[2];

        float[] angles_finalIK = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.rightArmTransform_finalIK.transform, this.rightForeArmTransform_finalIK.transform);
        this.systemManager.myUserInfo.straightAngle_forward_R_finalIK = angles_finalIK[0];
        this.systemManager.myUserInfo.straightAngle_up_R_finalIK = angles_finalIK[1];
        this.systemManager.myUserInfo.straightAngle_right_R_finalIK = angles_finalIK[2];
    }

    public void setLeftHandStraightAngle() {
        float[] angles_noitom = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.leftArmTransform_noitom.transform, this.leftForeArmTransform_noitom.transform);
        this.systemManager.myUserInfo.straightAngle_forward_L_noitom = angles_noitom[0];
        this.systemManager.myUserInfo.straightAngle_up_L_noitom = angles_noitom[1];
        this.systemManager.myUserInfo.straightAngle_right_L_noitom = angles_noitom[2];

        float[] angles_finalIK = this.evaluationStraightModule.calculate_lowArmToUpArmAngle(this.leftArmTransform_finalIK.transform, this.leftForeArmTransform_finalIK.transform);
        this.systemManager.myUserInfo.straightAngle_forward_L_finalIK = angles_finalIK[0];
        this.systemManager.myUserInfo.straightAngle_up_L_finalIK = angles_finalIK[1];
        this.systemManager.myUserInfo.straightAngle_right_L_finalIK = angles_finalIK[2];
    }
}
