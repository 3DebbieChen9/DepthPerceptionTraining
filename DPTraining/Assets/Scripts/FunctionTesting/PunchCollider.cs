using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PunchCollider : MonoBehaviour
{
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
        if (other.gameObject.tag == "Player") {
            print("Player punch!");
        }
    }

    void OnTriggerStay(Collider other) 
    {
        if (other.gameObject.tag == "Player") {
            print("Player is in the IdlePose!");
        }
    }
}
