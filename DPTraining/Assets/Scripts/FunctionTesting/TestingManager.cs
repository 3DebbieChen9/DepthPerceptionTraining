using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TestingManager : MonoBehaviour
{
    public enum TestLevel {
        level_0,
        level_1,
        level_2
    }

    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public SceneBuilding sceneBuildingManager;

    [SerializeField]
    public TestLevel curTestLevel = TestLevel.level_0;
    [SerializeField]
    public GameObject coach;
    [SerializeField]
    public int unitNum = 0;
    [SerializeField]
    public int targetUnitNum = 7;
    [SerializeField]
    public TMP_Text unitNumText;

    [SerializeField]
    public int successCount = 0;
    [SerializeField]
    public bool isSuccess = false;
    [SerializeField]
    public bool reactionTimerOn = false;
    [SerializeField]
    public float reactionTime = 0.0f;
    [SerializeField]
    public float reactionTimeTotal = 0.0f;
    [SerializeField]
    public TMP_Text reactionTimeText;

    [SerializeField]
    public bool isMoving = false;
    [SerializeField]
    private float speed = 0.0f;
    [SerializeField]
    private int movingDirection = 0; // 0: forward, 1: backward

    [SerializeField]
    public float timeTarget = 7.0f;
    [SerializeField]
    public float timeLeft;
    [SerializeField]
    public bool timerOn = false;
    [SerializeField]
    public Image timerCircle;
    [SerializeField]
    public TMP_Text timerText;
    
    [SerializeField]
    public GameObject displayCanvas;
    

    private float coachDistancetoCenter = 1.0f;
    
    [SerializeField]
    public GameObject neuronStickman;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.unitNum = 0;
        this.speed = 0.0f;
        this.movingDirection = 0;
        this.reactionTime = 0.0f;
        this.reactionTimeTotal = 0.0f;
        this.timeTarget = 7.0f;
        
        this.unitNumText.text = "Press 'A' to start";
        this.timerCircle.fillAmount = 0;
        this.timerText.text = "";
        this.reactionTimeText.text = "";
        this.curTestLevel = TestLevel.level_0;

        Vector3 temp = this.displayCanvas.transform.position;
        this.displayCanvas.transform.position = new Vector3(temp.x, temp.y - 1.0f * Convert.ToInt32(!this.systemManager.mySettingInfo.isOnRing), temp.z);
    }

    // Update is called once per frame
    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)) {
            this.systemManager.sceneOrigin.transform.position = this.systemManager.sceneOrigin_poisition;
            this.systemManager.sceneOrigin.transform.rotation = this.systemManager.sceneOrigin_rotation;
            if (this.unitNum < this.targetUnitNum && this.timerOn == false && this.isMoving == false) {
                this.sceneBuildingManager.coachTransformInitial(coachDistancetoCenter);
                this.resetTimer();
                this.unitNum += 1;
                this.unitNumText.text = "Unit: " + this.unitNum.ToString() + "/" + this.targetUnitNum.ToString();
            }
            if(this.unitNum == this.targetUnitNum && this.timerOn == false && this.isMoving == false) {
                this.sceneBuildingManager.coachTransformInitial(coachDistancetoCenter);
                this.unitNumText.text = "Preformance: " + this.successCount.ToString() + "/" + this.targetUnitNum.ToString();
                this.reactionTimeText.text = (this.reactionTimeTotal / (float)this.targetUnitNum).ToString("0.00") + " (s)";
            }
        }

        if(this.timerOn) {
            if (this.timeLeft > 0)
            {
                this.timeLeft -= Time.deltaTime;
                this.timerText.text = this.timeLeft.ToString("0");
                this.timerCircle.fillAmount = this.timeLeft / timeTarget;
            }
            else
            {
                Invoke("coachMovement_level_0", 0.5f);
                // this.coachMovement_level_0();
                Debug.Log("Time's up!");
                this.timerText.text = "Start!";
                this.timerOn = false;
            }
        }
        this.coach.transform.Translate(Vector3.forward * Time.deltaTime * this.speed);
        
        if(this.reactionTimerOn) {
            this.reactionTime += Time.deltaTime;
            this.reactionTimeText.text = this.reactionTime.ToString("0.00") + " (s)";
        }
    }

    public void resetTimer() {
        this.timerText.color = Color.white;
        this.timeLeft = this.timeTarget;
        this.timerOn = true;
        this.isSuccess = false;
        this.reactionTime = 0.0f;
        this.reactionTimeText.text = "";
    }

    public void coachMovement_level_0() {
        // this.timerCanvas.SetActive(false);
        this.timerText.text = "";
        this.reactionTimerOn = true;
        this.movingDirection = UnityEngine.Random.Range(0, 2); 
        if (this.movingDirection == 0) {
            this.speed = 0.5f;
            print("Moving Forward");
        }
        else {
            this.speed = -0.5f;
            print("Moving Backward");
        }
        this.coach.GetComponent<Animation>().Play();

        Invoke("stopMoving", 0.7f);
    }

    public void stopMoving() {
        this.speed = 0.0f;
        this.coach.GetComponent<Animation>().Stop();
        print("Stop");
        Invoke("performanceResult", 3.0f);
    }

    public void performanceResult() {
        this.reactionTimerOn = false;
        if (this.isSuccess) {
            this.timerText.text = "Good";
            this.timerText.color = Color.green;
            this.reactionTimeTotal += this.reactionTime;
        }
        else {
            this.timerText.text = "Fail";
            this.timerText.color = Color.red;
        }
        this.reactionTimeText.text = this.reactionTime.ToString("0.00") + " (s)";
    }
    public void reachTarget(string target) {
        if (this.unitNum != 0 && this.timerOn == false) {
            this.successCount += 1;
            this.isSuccess = true;
            this.performanceResult();
        }
    }

    public void testingInitialize() {
        this.unitNum = 0;
        this.speed = 0.0f;
        this.movingDirection = 0;
        this.reactionTime = 0.0f;
        this.reactionTimeTotal = 0.0f;
        this.timeTarget = 7.0f;
        this.timerOn = false;
        this.reactionTimerOn = false;
        
        this.unitNumText.text = "Press 'A' to start";
        this.timerCircle.fillAmount = 0;
        this.timerText.text = "";
        this.reactionTimeText.text = "";
        this.curTestLevel = TestLevel.level_0;

        Vector3 temp = this.displayCanvas.transform.position;
        this.displayCanvas.transform.position = new Vector3(temp.x, temp.y - 1.0f * Convert.ToInt32(!this.systemManager.mySettingInfo.isOnRing), temp.z);
        print("Testing Initialize");
    }
}
