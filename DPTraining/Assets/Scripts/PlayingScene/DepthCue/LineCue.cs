using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineCue : MonoBehaviour
{
    private LineRenderer line;
    private Transform glovePos;
    
    [SerializeField]
    private GameObject leftShoulder;
    [SerializeField]
    private GameObject rightShoulder;
    private GameObject currentEndingpoint;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
