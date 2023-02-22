using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneBuilding : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;

    [SerializeField]
    public GameObject gym;
    [SerializeField]
    public GameObject boxingRing;
    [SerializeField]
    public GameObject movablePlaneOnFloor;
    [SerializeField]
    public GameObject movablePlaneOnRing;
    
    [SerializeField]
    public GameObject coach;
    // [SerializeField]
    // public GameObject userModel;
    
    [SerializeField]
    private LineRenderer[] verticalLines;
    [SerializeField]
    private LineRenderer[] horizontalLines;

    private bool isStarted = false;
    
    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        // this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;
        // this.sceneBuildingStart();
    }

    private void sceneBuildingStart() {
        this.isStarted = true;
        this.systemManager.OVRControllerLeft.SetActive(false);
        this.systemManager.OVRControllerRight.SetActive(false);
        this.systemManager.OVRBoxingLeft.SetActive(true);
        this.systemManager.OVRBoxingRight.SetActive(true);
        this.SceneInitialization();
        this.BuildTheScene();
    }
    // Update is called once per frame
    void Update()
    {
        if (systemManager != null && !this.isStarted) {
            this.sceneBuildingStart();
        }
    }
    public void SceneInitialization() {
        this.gym.SetActive(false);
        foreach(LineRenderer line in this.verticalLines) {
            line.gameObject.SetActive(false);
        }
        foreach(LineRenderer line in this.horizontalLines) {
            line.gameObject.SetActive(false);
        }
    }

    public void BuildTheScene() {
        
        this.boxingSceneTransform();
        this.gym.SetActive(true);
        this.boxingRing.SetActive(this.systemManager.mySettingInfo.isOnRing);
        this.movablePlaneOnRing.SetActive(this.systemManager.mySettingInfo.isOnRing);
        this.movablePlaneOnFloor.SetActive(!this.systemManager.mySettingInfo.isOnRing);

        // this.drawBoundsLines();
        // this.systemManager.sceneOrigin.GetComponent<MeshRenderer>().enabled = false;

        // this.coachTransformInitial(2.5f);
        // this.coach.SetActive(true);
    }

    void boxingSceneTransform() {
        float y_shift = 1.0f * Convert.ToInt32(this.systemManager.mySettingInfo.isOnRing) + 0.01f;
        // float y_shift = 1.0f * Convert.ToInt32(this.systemManager.isOnRing) - 0.02f;
        // float y_shift = 1.0f * Convert.ToInt32(this.systemManager.isOnRing);
        this.gym.transform.position = new Vector3 (this.systemManager.sceneOrigin.transform.position.x,
                                                    this.systemManager.sceneOrigin.transform.position.y - y_shift,
                                                    this.systemManager.sceneOrigin.transform.position.z);
        this.gym.transform.rotation = this.systemManager.sceneOrigin.transform.rotation;

        // this.movablePlaneOnFloor.transform.localScale = new Vector3 (this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor,
        //                                                     0.001f,
        //                                                     this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
        // this.movablePlaneOnRing.transform.localScale = new Vector3 (this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor,
        //                                                     0.001f,
        //                                                     this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
        this.movablePlaneOnFloor.transform.localScale = new Vector3 (this.systemManager.myMovableRangeInfo.avgLengthInVR * this.systemManager.scaleTransferFactor,
                                                            0.001f,
                                                            this.systemManager.myMovableRangeInfo.avgLengthInVR * this.systemManager.scaleTransferFactor);
        this.movablePlaneOnRing.transform.localScale = new Vector3 (this.systemManager.myMovableRangeInfo.avgLengthInVR * this.systemManager.scaleTransferFactor,
                                                            0.001f,
                                                            this.systemManager.myMovableRangeInfo.avgLengthInVR * this.systemManager.scaleTransferFactor);
    }

    void drawBoundsLines() {
        /**
             *  * Hmp *  *
             *  *  *  *  *
            Vmp *  O  *  *
             *  *  *  *  *
             *  *  *  *  *

            VerticalDirection = O -> Hmp
            HorizontalDirection = Vmp -> O
        **/
        
        for(int i = 0; i < 2; i++) {
            Vector3 point1 = this.systemManager.myMovableRangeInfo.leftUpperCorner + this.systemManager.myMovableRangeInfo.horizontalDirection * i * this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor;
            point1 = new Vector3(point1.x, point1.y - 0.01f, point1.z);
            Vector3 point2 = this.systemManager.myMovableRangeInfo.leftBottomCorner + this.systemManager.myMovableRangeInfo.horizontalDirection * i * this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor;
            point2 = new Vector3(point2.x, point2.y - 0.01f, point2.z);
            this.verticalLines[i].SetPosition(0, point1);
            this.verticalLines[i].SetPosition(1, point2);
            this.verticalLines[i].gameObject.SetActive(true);
        }
        for(int i = 0; i < 2; i++) {
            Vector3 point1 = this.systemManager.myMovableRangeInfo.leftUpperCorner + this.systemManager.myMovableRangeInfo.verticalDirection * i * this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor;
            point1 = new Vector3(point1.x, point1.y - 0.01f, point1.z);
            Vector3 point2 = this.systemManager.myMovableRangeInfo.rightUpperCorner + this.systemManager.myMovableRangeInfo.verticalDirection * i * this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor;
            point2 = new Vector3(point2.x, point2.y - 0.01f, point2.z);
            this.horizontalLines[i].SetPosition(0, point1);
            this.horizontalLines[i].SetPosition(1, point2);
            this.horizontalLines[i].gameObject.SetActive(true);
        }
    }

    public void coachTransformInitial(float distance) {
        Vector3 tmpPoint = this.systemManager.sceneOrigin.transform.position - this.systemManager.myMovableRangeInfo.verticalDirection * distance * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 4.0f) * this.systemManager.scaleTransferFactor;
        this.coach.transform.position = new Vector3 (tmpPoint.x,
                                                    this.gym.transform.position.y + 1.0f * Convert.ToInt32(this.systemManager.mySettingInfo.isOnRing),
                                                    tmpPoint.z);

        Vector3 lookTarget = this.systemManager.sceneOrigin.transform.position;
        this.coach.transform.LookAt(lookTarget);
    }

    // void userTransform() {
    //     Vector3 centerEyeAnchorPosition = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
    //     this.userModel.transform.position = new Vector3 (centerEyeAnchorPosition.x,
    //                                                     centerEyeAnchorPosition.y - 1.2f,
    //                                                     centerEyeAnchorPosition.z);
    //     print("WTF???");
    // }
}
