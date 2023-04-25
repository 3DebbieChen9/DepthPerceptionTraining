using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineDrawer : MonoBehaviour
{
    private LineRenderer line;
    private Transform glovePos;
    private GameObject leftShoulder;
    private GameObject rightShoulder;
    private GameObject currentEndingpoint;

    void setEndpoints(){
        float distanceToLeftShoulder = Vector3.Distance( glovePos.position, leftShoulder.transform.position);
        float distanceToRightShoulder = Vector3.Distance( glovePos.position, rightShoulder.transform.position);
        if(distanceToLeftShoulder <= distanceToRightShoulder){
            currentEndingpoint = leftShoulder;
        }
        else{
            currentEndingpoint = rightShoulder;
        }
        line.SetPosition(0,glovePos.position);
        line.SetPosition(1,currentEndingpoint.transform.position);
    }
    void setColor(){
        Color newColor;
        float distance;
        float hue;
        float threshold = 1.5f;
        float zeroDistanceHue = 0.5f;// (0.0f to 1.0 f) maps to (0 degree to 360 degrees)
        distance  = Vector3.Distance( glovePos.position, currentEndingpoint.transform.position);
        
        if(distance>threshold){
            hue = 0;//red
        }else{
            hue = -( zeroDistanceHue / threshold ) * distance + zeroDistanceHue;//Calculate the right continuous hue when entering threshold zone
        }
        
        newColor = Color.HSVToRGB( hue, 1.0f, 1.0f );
        line.startColor = newColor;
        line.endColor = newColor;
    }
    // Start is called before the first frame update
    void Start()
    {
        line = GetComponent<LineRenderer>();
        glovePos = gameObject.transform;
        leftShoulder = GameObject.Find("Bip001 L UpperArm001");
        rightShoulder = GameObject.Find("Bip001 R UpperArm001");
        
    }

    // Update is called once per frame
    void Update()
    {
        setEndpoints();
        setColor();
    }
}
