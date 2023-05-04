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
        float value = 0.0f; // value is the brightness

        float zeroDistanceValue = 1.0f;
        float threshold = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * 3.0f;
        float distance = 0.0f;

        switch (hand) {
            case Hand.Right:
                hue = 240.0f / 360.0f; // blue
                distance = Vector3.Distance(leftBall.transform.position, playingModeManager.mainManager.OVRControllerRight.transform.position);
                break;
            case Hand.Left:
                hue = 0.0f; // red
                distance = Vector3.Distance(rightBall.transform.position, playingModeManager.mainManager.OVRControllerLeft.transform.position);
                break;
            default:
                break;
        }

        if (distance > threshold) {
            value = 0.0f;
        } else {
            value = -(zeroDistanceValue / threshold) * distance + zeroDistanceValue;
        }
        
        return Color.HSVToRGB(hue, 1.0f, value);
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
