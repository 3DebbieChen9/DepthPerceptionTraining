using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeSelection : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    [SerializeField]
    public GameObject selectionWall;

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
        this.selectionWall.SetActive(true);
        this.selectionWallTransform();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void selectionWallTransform() {
        Vector3 tmpPoint = this.systemManager.sceneOrigin.transform.position - this.systemManager.sceneVerticalDirection * 1.70f * (this.systemManager.referenceDistance / 4.0f) * this.systemManager.scaleTransferFactor;
        this.selectionWall.transform.position = new Vector3 (tmpPoint.x,
                                                    this.systemManager.sceneOrigin.transform.position.y + 2.5f,
                                                    tmpPoint.z);

        Vector3 lookTarget = this.systemManager.sceneOrigin.transform.position;
        this.selectionWall.transform.LookAt(lookTarget);
    }
}
