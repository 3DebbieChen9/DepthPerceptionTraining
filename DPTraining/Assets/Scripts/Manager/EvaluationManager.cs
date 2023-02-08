using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;
    public Vector3 startingPosition; // Camera Rig's Position when the unit is started

    // Start is called before the first frame update
    void Start()
    {
        this.systemManager = GameObject.Find("SystemManager").GetComponent<SystemManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
