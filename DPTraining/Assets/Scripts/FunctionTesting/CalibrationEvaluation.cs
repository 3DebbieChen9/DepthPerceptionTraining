using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalibrationEvaluation : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public CalibrationManager calibrationManager;
    [SerializeField]
    private GameObject plane;
    [SerializeField]
    private LineRenderer[] verticalLines;
    [SerializeField]
    private LineRenderer[] horizontalLines;

    // Start is called before the first frame update
    void Start()
    {
        this.plane.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch)){
            if (this.systemManager.curSystemMode == SystemManager.SystemMode.Testing) {
                this.planeResize();
                this.planeMove();
                // _plane.SetActive(true);
                this.drawEvaluateLines();
            }
        }
    }

    void planeResize() {
        this.plane.transform.localScale = new Vector3 ( this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor, 
                                                        this.plane.transform.localScale.y, 
                                                        this.systemManager.myMovableRangeInfo.referenceRanageLength * this.systemManager.scaleTransferFactor);
    }

    void planeMove() {
        this.plane.transform.position = new Vector3 ( this.systemManager.sceneOrigin.transform.position.x,
                                                      this.systemManager.sceneOrigin.transform.position.y - 0.01f,
                                                      this.systemManager.sceneOrigin.transform.position.z);
        this.plane.transform.rotation = this.systemManager.sceneOrigin.transform.rotation;
    }

    private void drawEvaluateLines() {
        /**
             *  * Hmp *  *
             *  *  *  *  *
            Vmp *  O  *  *
             *  *  *  *  *
             *  *  *  *  *

            VerticalDirection = O -> Hmp
            HorizontalDirection = Vmp -> O
        **/
        Vector3 horizontalMidPoint = (this.calibrationManager.distanceMarkers[0].transform.position + this.calibrationManager.distanceMarkers[1].transform.position) / 2;
        Vector3 verticalMidPoint = (this.calibrationManager.distanceMarkers[0].transform.position + this.calibrationManager.distanceMarkers[3].transform.position) / 2;
        this.systemManager.myMovableRangeInfo.horizontalDirection = (this.systemManager.sceneOrigin.transform.position - verticalMidPoint).normalized;
        this.systemManager.myMovableRangeInfo.verticalDirection = (this.systemManager.sceneOrigin.transform.position - horizontalMidPoint).normalized;

        this.systemManager.myMovableRangeInfo.leftBottomCorner = this.systemManager.sceneOrigin.transform.position 
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    + this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.leftUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    - this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;
        this.systemManager.myMovableRangeInfo.rightUpperCorner = this.systemManager.sceneOrigin.transform.position
                                    + this.systemManager.myMovableRangeInfo.horizontalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor
                                    - this.systemManager.myMovableRangeInfo.verticalDirection * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 2.0f) * this.systemManager.scaleTransferFactor;

        for(int i = 0; i < 5; i++) {
            this.verticalLines[i].SetPosition(0, this.systemManager.myMovableRangeInfo.leftUpperCorner + this.systemManager.myMovableRangeInfo.horizontalDirection * i * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 4.0f) * this.systemManager.scaleTransferFactor);
            this.verticalLines[i].SetPosition(1, this.systemManager.myMovableRangeInfo.leftBottomCorner + this.systemManager.myMovableRangeInfo.horizontalDirection * i * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 4.0f) * this.systemManager.scaleTransferFactor);
            this.verticalLines[i].gameObject.SetActive(true);
        }

        for(int i = 0; i < 5; i++) {
            this.horizontalLines[i].SetPosition(0, this.systemManager.myMovableRangeInfo.leftUpperCorner + this.systemManager.myMovableRangeInfo.verticalDirection * i * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 4.0f) * this.systemManager.scaleTransferFactor);
            this.horizontalLines[i].SetPosition(1, this.systemManager.myMovableRangeInfo.rightUpperCorner + this.systemManager.myMovableRangeInfo.verticalDirection * i * (this.systemManager.myMovableRangeInfo.referenceRanageLength / 4.0f) * this.systemManager.scaleTransferFactor);
            this.horizontalLines[i].gameObject.SetActive(true);
        }
    }
}
