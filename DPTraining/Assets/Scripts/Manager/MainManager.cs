using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.IO;
using DepthPerceptionSystem;
using Newtonsoft.Json;
using InstructionText;
using Oculus.Interaction;

public class MainManager : MonoBehaviour
{
    [SerializeField]
    public static MainManager Instance;
    [SerializeField]
    public Lanaguage curLanguage = Lanaguage.English;

    [SerializeField]
    public UserInfo myUserInfo;
    [SerializeField]
    public SelectionInfo mySelectionInfo;
    [SerializeField]
    public SettingInfo mySettingInfo;

    [SerializeField]
    public SystemMode curSystemMode = SystemMode.StartMode;

    [SerializeField]
    public Vector3 sceneOriginPosition;
    [SerializeField]
    public Quaternion sceneOriginRotation;

    [SerializeField]
    public GameObject sceneOrigin;

    [SerializeField]
    public GameObject OVRCameraRig;
    [SerializeField]
    public GameObject OVRControllerLeft;
    [SerializeField]
    public GameObject OVRControllerRight;
    [SerializeField]
    public GameObject OVRBoxingLeft;
    [SerializeField]
    public GameObject OVRBoxingRight;
    [SerializeField]
    public Transform BoxingGloveEdgeLeft;
    [SerializeField]
    public Transform BoxingGloveEdgeRight;

    [SerializeField]
    public ActiveStateTracker OVRControllerRayLeft;
    [SerializeField]
    public ActiveStateTracker OVRControllerRayRight;

    [SerializeField]
    public GameObject rightUpperArm_noitom;
    [SerializeField]
    public GameObject rightLowerArm_noitom;
    [SerializeField]
    public GameObject leftUpperArm_noitom;
    [SerializeField]
    public GameObject leftLowerArm_noitom;
    [SerializeField]
    public GameObject rightUpperArm_IK;
    [SerializeField]
    public GameObject rightLowerArm_IK;
    [SerializeField]
    public GameObject leftUpperArm_IK;
    [SerializeField]
    public GameObject leftLowerArm_IK;

    [SerializeField]
    public GameObject userIK;

    [SerializeField]
    public MeshRenderer[] userArmMeshRenderers;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.mainManagerInitialize();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void mainManagerInitialize()
    {
        this.curLanguage = Lanaguage.English;
        this.myUserInfo = new UserInfo();
        this.mySelectionInfo = new SelectionInfo();
        this.mySettingInfo = new SettingInfo();
        this.curSystemMode = SystemMode.StartMode;

        this.sceneOriginPosition = new Vector3(0.0f, 0.0f, 0.0f);
        this.sceneOriginRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
        this.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;

        this.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = true;
        this.enableUserArmMeshRenderers(false);
        this.OVRControllerRayLeft.RayInteractorSwitch(false);
        this.OVRControllerRayRight.RayInteractorSwitch(false);
        // this.loadFromJSON_setting();
    }

    public void resizeUserIK()
    {
        // float userAvatarDefaultHeight = 1.82747f;
        float userAvatarDefaultHeight = 1.82f;
        float scale = this.myUserInfo.userBodySize.height / userAvatarDefaultHeight;
        this.userIK.GetComponent<RootMotion.Demos.VRIKCalibrationBasic>().scaleMlp = scale;
        this.userIK.GetComponent<RootMotion.FinalIK.VRIK>().solver.scale = scale;
        // this.userIK.transform.localScale = new Vector3(scale, scale, scale);
    }
    public void enableUserArmMeshRenderers(bool enable)
    {
        foreach (MeshRenderer meshRenderer in userArmMeshRenderers)
        {
            meshRenderer.enabled = enable;
        }
    }

    public float[] calculateLowArmToUpArmAngle(Transform upArm, Transform lowArm)
    {
        Vector3 upArmToLowArmNormalized = (lowArm.position - upArm.position).normalized;

        float angle_forward = Vector3.Angle(lowArm.forward, -upArmToLowArmNormalized);
        float angle_up = Vector3.Angle(lowArm.up, -upArmToLowArmNormalized);
        float angle_right = Vector3.Angle(lowArm.right, -upArmToLowArmNormalized);

        return new float[] { angle_forward, angle_up, angle_right };
    }

