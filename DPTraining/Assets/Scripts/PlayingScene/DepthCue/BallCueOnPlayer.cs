using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class BallCueOnPlayer : MonoBehaviour
{
    public Transform target = null; 

    float initialDistance = 1.0f;

    private bool isPaused = false;

    // Start is called before the first frame update
    void Start()
    {
        initialDistance = Vector3.Distance(transform.position, target.position);
    }

    // Update is called once per frame
    void Update()
    {
        if (!this.isPaused) {
            setRadius();
            setColors();
        }
    }

    void setRadius()
    {
        float currentDistance = Vector3.Distance(transform.position, target.position) * 0.1f;
        
        float radius = Mathf.Sin((float)Mathf.PI / (2 * initialDistance) * (currentDistance)); // 可以把公式放到desmos上看看半徑如何變化
        
        setScale(radius);
    }

    public void setScale(float r)
    {
        transform.localScale = r * Vector3.one;
    }

    // Let transform stay at the current location
    public void Pause(GameObject parent = null) 
    {
        this.isPaused = true;
        this.transform.SetParent(parent.transform);
    }

    public void setColors() {
        switch (this.transform.parent.tag) {
            case "Glove_R":
                this.ChangeColor(calculateColor(Hand.Right));
                break;
            case "Glove_L":
                this.ChangeColor(calculateColor(Hand.Left));
                break;
            default:
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
        
        float currentDistance = Vector3.Distance(transform.position, target.position);
        float furthestDistance = this.transform.root.gameObject.GetComponent<MainManager>().myUserInfo.userBodySize.armLength * 2.0f; // arm-length * 2.0f
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
                break;
            case Hand.Left:
                // hue = 0.0f; // red
                hue = 10.0f / 360.0f; // red
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

    public void ChangeColor(Color color)
    {
        this.GetComponent<Renderer>().material.SetColor("_MainColor", color);
    }

    public void destroy()
    {
        Destroy(this.gameObject);
    }
}
