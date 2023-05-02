using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class PunchModule : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;
    [SerializeField]
    private GameObject lightBallPrefab;

    [SerializeField]
    private Transform rightShoulder;
    [SerializeField]
    private Transform leftShoulder;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerExit(Collider other)
    {
        switch (other.gameObject.tag) {
            case "Glove_R":
                this.evaluationManager.userIsPunching(Hand.Right);
                break;
            case "Glove_L":
                this.evaluationManager.userIsPunching(Hand.Left);
                break;
            default:
                break;
        }

        if (this.evaluationManager.mainManager.curSystemMode == SystemMode.TrainingMode_SphereCue_v1 || 
            this.evaluationManager.mainManager.curSystemMode == SystemMode.TrainingMode_SphereCue_v3) {
            if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
                if (FindGameObjectInChildWithTag(other.gameObject, "LightBall") != null) {
                    return;
                }
                GameObject lightball = Instantiate(lightBallPrefab, other.transform.position + other.transform.right * 0.133f, 
                                                    other.transform.rotation, other.gameObject.transform);
                switch (other.gameObject.tag) {
                    case "Glove_R":
                        lightball.GetComponent<BallCueOnPlayer>().target = this.leftShoulder.transform;
                        break;
                    case "Glove_L":
                        lightball.GetComponent<BallCueOnPlayer>().target = this.rightShoulder.transform;
                        break;
                    default:
                        break;
                }
            }
        }
        
        // if (this.evaluationManager.isDuringTheUnit) {
        //     if (other.gameObject.tag == "Glove_R") {
        //         this.evaluationManager.userIsPunching(Hand.Right);
        //     }
        //     else if (other.gameObject.tag == "Glove_L") {
        //         this.evaluationManager.userIsPunching(Hand.Left);
        //     }
        // }
    }

    public GameObject FindGameObjectInChildWithTag (GameObject parent, string tag) {
        foreach (Transform child in parent.transform) {
            if (child.gameObject.tag == tag) {
                return child.gameObject;
            }
        }
        return null;
    }
}
