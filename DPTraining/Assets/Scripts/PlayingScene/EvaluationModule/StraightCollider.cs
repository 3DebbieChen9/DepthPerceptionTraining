using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class StraightCollider : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager = null;
    [SerializeField]
    private EvaluationManager evaluationManager = null;
    [SerializeField]
    private PunchSettingManager punchSettingManager = null;


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
        if (this.evaluationManager == null
            && this.mainManager.curSystemMode != SystemMode.StartMode
            && this.mainManager.curSystemMode != SystemMode.CalibrationMode
            && this.mainManager.curSystemMode != SystemMode.PunchSettingMode
            && this.mainManager.curSystemMode != SystemMode.SelectionMode)
        {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }

        if (this.punchSettingManager == null && this.mainManager.curSystemMode == SystemMode.PunchSettingMode)
        {
            this.punchSettingManager = GameObject.Find("PunchSettingManager").GetComponent<PunchSettingManager>();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (this.evaluationManager == null && this.punchSettingManager == null)
        {
            return;
        }

        // if (this.evaluationManager == null && this.punchSettingManager != null)
        // {
        //     if (other.gameObject.tag == "Glove_L")
        //     {
        //         bool isPunchStraight = this.punchSettingManager.straightModule.judgeArmStraight(Hand.Left);
        //         ArmRotationAngle armRotationAngle = this.punchSettingManager.straightModule.getArmAngle(Hand.Left);
        //         this.punchSettingManager.displayPunchUnitResult(Hand.Left, isPunchStraight, armRotationAngle);
        //     }
        //     else if (other.gameObject.tag == "Glove_R")
        //     {
        //         bool isPunchStraight = this.punchSettingManager.straightModule.judgeArmStraight(Hand.Right);
        //         ArmRotationAngle armRotationAngle = this.punchSettingManager.straightModule.getArmAngle(Hand.Right);
        //         this.punchSettingManager.displayPunchUnitResult(Hand.Right, isPunchStraight, armRotationAngle);
        //     }
        // }

        if (this.evaluationManager != null && this.punchSettingManager == null)
        {
            if (this.evaluationManager.playingModeManager.curState == PlayingState.idle || this.evaluationManager.playingModeManager.curState == PlayingState.result)
            {
                return;
            }

            if (other.gameObject.tag == "Glove_L")
            {
                this.evaluationManager.playingModeManager.curUnitResult.isStraight = this.evaluationManager.straightModule.judgeArmStraight(Hand.Left);
                this.evaluationManager.playingModeManager.curUnitResult.isPunching = true;
                Debug.Log($"Left Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Left)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Left)}");
            }
            else if (other.gameObject.tag == "Glove_R")
            {
                this.evaluationManager.playingModeManager.curUnitResult.isStraight = this.evaluationManager.straightModule.judgeArmStraight(Hand.Right);
                this.evaluationManager.playingModeManager.curUnitResult.isPunching = true;
                Debug.Log($"Right Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Right)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Right)}");
            }
        }
    }
}
