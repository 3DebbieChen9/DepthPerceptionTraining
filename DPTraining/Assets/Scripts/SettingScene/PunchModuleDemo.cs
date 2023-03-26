using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PunchModuleDemo : MonoBehaviour
{
    [SerializeField]
    private SettingManager settingManager;
    private bool isPunchStraight = false;
    private ArmRotationAngle armRotationAngle;

    // Start is called before the first frame update
    void Start()
    {
        armRotationAngle = new ArmRotationAngle(0.0f, 0.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        if (this.settingManager.isDoingPunchingTest) {
            if (other.gameObject.tag == "Glove_R") {
                this.isPunchStraight = this.settingManager.straightModule.judgeArmStraight(Hand.Right);
                this.armRotationAngle = this.settingManager.straightModule.getArmAngle(Hand.Right);
                this.settingManager.displayPunchUnitResult(Hand.Right, this.isPunchStraight, this.armRotationAngle);
                this.settingManager.isDoingPunchingTest = false;
            }
            else if (other.gameObject.tag == "Glove_L") {
                this.isPunchStraight = this.settingManager.straightModule.judgeArmStraight(Hand.Left);
                this.armRotationAngle = this.settingManager.straightModule.getArmAngle(Hand.Left);
                this.settingManager.displayPunchUnitResult(Hand.Left, this.isPunchStraight, this.armRotationAngle);
                this.settingManager.isDoingPunchingTest = false;
            }
        }
    }
}
