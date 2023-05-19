using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingModule : MonoBehaviour
{
    [SerializeField]
    private EvaluationManager evaluationManager;

    // Start is called before the first frame update
    void Start()
    {
        this.evaluationManager.userStartMoving = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "UserCenter")
        {
            if (!this.evaluationManager.userStartMoving)
            {
                this.evaluationManager.userIsMoving();
                this.evaluationManager.userStartMoving = true;
            }

            this.evaluationManager.userIsAtOrigin = false;
        }

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "UserCenter")
        {
            this.evaluationManager.userIsAtOrigin = true;
        }
    }
    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name == "UserCenter")
        {
            this.evaluationManager.userIsAtOrigin = true;
        }
    }
}