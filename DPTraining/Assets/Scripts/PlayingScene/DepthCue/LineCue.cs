using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;
public class LineCue : MonoBehaviour
{
    [SerializeField]
    private PlayingModeManager playingModeManager;

    [SerializeField]
    private GameObject rightShoulder;
    [SerializeField]
    private GameObject leftShoulder;
    
    [SerializeField]
    private LineRenderer rightLine;
    [SerializeField]
    private LineRenderer leftLine;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void renderLineCue(Hand hand)
    {
        switch (hand)
        {
            case Hand.Right:
                setEndpoints(hand);
                setColors(hand);
                leftLine.SetPosition(1, leftLine.GetPosition(0));
                break;
            case Hand.Left:
                setEndpoints(hand);
                setColors(hand);
                rightLine.SetPosition(1, rightLine.GetPosition(0));
                break;
            default:
                setEndpoints(hand);
                setColors(hand);
                break;
        }
    }

    public void eraseLineCue()
    {
        rightLine.SetPosition(1, rightLine.GetPosition(0));
        leftLine.SetPosition(1, leftLine.GetPosition(0));
    }

    void setEndpoints(Hand hand)
    {
        switch (hand)
        {
            case Hand.Right:
                rightLine.SetPosition(0, playingModeManager.mainManager.OVRControllerRight.transform.position);
                rightLine.SetPosition(1, leftShoulder.transform.position);
                break;
            case Hand.Left:
                leftLine.SetPosition(0, playingModeManager.mainManager.OVRControllerLeft.transform.position);
                leftLine.SetPosition(1, rightShoulder.transform.position);
                break;
            default:
                rightLine.SetPosition(0, playingModeManager.mainManager.OVRControllerRight.transform.position);
                rightLine.SetPosition(1, leftShoulder.transform.position);
                leftLine.SetPosition(0, playingModeManager.mainManager.OVRControllerLeft.transform.position);
                leftLine.SetPosition(1, rightShoulder.transform.position);
                break;
        }

    }

    void setColors(Hand hand)
    {
        switch (hand)
        {
            case Hand.Right:
                Color rightColor = calculateColor(Hand.Right);
                rightLine.startColor = rightColor;
                rightLine.endColor = rightColor;
                break;
            case Hand.Left:
                Color leftColor = calculateColor(Hand.Left);
                leftLine.startColor = leftColor;
                leftLine.endColor = leftColor;
                break;
            default:
                rightColor = calculateColor(Hand.Right);
                rightLine.startColor = rightColor;
                rightLine.endColor = rightColor;
                leftColor = calculateColor(Hand.Left);
                leftLine.startColor = leftColor;
                leftLine.endColor = leftColor;
                break;
        }
    }

    Color calculateColor(Hand hand)
    {
        // HUE: (0.0f to 1.0 f) maps to (0 degree to 360 degrees)
        // SATURATION: 1.0f is the most saturated (colorful) and 0.0f is the least saturated (grey)
        // VALUE: 1.0f is the brightest and 0.0f is the darkest

        float hue = 0.0f;
        float saturation = 0.0f;
        float value = 0.0f;

        float currentDistance = 0.0f;
        float furthestDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * 2.0f; // arm-length * 2.0f
        float closestDistance = 0.2f;
        float threshold = (furthestDistance - closestDistance) / 2.0f;

        float saturationMin = 0.15f;
        float saturationMax = 1.0f;
        float valueMin = 0.2f;
        float valueMax = 1.0f;

        switch (hand)
        {
            case Hand.Right:
                // hue = 240.0f / 360.0f; // blue
                hue = 240.0f / 360.0f; // blue
                currentDistance = Vector3.Distance(playingModeManager.mainManager.OVRControllerRight.transform.position,
                                            leftShoulder.transform.position);
                break;
            case Hand.Left:
                // hue = 0.0f; // red
                hue = 0.0f / 360.0f; // red
                currentDistance = Vector3.Distance(playingModeManager.mainManager.OVRControllerLeft.transform.position,
                                            rightShoulder.transform.position);
                break;
            default:
                break;
        }

        if (currentDistance <= closestDistance)
        {
            saturation = saturationMin;
            value = valueMax;
        }
        else if (currentDistance < threshold)
        {
            saturation = (saturationMax - saturationMin) * (currentDistance - closestDistance) / threshold + saturationMin;
            value = valueMax;
        }
        else if (currentDistance == threshold)
        {
            saturation = saturationMax;
            value = valueMax;
        }
        else if (currentDistance >= furthestDistance)
        {
            saturation = saturationMax;
            value = valueMin;
        }
        else if (currentDistance > threshold)
        {
            saturation = saturationMax;
            value = (valueMax - valueMin) * (furthestDistance - currentDistance) / threshold + valueMin;
        }

        return Color.HSVToRGB(hue, saturation, value);
    }
}
