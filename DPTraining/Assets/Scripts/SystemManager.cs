using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SystemManager : MonoBehaviour
{
    public enum SystemMode {
        Calibration_Size,
        Calibration_ArmLength,
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
    public SceneBuilding sceneBuilding;

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
        this.systemInitialize();
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            if (this.cur_systemMode == SystemMode.Calibration_Size) {
                this.consoleTitle.text = "Calibration: Distance";
                this.calibrationManager.calibrateSize();
                
            }
            else if (this.cur_systemMode == SystemMode.Calibration_ArmLength) {
                this.consoleTitle.text = "Calibration: Arm Length";
                this.calibrationManager.calibrateArmLength();
            }
        }

        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.LTouch)) {
            this.passthroughSwitch();
        }

        if (OVRInput.GetDown(OVRInput.Button.Two, OVRInput.Controller.LTouch)) {
            this.calibrationManager.CalibrationInitialize();
        } 

    }

    public void systemInitialize() {
        this.calibrationManager.CalibrationInitialize();
        this.sceneBuilding.SceneInitialization();
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
