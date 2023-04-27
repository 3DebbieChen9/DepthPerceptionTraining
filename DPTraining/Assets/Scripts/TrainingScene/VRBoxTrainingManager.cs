using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRBoxTrainingManager : MonoBehaviour
{
    [SerializeField]
    private TrainingModeManager trainingModeManager;
    [SerializeField]
    private GameObject gym;
    [SerializeField]
    private GameObject boxingRing;
    [SerializeField]
    private GameObject coachAvatar;

    void Awake() {
        if (this.trainingModeManager == null) {
            this.trainingModeManager = this.gameObject.GetComponent<TrainingModeManager>();
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
        this.trainingModeManager.mainManager.OVRControllerLeft.SetActive(false);
        this.trainingModeManager.mainManager.OVRControllerRight.SetActive(false);
        this.trainingModeManager.mainManager.OVRBoxingLeft.SetActive(true);
        this.trainingModeManager.mainManager.OVRBoxingRight.SetActive(true);

        float y_shift = 1.0f * Convert.ToInt32(this.trainingModeManager.mainManager.mySelectionInfo.isOnRing);
        this.gym.transform.position = new Vector3(this.trainingModeManager.mainManager.sceneOriginPosition.x, this.trainingModeManager.mainManager.sceneOriginPosition.y - y_shift, this.trainingModeManager.mainManager.sceneOriginPosition.z);
        this.gym.transform.rotation = this.trainingModeManager.mainManager.sceneOriginRotation;
        this.coachAvatar.transform.position = new Vector3(this.gym.transform.position.x, this.gym.transform.position.y + y_shift, this.gym.transform.position.z);
        this.gym.SetActive(true);
        this.boxingRing.SetActive(this.trainingModeManager.mainManager.mySelectionInfo.isOnRing);
    }
}
