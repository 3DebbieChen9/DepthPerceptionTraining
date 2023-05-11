using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class StraightModule : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;

    void Awake()
    {
        if (this.mainManager == null)
        {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public bool judgeArmStraight(Hand hand)
    {
        if (this.mainManager.mySelectionInfo.isUsingNoitom)
        {
            if (hand == Hand.Right)
            {
                return this.rightStraightJudgerNoitom();
            }
            else if (hand == Hand.Left)
            {
                return this.leftStraightJudgerNoitom();
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (hand == Hand.Right)
            {
                return this.rightStraightJudgerIK();
            }
            else if (hand == Hand.Left)
            {
                return this.leftStraightJudgerIK();
            }
            else
            {
                return false;
            }
        }
    }

    public ArmRotationAngle getArmAngle(Hand hand)
    {
        if (this.mainManager.mySelectionInfo.isUsingNoitom)
        {
            if (hand == Hand.Right)
            {
                return this.getRightAnglesNoitom();
            }
            else if (hand == Hand.Left)
            {
                return this.getLeftAnglesNoitom();
            }
            else
            {
                return new ArmRotationAngle(0, 0, 0);
            }
        }
        else
        {
            if (hand == Hand.Right)
            {
                return this.getRightAnglesIK();
            }
            else if (hand == Hand.Left)
            {
                return this.getLeftAnglesIK();
            }
            else
            {
                return new ArmRotationAngle(0, 0, 0);
            }
        }
    }

    public ArmRotationAngle getRightAnglesNoitom()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.rightLowerArm_noitom.transform.position - this.mainManager.rightUpperArm_noitom.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.rightLowerArm_noitom.transform.forward;
        Vector3 lowArmUp = this.mainManager.rightLowerArm_noitom.transform.up;
        Vector3 lowArmRight = this.mainManager.rightLowerArm_noitom.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        return new ArmRotationAngle(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right);
    }

    public ArmRotationAngle getLeftAnglesNoitom()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.leftLowerArm_noitom.transform.position - this.mainManager.leftUpperArm_noitom.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.leftLowerArm_noitom.transform.forward;
        Vector3 lowArmUp = this.mainManager.leftLowerArm_noitom.transform.up;
        Vector3 lowArmRight = this.mainManager.leftLowerArm_noitom.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        return new ArmRotationAngle(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right);
    }

    public bool rightStraightJudgerNoitom()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.rightLowerArm_noitom.transform.position - this.mainManager.rightUpperArm_noitom.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.rightLowerArm_noitom.transform.forward;
        Vector3 lowArmUp = this.mainManager.rightLowerArm_noitom.transform.up;
        Vector3 lowArmRight = this.mainManager.rightLowerArm_noitom.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        float tolerateAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;

        float lowArmToUpArm_forward_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightNoitom.forward;
        float lowArmToUpArm_up_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightNoitom.up;
        float lowArmToUpArm_right_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightNoitom.right;

        return this.straightAngleJudger(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right,
                                        tolerateAngleThreshold, lowArmToUpArm_forward_straightAngle, lowArmToUpArm_up_straightAngle, lowArmToUpArm_right_straightAngle);
    }

    public bool leftStraightJudgerNoitom()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.leftLowerArm_noitom.transform.position - this.mainManager.leftUpperArm_noitom.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.leftLowerArm_noitom.transform.forward;
        Vector3 lowArmUp = this.mainManager.leftLowerArm_noitom.transform.up;
        Vector3 lowArmRight = this.mainManager.leftLowerArm_noitom.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        float tolerateAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;

        float lowArmToUpArm_forward_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftNoitom.forward;
        float lowArmToUpArm_up_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftNoitom.up;
        float lowArmToUpArm_right_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftNoitom.right;

        return this.straightAngleJudger(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right,
                                        tolerateAngleThreshold, lowArmToUpArm_forward_straightAngle, lowArmToUpArm_up_straightAngle, lowArmToUpArm_right_straightAngle);
    }

    public ArmRotationAngle getRightAnglesIK()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.rightLowerArm_IK.transform.position - this.mainManager.rightUpperArm_IK.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.rightLowerArm_IK.transform.forward;
        Vector3 lowArmUp = this.mainManager.rightLowerArm_IK.transform.up;
        Vector3 lowArmRight = this.mainManager.rightLowerArm_IK.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        return new ArmRotationAngle(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right);
    }

    public ArmRotationAngle getLeftAnglesIK()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.leftLowerArm_IK.transform.position - this.mainManager.leftUpperArm_IK.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.leftLowerArm_IK.transform.forward;
        Vector3 lowArmUp = this.mainManager.leftLowerArm_IK.transform.up;
        Vector3 lowArmRight = this.mainManager.leftLowerArm_IK.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        return new ArmRotationAngle(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right);
    }

    public bool rightStraightJudgerIK()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.rightLowerArm_IK.transform.position - this.mainManager.rightUpperArm_IK.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.rightLowerArm_IK.transform.forward;
        Vector3 lowArmUp = this.mainManager.rightLowerArm_IK.transform.up;
        Vector3 lowArmRight = this.mainManager.rightLowerArm_IK.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        float tolerateAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;

        float lowArmToUpArm_forward_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightIK.forward;
        float lowArmToUpArm_up_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightIK.up;
        float lowArmToUpArm_right_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.rightIK.right;

        return this.straightAngleJudger(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right,
                                        tolerateAngleThreshold, lowArmToUpArm_forward_straightAngle, lowArmToUpArm_up_straightAngle, lowArmToUpArm_right_straightAngle);
    }

    public bool leftStraightJudgerIK()
    {
        Vector3 upArmToLowArmNormalized = (this.mainManager.leftLowerArm_IK.transform.position - this.mainManager.leftUpperArm_IK.transform.position).normalized;
        Vector3 lowArmForward = this.mainManager.leftLowerArm_IK.transform.forward;
        Vector3 lowArmUp = this.mainManager.leftLowerArm_IK.transform.up;
        Vector3 lowArmRight = this.mainManager.leftLowerArm_IK.transform.right;

        float lowArmToUpArmAngle_forward = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_up = Vector3.Angle(lowArmUp, -upArmToLowArmNormalized);
        float lowArmToUpArmAngle_right = Vector3.Angle(lowArmRight, -upArmToLowArmNormalized);

        float tolerateAngleThreshold = this.mainManager.mySettingInfo.evaluationThreshold.handStraightAngle;

        float lowArmToUpArm_forward_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftIK.forward;
        float lowArmToUpArm_up_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftIK.up;
        float lowArmToUpArm_right_straightAngle = this.mainManager.myUserInfo.userArmStraightAngle.leftIK.right;

        return this.straightAngleJudger(lowArmToUpArmAngle_forward, lowArmToUpArmAngle_up, lowArmToUpArmAngle_right,
                                        tolerateAngleThreshold, lowArmToUpArm_forward_straightAngle, lowArmToUpArm_up_straightAngle, lowArmToUpArm_right_straightAngle);
    }

    public bool straightAngleJudger(float forward, float up, float right, float threshold, float straightForward, float straightUp, float straightRight)
    {
        if (forward <= straightForward + threshold && forward >= straightForward - threshold)
        {
            if (up <= straightUp + threshold && up >= straightUp - threshold)
            {
                if (right <= straightRight + threshold && right >= straightRight - threshold)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
}
