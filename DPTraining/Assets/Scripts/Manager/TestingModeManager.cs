using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestingModeManager : MonoBehaviour
{
    [SerializeField]
    public SystemManager systemManager;

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
