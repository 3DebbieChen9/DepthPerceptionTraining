using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
using TMPro;
using DG.Tweening;

public class ExperimentSettingManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    private GameObject UICylinder;
    [SerializeField]
    private string[] experimentSectionNames;
    [SerializeField]
    private string[] experimentModeNames;
    [SerializeField]
    private TMP_Text subjectIDText;
    [SerializeField]
    private TMP_Text experimentSectionText;
    [SerializeField]
    private TMP_Text experimentModeText;
    [SerializeField]
    private TMP_Text[] coachTypeOrderTexts;
    [SerializeField]
    private TMP_Text reactionTimeStandardText;
    [SerializeField]
    private TMP_Text errorText;

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
        this.mainManager.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = true;
        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(true);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(true);
        this.mainManager.curSystemMode = SystemMode.ExperimentSettingMode;
        this.experimentSectionNames = new string[] { "Pre-Test", "Training_1", "Training_2", "Training_3", "Training_4", "Post-Test", "Experience" };
        this.experimentModeNames = new string[] { "Testing", "Baseline (A)", "Ring (B)", "Bar + Ring (C)", "Cutout + Ring (D)" };
        this.subjectIDText.text = "0";
        this.experimentSectionText.text = this.experimentSectionNames[0];
        this.experimentModeText.text = this.experimentModeNames[0];
        this.coachTypeOrderTexts[0].text = "0";
        this.coachTypeOrderTexts[1].text = "1";
        this.coachTypeOrderTexts[2].text = "2";
        this.coachTypeOrderTexts[3].text = "3";
        this.reactionTimeStandardText.text = "2.0";
        this.errorText.text = "";
    }

    // Update is called once per frame
    void Update()
    {

    }

    void FixedUpdate()
    {
        this.UICylinder.transform.DORotateQuaternion(Quaternion.Euler(0.0f, this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f), 0.0f);
        this.UICylinder.transform.DOMove(new Vector3(this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, 1.3f, this.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), 0.0f);
    }

    public void btnSectionLeftClick()
    {
        int curIndex = System.Array.IndexOf(this.experimentSectionNames, this.experimentSectionText.text);
        if (curIndex == 0)
        {
            this.experimentSectionText.text = this.experimentSectionNames[this.experimentSectionNames.Length - 1];
        }
        else
        {
            this.experimentSectionText.text = this.experimentSectionNames[(curIndex - 1) % this.experimentSectionNames.Length];
        }
    }
    public void btnSectionRightClick()
    {
        int curIndex = System.Array.IndexOf(this.experimentSectionNames, this.experimentSectionText.text);
        this.experimentSectionText.text = this.experimentSectionNames[(curIndex + 1) % this.experimentSectionNames.Length];
    }
    public void btnModeLeftClick()
    {
        int curIndex = System.Array.IndexOf(this.experimentModeNames, this.experimentModeText.text);
        if (curIndex == 0)
        {
            this.experimentModeText.text = this.experimentModeNames[this.experimentModeNames.Length - 1];
        }
        else
        {
            this.experimentModeText.text = this.experimentModeNames[(curIndex - 1) % this.experimentModeNames.Length];
        }
    }
    public void btnModeRightClick()
    {
        int curIndex = System.Array.IndexOf(this.experimentModeNames, this.experimentModeText.text);
        this.experimentModeText.text = this.experimentModeNames[(curIndex + 1) % this.experimentModeNames.Length];
    }

    public void btnSettingDoneClick()
    {
        bool error = false;
        try
        {
            this.mainManager.myExperimentSetting.subjectID = int.Parse(this.subjectIDText.text);
        }
        catch (System.Exception e)
        {
            error = true;
            this.errorText.text += e.ToString();
            Debug.Log(e);
        }

        switch (this.experimentSectionText.text)
        {
            case "Pre-Test":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.PreTest;
                break;
            case "Training_1":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.Training_1;
                break;
            case "Training_2":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.Training_2;
                break;
            case "Training_3":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.Training_3;
                break;
            case "Training_4":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.Training_4;
                break;
            case "Post-Test":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.PostTest;
                break;
            case "Experience":
                this.mainManager.myExperimentSetting.experimentSection = ExperimentSection.Experience;
                break;
            default:
                error = true;
                this.errorText.text += "Experiment Section Error\n";
                break;
        }

        switch (this.experimentModeText.text)
        {
            case "Testing":
                this.mainManager.myExperimentSetting.experimentMode = SystemMode.TestingMode;
                break;
            case "Baseline (A)":
                this.mainManager.myExperimentSetting.experimentMode = SystemMode.TrainingMode_Baseline_A;
                break;
            case "Ring (B)":
                this.mainManager.myExperimentSetting.experimentMode = SystemMode.TrainingMode_Ring_B;
                break;
            case "Bar + Ring (C)":
                this.mainManager.myExperimentSetting.experimentMode = SystemMode.TrainingMode_Bar_C;
                break;
            case "Cutout + Ring (D)":
                this.mainManager.myExperimentSetting.experimentMode = SystemMode.TrainingMode_Cutout_D;
                break;
        }

        if (this.mainManager.myExperimentSetting.experimentSection == ExperimentSection.Experience)
        {
            this.mainManager.myExperimentSetting.experimentMode = SystemMode.TrainingMode_Baseline_A;
        }

        for (int i = 0; i < 4; i++)
        {
            try
            {
                this.mainManager.myExperimentSetting.selectedCoachTypes[i] = int.Parse(this.coachTypeOrderTexts[i].text);
            }
            catch (System.Exception e)
            {
                error = true;
                this.errorText.text += e.ToString();
                Debug.Log(e);
            }
        }

        try
        {
            this.mainManager.myExperimentSetting.reactionTimeStandard = float.Parse(this.reactionTimeStandardText.text);
        }
        catch (System.Exception e)
        {
            error = true;
            this.errorText.text += e.ToString();
            Debug.Log(e);
        }

        this.mainManager.myExperimentSetting.selectedSpeed = MovingSpeed.Slowest;

        if (!error)
        {
            this.mainManager.myExperimentSetting.experimentTrial = 0;
            this.mainManager.saveToJSON_experiment(this.mainManager.myExperimentSetting);
            this.mainManager.changeScene("CalibrationScene");
        }
    }
}
