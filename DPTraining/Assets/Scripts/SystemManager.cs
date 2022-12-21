using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SystemManager : MonoBehaviour
{
    public enum SystemMode {
        Calibration_Size,
        Calibration_Noitom,
        Mode_Selection,
        Testing,
        Training,
    }
    
    [SerializeField]
    public static SystemManager Instance;

    [SerializeField]
    public SystemMode cur_systemMode = SystemMode.Calibration_Size;

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
        
    }

    // Update is called once per frame
    void Update()
    {
        if (this.OVRCameraRig == null) {
            this.OVRCameraRig = GameObject.Find("OVRCameraRig");
        }

        if (this.calibrationManager == null && this.cur_systemMode == SystemMode.Calibration_Size) {
            this.calibrationManager = GameObject.Find("CalibrationManager").GetComponent<CalibrationManager>();
        }

        if (this.modeSelectionManager == null && this.cur_systemMode == SystemMode.Mode_Selection) {
            this.modeSelectionManager = GameObject.Find("ModeSelection").GetComponent<ModeSelection>();
        }

        if (this.sceneBuildingManager == null && (this.cur_systemMode == SystemMode.Training || this.cur_systemMode == SystemMode.Testing)) {
            this.sceneBuildingManager = GameObject.Find("SceneBuilding").GetComponent<SceneBuilding>();
        }

        if (this.coachMotionManager == null && (this.cur_systemMode == SystemMode.Training || this.cur_systemMode == SystemMode.Testing)) {
            this.coachMotionManager = GameObject.Find("CoachMotionManager").GetComponent<CoachMotionManager>();
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (this.cur_systemMode == SystemMode.Calibration_Size) {
                this.consoleTitle.text = "Calibration: Distance";
                this.calibrationManager.calibrateSize();
                
            }
            else if (this.cur_systemMode == SystemMode.Calibration_Noitom) {
                this.calibrationManager.clearCalibrationMarkers();
                this.consoleTitle.text = "Training";
                this.consoleText.text = "-";
                this.changeSystemMode(SystemMode.Mode_Selection);
                this.changeScene("ModeSelection");
                // this.consoleTitle.text = "Training";
                // this.consoleText.text = "-";
                // this.changeSystemMode(SystemMode.Training);
                // this.changeScene("Training");
            }
            else if (this.cur_systemMode == SystemMode.Training) {
                if (this.coachMotionManager.isMoving) {
                    this.coachMotionManager.stopMoving();
                }
                else {
                    this.coachMotionManager.startMoving();
                }
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.RTouch)) {
            if (this.cur_systemMode == SystemMode.Training) {
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
        this.cur_systemMode = curMode;
    }

    public void changeScene(string sceneName)
    {
        Debug.Log("Change Scene to " + sceneName);
        SceneManager.LoadScene(sceneName);
    }
}
