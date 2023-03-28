using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRBoxBuildingManager : MonoBehaviour
{
    // [SerializeField]
    // private MainManager mainManager;
    [SerializeField]
    private TestingModeManager testingModeManager;
    [SerializeField]
    private GameObject gym;
    [SerializeField]
    private GameObject boxingRing;
    [SerializeField]
    private GameObject coachStickman;

    void Awake() {
        // if (this.mainManager == null) {
        //     this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
        // }
        if (this.testingModeManager == null) {
            this.testingModeManager = this.gameObject.GetComponent<TestingModeManager>();
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        this.vrBoxBuildingInitialize();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void vrBoxBuildingInitialize() {
        this.testingModeManager.mainManager.OVRControllerLeft.SetActive(false);
        this.testingModeManager.mainManager.OVRControllerRight.SetActive(false);
        this.testingModeManager.mainManager.OVRBoxingLeft.SetActive(true);
        this.testingModeManager.mainManager.OVRBoxingRight.SetActive(true);

        float y_shift = 1.0f * Convert.ToInt32(this.testingModeManager.mainManager.mySelectionInfo.isOnRing);
        this.gym.transform.position = new Vector3(this.testingModeManager.mainManager.sceneOriginPosition.x, this.testingModeManager.mainManager.sceneOriginPosition.y - y_shift, this.testingModeManager.mainManager.sceneOriginPosition.z);
        this.gym.transform.rotation = this.testingModeManager.mainManager.sceneOriginRotation;
        this.coachStickman.transform.position = new Vector3(this.gym.transform.position.x, this.gym.transform.position.y + y_shift, this.gym.transform.position.z);
        this.gym.SetActive(true);
        this.boxingRing.SetActive(this.testingModeManager.mainManager.mySelectionInfo.isOnRing);
    }
}
