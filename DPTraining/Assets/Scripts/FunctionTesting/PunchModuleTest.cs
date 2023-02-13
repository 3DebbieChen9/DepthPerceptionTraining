using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PunchModuleTest : MonoBehaviour
{
    [SerializeField]
    public GameObject referenceObject; // OVRCameraRig
    [SerializeField]
    public GameObject userIdlePose;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.userIdlePose.transform.position = this.referenceObject.transform.position;
    }

    
}
