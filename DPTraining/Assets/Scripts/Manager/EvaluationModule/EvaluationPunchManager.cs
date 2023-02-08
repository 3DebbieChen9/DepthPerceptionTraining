using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EvaluationPunchManager : MonoBehaviour
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

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player" || other.gameObject.tag == "MainCamera") {
            print("Player is out of the IdlePose!");
        }
    }

    void OnTriggerStay(Collider other) 
    {
        if (other.gameObject.tag == "Player" || other.gameObject.tag == "MainCamera") {
            print("Player is in the IdlePose!");
        }
    }
}
