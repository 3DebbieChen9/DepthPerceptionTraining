using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class TrainingModeManager : MonoBehaviour
{
    [SerializeField]
    public MainManager mainManager;
    [SerializeField]
    public TrainingUIManager UIManager;
    [SerializeField]
    private EvaluationManager evaluationManager;
    [SerializeField]
    public CoachManager coachManager;

    [SerializeField]
    private Timer reactionTimer;
    [SerializeField]
    private Timer readyTimer;
    [SerializeField]
    private Timer tentativeTimer;
    
    [SerializeField]
    private TrainingState curState = TrainingState.idle;

    [SerializeField]
    private int targetNumberOfTasks;
    [SerializeField]
    public int curUnitNum;
    [SerializeField]
    public TotalUnitResult myTestResult;
    [SerializeField]
    public UnitResult curUnitResult;
    [SerializeField]
    private bool reactionOverTime = false;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        }
        if (this.UIManager == null) {
            this.UIManager = this.gameObject.GetComponent<TrainingUIManager>();
        }
        if (this.evaluationManager == null) {
            this.evaluationManager = this.gameObject.GetComponent<EvaluationManager>();
        }
        if (this.coachManager == null) {
            this.coachManager = this.gameObject.GetComponent<CoachManager>();
        }    
    }

    // Start is called before the first frame update
    void Start()
    {
        this.reactionTimer = new Timer(false, false, this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit, 0.0f);
        this.readyTimer = new Timer(false, true, this.mainManager.mySettingInfo.testingModeSetting.readyTime, this.mainManager.mySettingInfo.testingModeSetting.readyTime);
        float firstTentativeTime  = UnityEngine.Random.Range(this.mainManager.mySettingInfo.testingModeSetting.tentativeTimeMin, this.mainManager.mySettingInfo.testingModeSetting.tentativeTimeMax);
        this.tentativeTimer = new Timer(false, true, firstTentativeTime, firstTentativeTime);
        this.myTestResult = new TotalUnitResult();
        this.curUnitResult = new UnitResult();
        this.trainingSceneInitialized();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void trainingSceneInitialized() {
        this.curState = TrainingState.idle;

        this.targetNumberOfTasks = this.mainManager.mySettingInfo.testingModeSetting.targetNumberOfTasks;
        this.readyTimer.timeLeft = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        this.readyTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.readyTime;
        this.reactionTimer.timeLeft = 0.0f;
        this.reactionTimer.timeTarget = this.mainManager.mySettingInfo.testingModeSetting.unitTimeLimit;
        this.curUnitNum = 1;

        this.myTestResult.reset();
        this.myTestResult.numberOfTasks = this.targetNumberOfTasks;
        this.curUnitResult.reset();
        this.reactionOverTime = false;

        this.reactionTimer.ResetTimer();
        this.readyTimer.ResetTimer();

        this.evaluationManager.evaluationStatusInitialize();

        this.mainManager.OVRControllerRayLeft.RayInteractorSwitch(false);
        this.mainManager.OVRControllerRayRight.RayInteractorSwitch(false);

        // [----] UI: Welcome View
        // this.UIManager.welcomeToTrainingMode(this.targetNumberOfTasks, this.mainManager.curSystemMode, );
    }
}
