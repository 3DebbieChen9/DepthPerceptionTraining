using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRBoxBuildingManager : MonoBehaviour
{
    [SerializeField]
    private MainManager mainManager;
    [SerializeField]
    private GameObject gym;
    [SerializeField]
    private GameObject boxingRing;

    void Awake() {
        if (this.mainManager == null) {
            this.mainManager = GameObject.Find("MainManager").GetComponent<MainManager>();
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
        this.mainManager.OVRControllerLeft.SetActive(false);
        this.mainManager.OVRControllerRight.SetActive(false);
        this.mainManager.OVRBoxingLeft.SetActive(true);
        this.mainManager.OVRBoxingRight.SetActive(true);

        float y_shift = 1.0f * Convert.ToInt32(this.mainManager.mySelectionInfo.isOnRing);
        this.gym.transform.position = new Vector3(this.mainManager.sceneOriginPosition.x, this.mainManager.sceneOriginPosition.y - y_shift, this.mainManager.sceneOriginPosition.z);
        this.gym.transform.rotation = this.mainManager.sceneOriginRotation;
        this.gym.SetActive(true);
        this.boxingRing.SetActive(this.mainManager.mySelectionInfo.isOnRing);
    }
}
