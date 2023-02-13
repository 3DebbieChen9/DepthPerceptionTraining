using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetInteraction_L : MonoBehaviour
{
    [SerializeField]
    private TestingManager testingModeManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.testingModeManager == null) {
            this.testingModeManager = GameObject.Find("TestingModeManager").GetComponent<TestingManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            this.testingModeManager.reachTarget("L");
        }
    }
}
