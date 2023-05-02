using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineCue : MonoBehaviour
{
    // private LineRenderer line;
    // private GameObject currentEndingpoint;

    [SerializeField]
    private PlayingModeManager playingModeManager;

    // [SerializeField]
    // private Transform rightGlovePos;
    // [SerializeField]
    // private Transform leftGlovePos;
    
    [SerializeField]
    private GameObject leftShoulder;
    [SerializeField]
    private GameObject rightShoulder;
    [SerializeField]
    private LineRenderer rightLine;
    [SerializeField]
    private LineRenderer leftLine;

    private float leftDistance;
    private float rightDistance;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void renderLineCue() {
        setEndpoints();
        setColors();
    }

    public void eraseLineCue() {
        rightLine.SetPosition(1, rightLine.GetPosition(0));
        leftLine.SetPosition(1, leftLine.GetPosition(0));
    }

    void setEndpoints() {
        rightLine.SetPosition(0, playingModeManager.mainManager.OVRControllerRight.transform.position);
        rightLine.SetPosition(1, leftShoulder.transform.position);
        leftLine.SetPosition(0, playingModeManager.mainManager.OVRControllerLeft.transform.position);
        leftLine.SetPosition(1, rightShoulder.transform.position);

        rightDistance = Vector3.Distance(playingModeManager.mainManager.OVRControllerRight.transform.position, 
                                            leftShoulder.transform.position);
        leftDistance = Vector3.Distance(playingModeManager.mainManager.OVRControllerLeft.transform.position, 
                                            rightShoulder.transform.position);
    }

    void setColors() {
        // HUE: (0.0f to 1.0 f) maps to (0 degree to 360 degrees)
        // SATURATION: 1.0f is the most saturated (colorful) and 0.0f is the least saturated (grey)
        // VALUE: 1.0f is the brightest and 0.0f is the darkest

        Color rightColor;
        float rightHue = 240.0f / 360.0f; // blue 
        float rightValue; // value is the brightness

        Color leftColor;
        float leftHue = 0.0f; // red
        float leftValue; // value is the brightness
        
        float zeroDistanceValue = 1.0f;
        float threshold = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * 3.0f;
                        
        if (rightDistance > threshold) {
            rightValue = 0.0f;
        } else {
            rightValue = -(zeroDistanceValue / threshold) * rightDistance + zeroDistanceValue;
        }

        if (leftDistance > threshold) {
            leftValue = 0.0f;
        } else {
            leftValue = -(zeroDistanceValue / threshold) * leftDistance + zeroDistanceValue;
        }

        rightColor = Color.HSVToRGB(rightHue, 1.0f, rightValue);
        rightLine.startColor = rightColor;
        rightLine.endColor = rightColor;

        leftColor = Color.HSVToRGB(leftHue, 1.0f, leftValue);
        leftLine.startColor = leftColor;
        leftLine.endColor = leftColor;
    }
}
