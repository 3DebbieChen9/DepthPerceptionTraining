using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        // HUE: (0.0f to 1.0 f) maps to (0 degree to 360 degrees)
        // SATURATION: 1.0f is the most saturated (colorful) and 0.0f is the least saturated (grey)
        // VALUE: 1.0f is the brightest and 0.0f is the darkest

        float rightHue = 240.0f / 360.0f; // blue 
        float leftHue = 0.0f; // red

        float value = 0.0f;
        float hue = 0.0f;

        float zeroDistanceValue = 1.0f;
        float threshold = this.transform.root.gameObject.GetComponent<MainManager>().myUserInfo.userBodySize.armLength * 3.0f;
        
        float distance = Vector3.Distance(transform.position, target.position);
        if (distance > threshold) {
            value = 0.0f;
        } else {
            value = -(zeroDistanceValue / threshold) * distance + zeroDistanceValue;
        }

        switch (this.transform.parent.tag) {
            case "Glove_R":
                hue = rightHue;
                break;
            case "Glove_L":
                hue = leftHue;
                break;
            default:
                break;
        }

        this.ChangeColor(Color.HSVToRGB(hue, 1.0f, value));
    }

    public void ChangeColor(Color color)
    {
        // this.GetComponent<Renderer>().material.shader = Shader.Find("_MainColor");
        this.GetComponent<Renderer>().material.SetColor("_MainColor", color);
    }

    public void destroy()
    {
        Destroy(this.gameObject);
    }
}
