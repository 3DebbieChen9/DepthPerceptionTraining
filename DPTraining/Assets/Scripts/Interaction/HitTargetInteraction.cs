using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitTargetInteraction : MonoBehaviour
{
    [SerializeField]
    private EvaluationReachModule evaluationReachModule;

    // Start is called before the first frame update
    void Start()
    {
        if (this.evaluationReachModule == null) {
            this.evaluationReachModule = GameObject.Find("EvaluationManager").GetComponent<EvaluationReachModule>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_L") {
            this.evaluationReachModule.reachTarget("L");
            this.gameObject.GetComponent<MeshRenderer>().materials[0].color = Color.green;
            OVRInput.SetControllerVibration(0.8f, 0.5f, OVRInput.Controller.LTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
        else if (other.gameObject.tag == "Glove_R") {
            this.evaluationReachModule.reachTarget("R");
            this.gameObject.GetComponent<MeshRenderer>().materials[0].color = Color.green;
            OVRInput.SetControllerVibration(0.8f, 0.5f, OVRInput.Controller.RTouch);
            Invoke("stopControllerVibration", 0.3f);
        }
    }

    void stopControllerVibration() {
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.LTouch);
        OVRInput.SetControllerVibration(0.0f, 0.0f, OVRInput.Controller.RTouch);
    }
}
