using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderInteractionTesting : MonoBehaviour
{
    private bool inTrigger;

    // Start is called before the first frame update
    void Start()
    {
        this.inTrigger = false;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Sphere")
        {
            if (this.inTrigger)
            {
                this.inTrigger = false;
                Debug.Log("Start Exit Trigger");
            }
            else
            {
                this.inTrigger = true;
                Debug.Log("Start Enter Trigger");
            }
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.name == "Sphere")
        {
            this.inTrigger = false;
            Debug.Log("On Trigger Exit");
        }
    }
    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name == "Sphere")
        {
            this.inTrigger = true;
            Debug.Log("On Trigger Stay");
        }
    }
}
