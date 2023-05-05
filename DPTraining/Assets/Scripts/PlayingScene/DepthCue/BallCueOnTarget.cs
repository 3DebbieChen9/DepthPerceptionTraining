using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class BallCueOnTarget : MonoBehaviour
{
    [SerializeField]
    private PlayingModeManager playingModeManager;

    [SerializeField]
    private GameObject rightBall;
    [SerializeField]
    private GameObject leftBall;

    // Start is called before the first frame update
    void Start() 
    {

    }

    public void renderBallCueOnTarget(Hand hand) {
        switch (hand) {
            case Hand.Right:
                if (!this.leftBall.GetComponent<MeshRenderer>().enabled) {
                    this.leftBall.GetComponent<MeshRenderer>().enabled = true;
                }
                if (this.rightBall.GetComponent<MeshRenderer>().enabled) {
                    this.rightBall.GetComponent<MeshRenderer>().enabled = false;
                }
                break;
            case Hand.Left:
                if (!this.rightBall.GetComponent<MeshRenderer>().enabled) {
                    this.rightBall.GetComponent<MeshRenderer>().enabled = true;
                }
                if (this.leftBall.GetComponent<MeshRenderer>().enabled) {
                    this.leftBall.GetComponent<MeshRenderer>().enabled = false;
                }
                break;
            default:
                if (!this.rightBall.GetComponent<MeshRenderer>().enabled) {
                    this.rightBall.GetComponent<MeshRenderer>().enabled = true;
                }
                if (!this.leftBall.GetComponent<MeshRenderer>().enabled) {
                    this.leftBall.GetComponent<MeshRenderer>().enabled = true;
                }
                break;
        }
        setColors(hand);
    }

    public void eraseBallCueOnTarget() {
        if (this.rightBall.GetComponent<MeshRenderer>().enabled) {
            this.rightBall.GetComponent<MeshRenderer>().enabled = false;
        }
        if (this.leftBall.GetComponent<MeshRenderer>().enabled) {
            this.leftBall.GetComponent<MeshRenderer>().enabled = false;
        }
    }

    void setColors (Hand hand) {
        switch (hand) {
            case Hand.Right:
                this.ChangeColor(this.leftBall, calculateColor(hand));
                break;
            case Hand.Left:
                this.ChangeColor(this.rightBall, calculateColor(hand));
                break;
            default:
                this.ChangeColor(this.rightBall, calculateColor(Hand.Left));
                this.ChangeColor(this.leftBall, calculateColor(Hand.Right));
                break;
        }
    }

    Color calculateColor(Hand hand) {
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

        switch (hand) {
            case Hand.Right:
                // hue = 240.0f / 360.0f; // blue
                hue = 220.0f / 360.0f; // blue
                currentDistance = Vector3.Distance(leftBall.transform.position, playingModeManager.mainManager.OVRControllerRight.transform.position);
                break;
            case Hand.Left:
                // hue = 0.0f; // red
                hue = 10.0f / 360.0f; // red
                currentDistance = Vector3.Distance(rightBall.transform.position, playingModeManager.mainManager.OVRControllerLeft.transform.position);
                break;
            default:
                break;
        }

        if (currentDistance <= closestDistance) {
            saturation = saturationMin;
            value = valueMax;
        }
        else if (currentDistance < threshold) {
            saturation = (saturationMax - saturationMin) * (currentDistance - closestDistance) / threshold + saturationMin;
            value = valueMax;
        }
        else if (currentDistance == threshold) {
            saturation = saturationMax;
            value = valueMax;
        }
        else if (currentDistance >= furthestDistance) {
            saturation = saturationMax;
            value = valueMin;
        }
        else if (currentDistance > threshold) {
            saturation = saturationMax;
            value = (valueMax - valueMin) * (furthestDistance - currentDistance) / threshold + valueMin;
        }

        return Color.HSVToRGB(hue, saturation, value);
    }

    public void ChangeColor(GameObject ball, Color color)
    {
        ball.GetComponent<Renderer>().material.SetColor("_MainColor", color);
    }

    public void destroy(GameObject ball)
    {
        Destroy(ball);
    }
}
