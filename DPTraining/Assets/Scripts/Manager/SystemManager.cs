using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SystemManager : MonoBehaviour
{
    public class UserSizeInfo 
    {
        public float avgUpperArmLength; // in meters
        public float avgForeArmLength; // in meters
        public float avgCenterEyeToControllerLength; // in meters
        public float idlePoseRadius; // in meters
        public float idlePoseHeight; // in meters
        
        public UserSizeInfo(float _avgUpperArmLength, float _avgForeArmLength, float _idlePoseRadius, float _idlePoseHeight) {
            this.avgUpperArmLength = _avgUpperArmLength;
            this.avgForeArmLength = _avgForeArmLength;
            this.idlePoseRadius = _idlePoseRadius;
            this.idlePoseHeight = _idlePoseHeight;
        }
    }

    public class MovableRangeInfo
    {
        public Vector3 horizontalDirection;
        public Vector3 verticalDirection;
        public Vector3 leftBottomCorner;
        public Vector3 leftUpperCorner;
        public Vector3 rightUpperCorner;

        public float referenceRanageLength; // in meters
        public float avgLengthInVR; // in meters

        public MovableRangeInfo() {
            this.horizontalDirection = new Vector3(0.0f, 0.0f, 0.0f);
            this.verticalDirection = new Vector3(0.0f, 0.0f, 0.0f);
            this.leftBottomCorner = new Vector3(0.0f, 0.0f, 0.0f);
            this.leftUpperCorner = new Vector3(0.0f, 0.0f, 0.0f);
            this.rightUpperCorner = new Vector3(0.0f, 0.0f, 0.0f);

            this.referenceRanageLength = 2.0f;
            this.avgLengthInVR = 0.0f;
        }
    }

    public class SettingInfo
    {
        public bool isOnRing;
        public bool targetIsRightHanded;
        public float tolerateRaduisBetweenOriginAndUser;
        public SystemMode targetSystemMode;
        public List<SystemMode> modeWithSceneBuildCoach = new List<SystemMode>();

        public SettingInfo() {
            this.isOnRing = false;
            this.targetIsRightHanded = true;
            this.tolerateRaduisBetweenOriginAndUser = 0.3f;
            this.targetSystemMode = SystemMode.Testing;

            this.modeWithSceneBuildCoach.Add(SystemMode.Testing);
            this.modeWithSceneBuildCoach.Add(SystemMode.Training_Traditional);
            this.modeWithSceneBuildCoach.Add(SystemMode.Training_Hint);
        }
    }

    public enum SystemMode {
        Calibration_MovableSize,
        Calibration_ArmLength,
        Calibration_IdlePose,
        Mode_Selection,
        Testing,
        Training_Traditional,
        Training_Hint,
    }

    public enum MovingDirection {
        initial,
        forward,
        backward,
    }
    
    [SerializeField]
    public static SystemManager Instance;

    [SerializeField]
    public SystemMode curSystemMode = SystemMode.Calibration_MovableSize;

    [SerializeField]
    public UserSizeInfo myUserSizeInfo = new UserSizeInfo(0.21f, 0.23f, 0.45f, 1.6f);
    [SerializeField]
    public GameObject userIdlePose;
    [SerializeField]
    public GameObject userInitialPosition;

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
    public UserArmRenderManager userArmRenderManager;

    [SerializeField]
    public CalibrationManager calibrationManager;
    [SerializeField]
    public ModeSelection modeSelectionManager;
    [SerializeField]
    public SceneBuilding sceneBuildingManager;
    [SerializeField]
    public TestingManager testingManager;
    
    [SerializeField]
    public SettingInfo mySettingInfo = new SettingInfo();

    [SerializeField]
    public GameObject sceneOrigin;
    [SerializeField]
    public MovableRangeInfo myMovableRangeInfo = new MovableRangeInfo();
    [SerializeField]
    public float scaleTransferFactor = 1.0f; // vr-distance / real-distance

    [SerializeField]
    public TextMesh consoleTitle;
    [SerializeField]
    public TextMesh consoleText;
    

    private void Awake() 
    {
        if (Instance == null) {
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else {
            Destroy(this.gameObject);
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        this.userArmRenderManager.userAvatar.SetActive(false);
        this.userIdlePose.GetComponent<CapsuleCollider>().radius = this.myUserSizeInfo.idlePoseRadius;
        this.userIdlePose.GetComponent<CapsuleCollider>().height = this.myUserSizeInfo.idlePoseHeight;
        this.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.myUserSizeInfo.idlePoseHeight / 2.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        if (this.OVRCameraRig == null) {
            this.OVRCameraRig = GameObject.Find("OVRCameraRig");
        }

        if (this.calibrationManager == null && this.curSystemMode == SystemMode.Calibration_MovableSize) {
            this.calibrationManager = GameObject.Find("CalibrationManager").GetComponent<CalibrationManager>();
        }

        if (this.modeSelectionManager == null && this.curSystemMode == SystemMode.Mode_Selection) {
            this.modeSelectionManager = GameObject.Find("ModeSelection").GetComponent<ModeSelection>();
        }

        // if (this.sceneBuildingManager == null && this.mySettingInfo.modeWithSceneBuildCoach.Contains(this.curSystemMode)) {
        if (this.sceneBuildingManager == null && (this.curSystemMode == SystemMode.Testing || this.curSystemMode == SystemMode.Training_Traditional || this.curSystemMode == SystemMode.Training_Hint)) {
            this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        }

        if (this.testingManager == null && this.curSystemMode == SystemMode.Testing) {
            this.testingManager = GameObject.Find("TestingModeManager").GetComponent<TestingManager>();
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (this.curSystemMode == SystemMode.Calibration_MovableSize) {
                this.consoleTitle.text = "Calibration: Distance";
                this.calibrationManager.calibrateMovableSize();
            }
            else if (this.curSystemMode == SystemMode.Calibration_ArmLength) {
                this.consoleTitle.text = "Calibration: Arm Length";
                this.consoleText.text = "";
                this.calibrationManager.calibrateArmLength();
            }
            else if (this.curSystemMode == SystemMode.Calibration_IdlePose) {
                this.consoleTitle.text = "Calibration Idle Pose";
                this.consoleText.text = "";
                this.calibrationManager.calibrateIdlePose();
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            if (this.curSystemMode == SystemMode.Calibration_MovableSize) {
                this.calibrationManager.CalibrationInitialize();
            }
            else if (this.curSystemMode == SystemMode.Calibration_ArmLength) {
                this.calibrationManager.calibrationArmLengthInitialize();
            }
            else if (this.curSystemMode == SystemMode.Testing) {
                this.testingManager.testingInitialize();
            }
        }
        
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            this.passthroughSwitch();
        }

    }

    private void passthroughSwitch() {
        this.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled = !this.OVRCameraRig.GetComponent<OVRManager>().isInsightPassthroughEnabled;
    }

    public void changeSystemMode(SystemMode curMode) {
        this.curSystemMode = curMode;
    }

    public void changeScene(string sceneName)
    {
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }
}
