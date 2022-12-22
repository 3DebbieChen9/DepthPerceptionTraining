using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SystemManager : MonoBehaviour
{
    public enum SystemMode {
        Calibration_Size,
        Calibration_MoCap,
        Mode_Selection,
        Testing,
        Training_Traditional,
        Training_Hint,
    }
    
    [SerializeField]
    public static SystemManager Instance;

    [SerializeField]
    public SystemMode curSystemMode = SystemMode.Calibration_Size;

    [SerializeField] 
    public GameObject OVRCameraRig;

    [SerializeField]
    public CalibrationManager calibrationManager;
    [SerializeField]
    public ModeSelection modeSelectionManager;
    [SerializeField]
    public SceneBuilding sceneBuildingManager;
    [SerializeField]
    public CoachMotionManager coachMotionManager;

    [SerializeField]
    public bool isOnRing = false;
    [SerializeField]
    public SystemMode targetSystemMode = SystemMode.Training_Traditional;
    private List<SystemMode> modeWithSceneBuildCoach = new List<SystemMode>();

    [SerializeField]
    public float scaleTransferFactor = 1.0f; // vr-distance / real-distance
    [SerializeField]
    public float referenceDistance = 2.0f; // in meters
    [SerializeField]
    public float avgDistance = 0.0f; // in meters
    [SerializeField]
    public float avgArmLength = 0.0f; // in meters

    [SerializeField]
    public GameObject sceneOrigin;
    [SerializeField]
    public Vector3 sceneHorizontalDirection;
    [SerializeField]
    public Vector3 sceneVerticalDirection;
    [SerializeField]
    public Vector3 sceneLeftBottomCorner;
    [SerializeField]
    public Vector3 sceneLeftUpperCorner;
    [SerializeField]
    public Vector3 sceneRightUpperCorner;


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
        modeWithSceneBuildCoach.Add(SystemMode.Testing);
        modeWithSceneBuildCoach.Add(SystemMode.Training_Traditional);
        modeWithSceneBuildCoach.Add(SystemMode.Training_Hint);
    }

    // Update is called once per frame
    void Update()
    {
        if (this.OVRCameraRig == null) {
            this.OVRCameraRig = GameObject.Find("OVRCameraRig");
        }

        if (this.calibrationManager == null && this.curSystemMode == SystemMode.Calibration_Size) {
            this.calibrationManager = GameObject.Find("CalibrationManager").GetComponent<CalibrationManager>();
        }

        if (this.modeSelectionManager == null && this.curSystemMode == SystemMode.Mode_Selection) {
            this.modeSelectionManager = GameObject.Find("ModeSelection").GetComponent<ModeSelection>();
        }

        if (this.sceneBuildingManager == null && this.modeWithSceneBuildCoach.Contains(this.curSystemMode)) {
            this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        }

        if (this.coachMotionManager == null && this.modeWithSceneBuildCoach.Contains(this.curSystemMode)) {
            this.coachMotionManager = GameObject.Find("CoachMotionManager").GetComponent<CoachMotionManager>();
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (this.curSystemMode == SystemMode.Calibration_Size) {
                this.consoleTitle.text = "Calibration: Distance";
                this.calibrationManager.calibrateSize();
                
            }
            else if (this.curSystemMode == SystemMode.Calibration_MoCap) {
                this.calibrationManager.clearCalibrationMarkers();
                this.consoleTitle.text = "Mode Selection";
                this.consoleText.text = "";
                this.changeSystemMode(SystemMode.Mode_Selection);
                this.changeScene("ModeSelection");
            }
            else if (this.curSystemMode == SystemMode.Training_Traditional) {
                if (this.coachMotionManager.isMoving) {
                    this.coachMotionManager.stopMoving();
                }
                else {
                    this.coachMotionManager.startMoving();
                }
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            if (this.curSystemMode == SystemMode.Training_Traditional) {
                this.coachMotionManager.switchDirection();
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
