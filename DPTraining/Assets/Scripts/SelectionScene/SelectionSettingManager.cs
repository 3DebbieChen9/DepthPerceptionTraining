using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
using TMPro;

public class SelectionSettingManager : MonoBehaviour
{
    [SerializeField]
    public SelectionModeManager selectionModeManager;
    [SerializeField]
    private string[] coachSpeedNames;
    [SerializeField]
    private TMP_Text coachSpeedText;
    [SerializeField]
    private TMP_Text coachTypeText;
    [SerializeField]
    private TMP_Text reactionTimeStandardText;
    [SerializeField]
    private TMP_Text errorText;

    // Start is called before the first frame update
    void Start()
    {
        this.coachTypeText.text = this.selectionModeManager.mainManager.myExperimentSetting.selectedCoachTypes[0].ToString();
        this.reactionTimeStandardText.text = this.selectionModeManager.mainManager.myExperimentSetting.reactionTimeStandard.ToString();
        this.errorText.text = "";
        this.coachSpeedNames = new string[] { "Slowest", "Fastest", "Random" };
        this.coachSpeedText.text = this.selectionModeManager.mainManager.myExperimentSetting.selectedSpeed.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void btnSpeedLeftClick()
    {
        int curIndex = System.Array.IndexOf(this.coachSpeedNames, this.coachSpeedText.text);
        if (curIndex == 0)
        {
            this.coachSpeedText.text = this.coachSpeedNames[this.coachSpeedNames.Length - 1];
        }
        else
        {
            this.coachSpeedText.text = this.coachSpeedNames[(curIndex - 1) % this.coachSpeedNames.Length];
        }
    }
    public void btnSpeedRightClick()
    {
        int curIndex = System.Array.IndexOf(this.coachSpeedNames, this.coachSpeedText.text);
        this.coachSpeedText.text = this.coachSpeedNames[(curIndex + 1) % this.coachSpeedNames.Length];
    }

    public bool selecitonSettingDone()
    {
        bool error = false;

        switch (this.coachSpeedText.text)
        {
            case "Slowest":
                this.selectionModeManager.mainManager.myExperimentSetting.selectedSpeed = MovingSpeed.Slowest;
                break;
            case "Fastest":
                this.selectionModeManager.mainManager.myExperimentSetting.selectedSpeed = MovingSpeed.Fastest;
                break;
            case "Random":
                this.selectionModeManager.mainManager.myExperimentSetting.selectedSpeed = MovingSpeed.Random;
                break;
            default:
                this.selectionModeManager.mainManager.myExperimentSetting.selectedSpeed = MovingSpeed.Slowest;
                break;
        }

        try
        {
            int coachType = int.Parse(this.coachTypeText.text);
            
            if (coachType < 0 || coachType > 7)
            {
                error = true;
                this.errorText.text += "Coach Type 0 is out of range.\n";
            }
            else {
                this.selectionModeManager.mainManager.myExperimentSetting.selectedCoachTypes[0] = coachType;
            }
            
        }
        catch (System.Exception e)
        {
            error = true;
            this.errorText.text += e.ToString();
            Debug.Log(e);
        }

        try
        {
            this.selectionModeManager.mainManager.myExperimentSetting.reactionTimeStandard = float.Parse(this.reactionTimeStandardText.text);
        }
        catch (System.Exception e)
        {
            error = true;
            this.errorText.text += e.ToString();
            Debug.Log(e);
        }

        return error;
    }
}