    public void getHandStraightDefaultAngle(Hand hand)
    {
        if (hand == Hand.Right)
        {
            float[] anglesNoitom = this.calculateLowArmToUpArmAngle(this.rightUpperArm_noitom.transform, this.rightLowerArm_noitom.transform);
            this.myUserInfo.userArmStraightAngle.rightNoitom.forward = anglesNoitom[0];
            this.myUserInfo.userArmStraightAngle.rightNoitom.up = anglesNoitom[1];
            this.myUserInfo.userArmStraightAngle.rightNoitom.right = anglesNoitom[2];

            float[] anglesIK = this.calculateLowArmToUpArmAngle(this.rightUpperArm_IK.transform, this.rightLowerArm_IK.transform);
            this.myUserInfo.userArmStraightAngle.rightIK.forward = anglesIK[0];
            this.myUserInfo.userArmStraightAngle.rightIK.up = anglesIK[1];
            this.myUserInfo.userArmStraightAngle.rightIK.right = anglesIK[2];
        }
        else
        {
            float[] anglesNoitom = this.calculateLowArmToUpArmAngle(this.leftUpperArm_noitom.transform, this.leftLowerArm_noitom.transform);
            this.myUserInfo.userArmStraightAngle.leftNoitom.forward = anglesNoitom[0];
            this.myUserInfo.userArmStraightAngle.leftNoitom.up = anglesNoitom[1];
            this.myUserInfo.userArmStraightAngle.leftNoitom.right = anglesNoitom[2];

            float[] anglesIK = this.calculateLowArmToUpArmAngle(this.leftUpperArm_IK.transform, this.leftLowerArm_IK.transform);
            this.myUserInfo.userArmStraightAngle.leftIK.forward = anglesIK[0];
            this.myUserInfo.userArmStraightAngle.leftIK.up = anglesIK[1];
            this.myUserInfo.userArmStraightAngle.leftIK.right = anglesIK[2];
        }

    }

    public void sceneOriginColorChange(bool isCenter)
    {
        if (isCenter)
        {
            Color newColor = new Color(0.12f, 0.53f, 0.14f, 0.56f);
            // this.sceneOrigin.GetComponent<MeshRenderer>().material.color = newColor;
            this.sceneOrigin.GetComponent<Renderer>().material.SetColor("_Color", newColor);
            Debug.Log("Scene Origin change color to GREEN");
        }
        else
        {
            Color newColor = new Color(1.0f, 0.0f, 0.0f, 0.56f);
            // this.sceneOrigin.GetComponent<MeshRenderer>().material.color = newColor;
            this.sceneOrigin.GetComponent<Renderer>().material.SetColor("_Color", newColor);
            Debug.Log("Scene Origin change color to RED");
        }
    }

    public void changeScene(string sceneName)
    {
        foreach (Transform child in this.OVRBoxingLeft.transform)
        {
            if (child.gameObject.tag == "LightBall")
            {
                child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
            }
        }

        foreach (Transform child in this.OVRBoxingRight.transform)
        {
            if (child.gameObject.tag == "LightBall")
            {
                child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
            }
        }

        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }

    public void saveToJSON_user(UserInfo userInfo)
    {
        string jsonString = JsonConvert.SerializeObject(userInfo);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_UserInfo.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"UserInfo saved to {filePath}");
    }
    public void saveToJSON_selection(SelectionInfo selectionInfo)
    {
        string jsonString = JsonConvert.SerializeObject(selectionInfo);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_SelectionInfo.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"SelectionInfo saved to {filePath}");
    }
    public void saveToJSON_setting(SettingInfo settingInfo)
    {
        string jsonString = JsonConvert.SerializeObject(settingInfo);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_SettingInfo.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"SettingInfo saved to {filePath}");
    }
    public void saveToJSON_testResult(TotalUnitResult testResult)
    {
        string jsonString = JsonConvert.SerializeObject(testResult);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string mode = this.mySelectionInfo.selectedMode == SystemMode.TestingMode ? "Test" : "Training";
        string filePath = $"{Application.persistentDataPath}/{dateTime}_{mode}TotalResult.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"{mode}Result saved to {filePath}");
    }
    public void saveToJSON_unitResult(UnitResult unitResult, int unitNum)
    {
        string jsonString = JsonConvert.SerializeObject(unitResult);
        string dateTime = System.DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss");
        string filePath = $"{Application.persistentDataPath}/{dateTime}_UniResult_{unitNum}.json";
        File.WriteAllText(filePath, jsonString);

        Debug.Log($"UnitResult_{unitNum} saved to {filePath}");
    }
    public void loadFromJSON_setting()
    {
        string fileName = "SettingInfo_2020-11-18 15_00_00"; // TODO: get file name
        TextAsset jsonFile = Resources.Load<TextAsset>(fileName);
        this.mySettingInfo = JsonConvert.DeserializeObject<SettingInfo>(jsonFile.text);

        Debug.Log($"SettingInfo loaded from {fileName}");
    }
}
