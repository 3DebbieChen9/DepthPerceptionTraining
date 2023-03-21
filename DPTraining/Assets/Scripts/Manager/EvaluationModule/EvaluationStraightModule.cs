using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationStraightModule : MonoBehaviour
{
   [SerializeField]
    public EvaluationManager evaluationManager;

    [SerializeField]
    public GameObject upArm_R;
    [SerializeField]
    public GameObject lowArm_R;
    [SerializeField]
    public GameObject upArm_L;
    [SerializeField]
    public GameObject lowArm_L;

    // Start is called before the first frame update
    void Start()
    {
        if (this.evaluationManager == null) {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool judgeArmStraight(EvaluationManager.Hand hand) {
        if (hand == EvaluationManager.Hand.right) {
            print("rightArmStraightJudger()");
            return rightArmStraightJudger();
        } else if (hand == EvaluationManager.Hand.left) {
            print("leftArmStraightJudger()");
            return leftArmStraightJudger();
        } else {
            return false;
        }
    }

    public bool leftArmStraightJudger() {
        Vector3 upArmToLowArmNormalized_L = (lowArm_L.transform.position - upArm_L.transform.position).normalized;

        Vector3 lowArmForward_L = lowArm_L.transform.forward;
        Vector3 lowArmUp_L = lowArm_L.transform.up;
        Vector3 lowArmRight_L = lowArm_L.transform.right;

        float lowArmToUpArmAngle_forward_L = Vector3.Angle(lowArmForward_L, -upArmToLowArmNormalized_L);
        float lowArmToUpArmAngle_up_L = Vector3.Angle(lowArmUp_L, -upArmToLowArmNormalized_L);
        float lowArmToUpArmAngle_right_L = Vector3.Angle(lowArmRight_L, -upArmToLowArmNormalized_L);

        float tolerateAngleThreshold = this.evaluationManager.systemManager.mySettingInfo.handStraight_tolerateAngleThreshold;

        float lowArmToUpArm_forward_straightAngle = 0.0f;
        float lowArmToUpArm_up_straightAngle = 0.0f;
        float lowArmToUpArm_right_straightAngle = 0.0f;
        
        if (this.evaluationManager.systemManager.mySettingInfo.isUsingNoitom) {
            lowArmToUpArm_forward_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_forward_L_noitom;
            lowArmToUpArm_up_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_up_L_noitom;
            lowArmToUpArm_right_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_right_L_noitom;
        }
        else {
            lowArmToUpArm_forward_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_forward_L_finalIK;
            lowArmToUpArm_up_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_up_L_finalIK;
            lowArmToUpArm_right_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_right_L_finalIK;
        }

        Debug.Log("Left Arm Angle(F|U|R): " + lowArmToUpArmAngle_forward_L + " | " + lowArmToUpArmAngle_up_L + " | " + lowArmToUpArmAngle_right_L);

        if (lowArmToUpArmAngle_forward_L <= lowArmToUpArm_forward_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_forward_L >= lowArmToUpArm_forward_straightAngle - tolerateAngleThreshold)
        {
            if (lowArmToUpArmAngle_up_L < lowArmToUpArm_up_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_up_L > lowArmToUpArm_up_straightAngle - tolerateAngleThreshold) {
                if (lowArmToUpArmAngle_right_L < lowArmToUpArm_right_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_right_L > lowArmToUpArm_right_straightAngle - tolerateAngleThreshold) {
                    Debug.Log("Left Arm is Straight");
                    // this.evaluationManager.systemManager.consoleTitle.text = "Left Arm is Straight";
                    return true;
                }
                else {
                    Debug.Log("Left Arm is not Straight");
                    return false;
                }
            }
            else {
                Debug.Log("Left Arm is not Straight");
                return false;
            }
        }
        else {
            Debug.Log("Left Arm is not Straight");
            return false;
        }
    }

    public bool rightArmStraightJudger() {
        Vector3 upArmToLowArmNormalized_R = (lowArm_R.transform.position - upArm_R.transform.position).normalized;

        Vector3 lowArmForward_R = lowArm_R.transform.forward;
        Vector3 lowArmUp_R = lowArm_R.transform.up;
        Vector3 lowArmRight_R = lowArm_R.transform.right;
        
        float lowArmToUpArmAngle_forward_R = Vector3.Angle(lowArmForward_R, -upArmToLowArmNormalized_R);
        float lowArmToUpArmAngle_up_R = Vector3.Angle(lowArmUp_R, -upArmToLowArmNormalized_R);
        float lowArmToUpArmAngle_right_R = Vector3.Angle(lowArmRight_R, -upArmToLowArmNormalized_R);

        float tolerateAngleThreshold = this.evaluationManager.systemManager.mySettingInfo.handStraight_tolerateAngleThreshold;

        float lowArmToUpArm_forward_straightAngle = 0.0f;
        float lowArmToUpArm_up_straightAngle = 0.0f;
        float lowArmToUpArm_right_straightAngle = 0.0f;
        
        if (this.evaluationManager.systemManager.mySettingInfo.isUsingNoitom) {
            lowArmToUpArm_forward_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_forward_R_noitom;
            lowArmToUpArm_up_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_up_R_noitom;
            lowArmToUpArm_right_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_right_R_noitom;
        }
        else {
            lowArmToUpArm_forward_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_forward_R_finalIK;
            lowArmToUpArm_up_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_up_R_finalIK;
            lowArmToUpArm_right_straightAngle = this.evaluationManager.systemManager.myUserInfo.straightAngle_right_R_finalIK;
        }
        

        Debug.Log("Right Arm Angle(F|U|R): " + lowArmToUpArmAngle_forward_R + " | " + lowArmToUpArmAngle_up_R + " | " + lowArmToUpArmAngle_right_R);

        if (lowArmToUpArmAngle_forward_R <= lowArmToUpArm_forward_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_forward_R >= lowArmToUpArm_forward_straightAngle - tolerateAngleThreshold)
        {
            if (lowArmToUpArmAngle_up_R < lowArmToUpArm_up_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_up_R > lowArmToUpArm_up_straightAngle - tolerateAngleThreshold) {
                if (lowArmToUpArmAngle_right_R < lowArmToUpArm_right_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_right_R > lowArmToUpArm_right_straightAngle - tolerateAngleThreshold) {
                    Debug.Log("Right Arm is Straight");
                    // this.evaluationManager.systemManager.consoleTitle.text = "Right Arm is Straight";
                    return true;
                }
                else {
                    Debug.Log("Right Arm is not Straight");
                    return false;
                }
            }
            else {
                Debug.Log("Right Arm is not Straight");
                return false;
            }
        }
        else {
            Debug.Log("Right Arm is not Straight");
            return false;
        }
    }

    public float[] calculate_lowArmToUpArmAngle(Transform upArm, Transform lowArm) {        
        Vector3 upArmToLowArmNormalized = (lowArm.position - upArm.position).normalized;
        
        float angle_forward = Vector3.Angle(lowArm.forward, -upArmToLowArmNormalized);
        float angle_up = Vector3.Angle(lowArm.up, -upArmToLowArmNormalized);
        float angle_right = Vector3.Angle(lowArm.right, -upArmToLowArmNormalized);

        return new float[] {angle_forward, angle_up, angle_right};
    }
}
