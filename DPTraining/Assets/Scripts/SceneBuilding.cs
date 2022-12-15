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
        // this.gym.SetActive(true);
        this.drawBoundsLines();
        
    }

    void boxingSceneResize() {
        this.gym.transform.localScale = new Vector3 ( this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor,
                                                      this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor,
                                                    //   this.gym.transform.localScale.y, 
                                                      this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
    }

    void boxingSceneTransform() {
        this.gym.transform.position = this.systemManager.sceneOrigin.transform.position;
        // this.gym.transform.position = new Vector3 (this.systemManager.sceneOrigin.transform.position.x,
        //                                             this.systemManager.sceneOrigin.transform.position.y - 0.347f,
        //                                             this.systemManager.sceneOrigin.transform.position.z);
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
            this.verticalLines[i].SetPosition(0, this.systemManager.sceneLeftUpperCorner + this.systemManager.sceneHorizontalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
            this.verticalLines[i].SetPosition(1, this.systemManager.sceneLeftBottomCorner + this.systemManager.sceneHorizontalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
            this.verticalLines[i].gameObject.SetActive(true);
        }
        for(int i = 0; i < 2; i++) {
            this.horizontalLines[i].SetPosition(0, this.systemManager.sceneLeftUpperCorner + this.systemManager.sceneVerticalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
            this.horizontalLines[i].SetPosition(1, this.systemManager.sceneRightUpperCorner + this.systemManager.sceneVerticalDirection * i * this.systemManager.referenceDistance * this.systemManager.scaleTransferFactor);
            this.horizontalLines[i].gameObject.SetActive(true);
        }
    }
}
