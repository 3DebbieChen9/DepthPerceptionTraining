using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SystemManager : MonoBehaviour
{
    public class UserInfo 
    {
        // public float avgUpperArmLength; // in meters
        // public float avgForeArmLength; // in meters
        public float avgArmLength; // in meters
        public float avgCenterEyeToControllerLength; // in meters
        public float idlePoseRadius; // in meters
        public float userHeight; // in meters
        
        public float straightAngle_forward_R_noitom;
        public float straightAngle_forward_L_noitom;
        public float straightAngle_up_R_noitom;
        public float straightAngle_up_L_noitom;
        public float straightAngle_right_R_noitom;
        public float straightAngle_right_L_noitom;

        public float straightAngle_forward_R_finalIK;
        public float straightAngle_forward_L_finalIK;
        public float straightAngle_up_R_finalIK;
        public float straightAngle_up_L_finalIK;
        public float straightAngle_right_R_finalIK;
        public float straightAngle_right_L_finalIK;

        public float handStraight_tolerateAngleThreshold;
        
        public UserInfo(float _avgArmLength, float _avgCenterEyeToControllerLength, float _idlePoseRadius, float _userHeight) {
            this.avgArmLength = _avgArmLength;
            this.avgCenterEyeToControllerLength = _avgCenterEyeToControllerLength;
            this.idlePoseRadius = _idlePoseRadius;
            this.userHeight = _userHeight;
            this.straightAngle_forward_R_noitom = 90.0f;
            this.straightAngle_forward_R_finalIK = 90.0f;
            this.straightAngle_forward_L_noitom = 90.0f;
            this.straightAngle_forward_L_finalIK = 90.0f;
            this.straightAngle_up_R_noitom = 90.0f;
            this.straightAngle_up_R_finalIK = 90.0f;
            this.straightAngle_up_L_noitom = 90.0f;
            this.straightAngle_up_L_finalIK = 90.0f;
            this.straightAngle_right_R_noitom = 180.0f;
            this.straightAngle_right_R_finalIK = 180.0f;
            this.straightAngle_right_L_noitom = 0.0f;
            this.straightAngle_right_L_finalIK = 0.0f;
            this.handStraight_tolerateAngleThreshold = 10.0f;
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
        public float avgLengthInVR; // movable range length in VR in meters

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
        public bool targetIsLeftHanded;
        public bool isUsingNoitom;
        public float tolerateRaduisBetweenOriginAndUser;
        public float userBodyRadius;
        
        public SystemMode targetSystemMode;
        public List<SystemMode> modeWithSceneBuildCoach = new List<SystemMode>();

        public SettingInfo() {
            this.isOnRing = false;
            this.targetIsLeftHanded = true;
            this.isUsingNoitom = false;
            this.tolerateRaduisBetweenOriginAndUser = 0.15f;
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
    public UserInfo myUserInfo = new UserInfo(0.44f, 0.60f, 0.45f, 1.6f);
    [SerializeField]
    public GameObject userAvatar;
    [SerializeField]
    public GameObject userIdlePose;
    [SerializeField]
    public GameObject userInitialPosition;
    [SerializeField]
    public GameObject userCenterPosition;

    [SerializeField]
    public MovableRangeInfo myMovableRangeInfo = new MovableRangeInfo();
    [SerializeField]
    public SettingInfo mySettingInfo = new SettingInfo();

    [SerializeField]
    public GameObject sceneOrigin;
    // [SerializeField]
    // public Transform sceneOriginTransform;
    [SerializeField]
    public Vector3 sceneOrigin_poisition;
    [SerializeField]
    public Quaternion sceneOrigin_rotation;

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
    public TestingModeManager testingModeManager;
    // [SerializeField]
    // public TestingManager testingManager;
    
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
        this.userArmRenderManager.userAvatarMeshSetActive(false);
        this.userIdlePose.GetComponent<CapsuleCollider>().radius = this.myUserInfo.idlePoseRadius;
        this.userIdlePose.GetComponent<CapsuleCollider>().height = this.myUserInfo.userHeight;
        this.userIdlePose.GetComponent<CapsuleCollider>().center = new Vector3(0.0f, this.myUserInfo.userHeight / 2.0f, 0.0f);
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

        if (this.testingModeManager == null && this.curSystemMode == SystemMode.Testing) {
            this.testingModeManager = GameObject.Find("TestingModeManager").GetComponent<TestingModeManager>();
        }

        if (this.curSystemMode != SystemMode.Calibration_MovableSize && this.curSystemMode != SystemMode.Calibration_ArmLength) {
             this.userAvatar.transform.position = new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.userAvatar.transform.position.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
             this.userAvatar.transform.rotation = Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
             this.userIdlePose.transform.position = new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.userIdlePose.transform.position.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
             this.userIdlePose.transform.rotation = Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
             this.userCenterPosition.transform.position = new Vector3(this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, this.userCenterPosition.transform.position.y, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z);
             this.userCenterPosition.transform.rotation = Quaternion.Euler(0.0f, this.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, 0.0f);
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (this.curSystemMode == SystemMode.Calibration_MovableSize) {
                // this.consoleTitle.text = "Calibration: Distance";
                this.calibrationManager.calibrateMovableSize();
            }
            else if (this.curSystemMode == SystemMode.Calibration_ArmLength) {
                // this.consoleTitle.text = "Calibration: Arm Length";
                // this.consoleText.text = "";
                this.calibrationManager.calibrateArmLength();
            }
            else if (this.curSystemMode == SystemMode.Calibration_IdlePose) {
                // this.consoleTitle.text = "Calibration: Idle Pose";
                // this.consoleText.text = "";
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
                this.sceneBuildingManager.SceneInitialization();
                this.testingModeManager.testingModeInitial();
                this.testingModeManager.targetManager.targetMoveToInitial();
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
