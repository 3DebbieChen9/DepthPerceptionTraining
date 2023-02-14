using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StraightDetermineModuleTest : MonoBehaviour
{
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
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GameObject upArm;
    public GameObject lowArm;
    public void StraightDetermine()
    {
        Vector3 upArmPos = upArm.transform.position;
        Vector3 lowArmPos = lowArm.transform.position;
        Vector3 upArmUp = upArm.transform.up;
        Vector3 lowArmUp = lowArm.transform.up;
        Vector3 upArmForward = upArm.transform.forward;
        Vector3 lowArmForward = lowArm.transform.forward;
        Vector3 upArmRight = upArm.transform.right;
        Vector3 lowArmRight = lowArm.transform.right;
        Vector3 upArmToLowArm = lowArmPos - upArmPos;
        Vector3 upArmToLowArmNormalized = upArmToLowArm.normalized;
        float upArmToLowArmAngle = Vector3.Angle(upArmForward, upArmToLowArmNormalized);
        float lowArmToUpArmAngle = Vector3.Angle(lowArmForward, -upArmToLowArmNormalized);
        Debug.Log("Forward\nupArmToLowArmAngle: " + upArmToLowArmAngle + " | lowArmToUpArmAngle: " + lowArmToUpArmAngle);
        Debug.Log("Up\nupArmToLowArmAngle: " + Vector3.Angle(upArmUp, upArmToLowArmNormalized) + " | lowArmToUpArmAngle: " + Vector3.Angle(lowArmUp, -upArmToLowArmNormalized));
        Debug.Log("Right\nupArmToLowArmAngle: " + Vector3.Angle(upArmRight, upArmToLowArmNormalized) + " | lowArmToUpArmAngle: " + Vector3.Angle(lowArmRight, -upArmToLowArmNormalized));
    }

    public void bothHandStraightDetermine() {
        float tolerateAngleThreshold = 5.0f; // degree
        float lowArmToUpArm_forward_straightAngle = 90.0f;
        float lowArmToUpArm_up_straightAngle = 90.0f;
        float lowArmToUpArm_right_straightAngle_R = 180.0f;
        float lowArmToUpArm_right_straightAngle_L = 0.0f;

        Vector3 upArmToLowArmNormalized_L = (lowArm_L.transform.position - upArm_L.transform.position).normalized;

        Vector3 lowArmForward_L = lowArm_L.transform.forward;
        Vector3 lowArmUp_L = lowArm_L.transform.up;
        Vector3 lowArmRight_L = lowArm_L.transform.right;
        
        float lowArmToUpArmAngle_forward_L = Vector3.Angle(lowArmForward_L, -upArmToLowArmNormalized_L);
        float lowArmToUpArmAngle_up_L = Vector3.Angle(lowArmUp_L, -upArmToLowArmNormalized_L);
        float lowArmToUpArmAngle_right_L = Vector3.Angle(lowArmRight_L, -upArmToLowArmNormalized_L);

        Vector3 upArmToLowArmNormalized_R = (lowArm_R.transform.position - upArm_R.transform.position).normalized;

        Vector3 lowArmForward_R = lowArm_R.transform.forward;
        Vector3 lowArmUp_R = lowArm_R.transform.up;
        Vector3 lowArmRight_R = lowArm_R.transform.right;
        
        float lowArmToUpArmAngle_forward_R = Vector3.Angle(lowArmForward_R, -upArmToLowArmNormalized_R);
        float lowArmToUpArmAngle_up_R = Vector3.Angle(lowArmUp_R, -upArmToLowArmNormalized_R);
        float lowArmToUpArmAngle_right_R = Vector3.Angle(lowArmRight_R, -upArmToLowArmNormalized_R);

        bool leftArmStraight = false;
        bool rightArmStraight = false;
        if (lowArmToUpArmAngle_forward_L <= lowArmToUpArm_forward_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_forward_L >= lowArmToUpArm_forward_straightAngle - tolerateAngleThreshold)
        {
            if (lowArmToUpArmAngle_up_L < lowArmToUpArm_up_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_up_L > lowArmToUpArm_up_straightAngle - tolerateAngleThreshold) {
                if (lowArmToUpArmAngle_right_L < lowArmToUpArm_right_straightAngle_L + tolerateAngleThreshold && lowArmToUpArmAngle_right_L > lowArmToUpArm_right_straightAngle_L - tolerateAngleThreshold) {
                    leftArmStraight = true;
                    Debug.Log("Left Arm is Straight");
                }
                else {
                    leftArmStraight = false;
                    Debug.Log("Left Arm is not Straight");
                }
            }
            else {
                leftArmStraight = false;
                Debug.Log("Left Arm is not Straight");
            }
        }
        else {
            leftArmStraight = false;
            Debug.Log("Left Arm is not Straight");
        }

        if (lowArmToUpArmAngle_forward_R <= lowArmToUpArm_forward_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_forward_R >= lowArmToUpArm_forward_straightAngle - tolerateAngleThreshold)
        {
            if (lowArmToUpArmAngle_up_R < lowArmToUpArm_up_straightAngle + tolerateAngleThreshold && lowArmToUpArmAngle_up_R > lowArmToUpArm_up_straightAngle - tolerateAngleThreshold) {
                if (lowArmToUpArmAngle_right_R < lowArmToUpArm_right_straightAngle_R + tolerateAngleThreshold && lowArmToUpArmAngle_right_R > lowArmToUpArm_right_straightAngle_R - tolerateAngleThreshold) {
                    rightArmStraight = true;
                    Debug.Log("Right Arm is Straight");
                }
                else {
                    rightArmStraight = false;
                    Debug.Log("Right Arm is not Straight");
                }
            }
            else {
                rightArmStraight = false;
                Debug.Log("Right Arm is not Straight");
            }
        }
        else {
            rightArmStraight = false;
            Debug.Log("Right Arm is not Straight");
        }
        Debug.Log("Left Arm Angle(F|U|R): " + lowArmToUpArmAngle_forward_L + " | " + lowArmToUpArmAngle_up_L + " | " + lowArmToUpArmAngle_right_L);
        Debug.Log("Right Arm Angle(F|U|R): " + lowArmToUpArmAngle_forward_R + " | " + lowArmToUpArmAngle_up_R + " | " + lowArmToUpArmAngle_right_R);
    }
}
