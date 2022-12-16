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
    public GameObject coach;
    [SerializeField]
    private LineRenderer[] verticalLines;
    [SerializeField]
    private LineRenderer[] horizontalLines;
    
    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.BuildTheScene();
    }

    // Update is called once per frame
    void Update()
    {
        
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
        this.boxingSceneResize();
        this.boxingSceneTransform();
        this.gym.SetActive(true);

        this.drawBoundsLines();
        this.systemManager.sceneOrigin.SetActive(false);

        this.coachTransform();
        this.coach.SetActive(true);
    }

    void boxingSceneResize() {
        // Prefab Scale: 1,1,1 -> Ring Size = 4m x 4m (Gernal Size)

        // float boxingRingSize = this.systemManager.referenceDistance;
        float boxingRingSize = 4.0f / 4.0f;
        this.gym.transform.localScale = this.gym.transform.localScale * boxingRingSize * this.systemManager.scaleTransferFactor;
    }

    void boxingSceneTransform() {
        float boxingRingSize = 4.0f / 4.0f;
        float y_shift = 0.808f * this.systemManager.scaleTransferFactor * boxingRingSize;
        this.gym.transform.position = new Vector3 (this.systemManager.sceneOrigin.transform.position.x,
                                                    this.systemManager.sceneOrigin.transform.position.y - y_shift,
                                                    this.systemManager.sceneOrigin.transform.position.z);
        this.gym.transform.rotation = this.systemManager.sceneOrigin.transform.rotation;
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
            Vector3 point1 = this.systemManager.sceneLeftUpperCorner + this.systemManager.sceneHorizontalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor;
            point1 = new Vector3(point1.x, point1.y - 0.01f, point1.z);
            Vector3 point2 = this.systemManager.sceneLeftBottomCorner + this.systemManager.sceneHorizontalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor;
            point2 = new Vector3(point2.x, point2.y - 0.01f, point2.z);
            this.verticalLines[i].SetPosition(0, point1);
            this.verticalLines[i].SetPosition(1, point2);
            this.verticalLines[i].gameObject.SetActive(true);
        }
        for(int i = 0; i < 2; i++) {
            Vector3 point1 = this.systemManager.sceneLeftUpperCorner + this.systemManager.sceneVerticalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor;
            point1 = new Vector3(point1.x, point1.y - 0.01f, point1.z);
            Vector3 point2 = this.systemManager.sceneRightUpperCorner + this.systemManager.sceneVerticalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor;
            point2 = new Vector3(point2.x, point2.y - 0.01f, point2.z);
            this.horizontalLines[i].SetPosition(0, point1);
            this.horizontalLines[i].SetPosition(1, point2);
            this.horizontalLines[i].gameObject.SetActive(true);
        }
    }

    void coachTransform() {
        Vector3 tmpPoint = this.systemManager.sceneOrigin.transform.position - this.systemManager.sceneVerticalDirection * 2 * (this.systemManager.referenceDistance / 4.0f) * this.systemManager.scaleTransferFactor;
        this.coach.transform.position = new Vector3 (tmpPoint.x,
                                                    this.gym.transform.position.y + 0.77f,
                                                    tmpPoint.z);

        // Vector3 lookTarget = this.systemManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position;
        // this.coach.transform.LookAt(lookTarget);

        Vector3 lookTarget = this.systemManager.sceneOrigin.transform.position;
        this.coach.transform.LookAt(lookTarget);

        // this.coach.transform.rotation = this.systemManager.sceneOrigin.transform.rotation;
    }
}
