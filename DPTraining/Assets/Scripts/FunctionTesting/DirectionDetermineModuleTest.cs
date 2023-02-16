using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DirectionDetermineModuleTest : MonoBehaviour
{
    public Transform startTransform;
    public Transform curTransform;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void judger() {
        Vector3 movingDirection = (this.curTransform.position - this.startTransform.position).normalized;
        Vector3 startForward = startTransform.forward;

        float angle = Vector3.Angle(startForward, movingDirection);
        print("[DC] The angle between the user's moving direction and the target's movement is: " + angle);
        if(angle > 90.0f) {
            print("Moving Backward");
        }
        else {
            print("Moving Forward");
        }
        
    }
}
