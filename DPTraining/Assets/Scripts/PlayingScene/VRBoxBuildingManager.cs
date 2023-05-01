using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRBoxBuildingManager : MonoBehaviour
{
    // [SerializeField]
    // private MainManager mainManager;
    [SerializeField]
    private PlayingModeManager playingModeManager;
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
        if (this.playingModeManager == null) {
            this.playingModeManager = this.gameObject.GetComponent<PlayingModeManager>();
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
        this.playingModeManager.mainManager.OVRControllerLeft.SetActive(false);
        this.playingModeManager.mainManager.OVRControllerRight.SetActive(false);
        this.playingModeManager.mainManager.OVRBoxingLeft.SetActive(true);
        this.playingModeManager.mainManager.OVRBoxingRight.SetActive(true);

        float y_shift = 1.0f * Convert.ToInt32(this.playingModeManager.mainManager.mySelectionInfo.isOnRing);
        this.gym.transform.position = new Vector3(this.playingModeManager.mainManager.sceneOriginPosition.x, this.playingModeManager.mainManager.sceneOriginPosition.y - y_shift, this.playingModeManager.mainManager.sceneOriginPosition.z);
        this.gym.transform.rotation = this.playingModeManager.mainManager.sceneOriginRotation;
        this.coachStickman.transform.position = new Vector3(this.gym.transform.position.x, this.gym.transform.position.y + y_shift, this.gym.transform.position.z);
        this.gym.SetActive(true);
        this.boxingRing.SetActive(this.playingModeManager.mainManager.mySelectionInfo.isOnRing);
    }
}
