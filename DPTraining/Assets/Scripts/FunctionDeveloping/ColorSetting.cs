using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSetting : MonoBehaviour
{
    public Transform target = null; 

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        setColors();
        // this.ChangeColor(Color.HSVToRGB(240.0f/360.0f, 0.5f, 0.5f));
    }

    public void setColors() {
        // HUE: (0.0f to 1.0 f) maps to (0 degree to 360 degrees)
        // SATURATION: 1.0f is the most saturated (colorful) and 0.0f is the least saturated (grey)
        // VALUE: 1.0f is the brightest and 0.0f is the darkest

        float rightHue = 240.0f / 360.0f; // blue 
        float leftHue = 0.0f; // red

        float hue = 0.0f;
        float saturation = 0.0f;
        float value = 0.0f;

        float furthestDistance = 0.55f * 2.0f; // arm-length * 2.0f
        float closestDistance = 0.2f;
        float currentDistance = Vector3.Distance(transform.position, target.position);
        float threshold = (furthestDistance - closestDistance) / 2.0f;
        float saturationMin = 0.15f;
        float saturationMax = 1.0f;
        float valueMin = 0.2f;
        float valueMax = 1.0f;

        if (currentDistance <= closestDistance) {
            saturation = saturationMin;
            value = valueMax;
            Debug.Log($"[Closest] Distance: {currentDistance} - Saturation: {saturation} | Value: {value}");
        }
        else if (currentDistance < threshold) {
            saturation = (saturationMax - saturationMin) * (currentDistance - closestDistance) / threshold + saturationMin;
            value = valueMax;
            Debug.Log($"[Close in threshold] Distance: {currentDistance} - Saturation: {saturation} | Value: {value}");
        }
        else if (currentDistance == threshold) {
            saturation = saturationMax;
            value = valueMax;
            Debug.Log($"[Threshold] Distance: {currentDistance} - Saturation: {saturation} | Value: {value}");
        }
        else if (currentDistance >= furthestDistance) {
            saturation = saturationMax;
            value = valueMin;
            Debug.Log($"[Too far] Distance: {currentDistance} - Saturation: {saturation} | Value: {value}");
        }
        else if (currentDistance > threshold) {
            saturation = saturationMax;
            value = (valueMax - valueMin) * (furthestDistance - currentDistance) / threshold + valueMin;
            Debug.Log($"[Further than threshold] Distance: {currentDistance} - Saturation: {saturation} | Value: {value}");
        }

        // if (value > 1.0f) {
        //     value = 1.0f;
        // }
        // else if (value <= 0.0f) {
        //     value = 0.0f;
        // }

        // if (saturation > 1.0f) {
        //     saturation = 1.0f;
        // }
        // else if (saturation <= 0.0f) {
        //     saturation = 0.0f;
        // }

        
        this.ChangeColor(Color.HSVToRGB(rightHue, saturation, value));
    }

    public void ChangeColor(Color color)
    {
        // this.GetComponent<Renderer>().material.shader = Shader.Find("_MainColor");
        this.GetComponent<Renderer>().material.SetColor("_MainColor", color);
    }
}
