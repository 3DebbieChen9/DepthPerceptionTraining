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
    private PunchCollectingManager punchCollectingManager = null;


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
            && this.mainManager.curSystemMode != SystemMode.SelectionMode
            && this.mainManager.curSystemMode != SystemMode.SettingMode)
        {
            this.evaluationManager = GameObject.Find("EvaluationManager").GetComponent<EvaluationManager>();
        }

        if (this.punchCollectingManager == null && this.mainManager.curSystemMode != SystemMode.SettingMode)
        {
            this.punchCollectingManager = GameObject.Find("PunchCollectingManager").GetComponent<PunchCollectingManager>();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (this.evaluationManager == null && this.punchCollectingManager == null)
        {
            return;
        }

        if (this.evaluationManager == null && this.punchCollectingManager != null)
        {
            if (other.gameObject.tag == "Glove_L")
            {
                bool isPunchStraight = this.punchCollectingManager.straightModule.judgeArmStraight(Hand.Left);
                ArmRotationAngle armRotationAngle = this.punchCollectingManager.straightModule.getArmAngle(Hand.Left);
                this.punchCollectingManager.displayPunchUnitResult(Hand.Left, isPunchStraight, armRotationAngle);
            }
            else if (other.gameObject.tag == "Glove_R")
            {
                bool isPunchStraight = this.punchCollectingManager.straightModule.judgeArmStraight(Hand.Right);
                ArmRotationAngle armRotationAngle = this.punchCollectingManager.straightModule.getArmAngle(Hand.Right);
                this.punchCollectingManager.displayPunchUnitResult(Hand.Right, isPunchStraight, armRotationAngle);
            }
        }

        if (this.evaluationManager != null && this.punchCollectingManager == null)
        {
            if (this.evaluationManager.playingModeManager.curState == PlayingState.idle || this.evaluationManager.playingModeManager.curState == PlayingState.result)
            {
                return;
            }

            if (other.gameObject.tag == "Glove_L")
            {
                this.evaluationManager.playingModeManager.curUnitResult.isStraight = this.evaluationManager.straightModule.judgeArmStraight(Hand.Left);
                // this.evaluationManager.playingModeManager.curUnitResult.isPunching = true;
                Debug.Log($"Left Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Left)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Left)}");
            }
            else if (other.gameObject.tag == "Glove_R")
            {
                this.evaluationManager.playingModeManager.curUnitResult.isStraight = this.evaluationManager.straightModule.judgeArmStraight(Hand.Right);
                // this.evaluationManager.playingModeManager.curUnitResult.isPunching = true;
                Debug.Log($"Right Arm Straight: {this.evaluationManager.straightModule.judgeArmStraight(Hand.Right)} \nAngle: {this.evaluationManager.straightModule.getArmAngle(Hand.Right)}");
            }
        }
    }
}
