using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ball : MonoBehaviour
{
    public Transform target = null; 

    float initialDistance = 1.0f;

    private bool isPaused = false;

    void Start()
    {
        initialDistance = Vector3.Distance(transform.position, target.position);
    }


    void Update()
    {
        if(!this.isPaused)
            setRadius();
    }

    void setRadius()
    {
        float currentDistance = Vector3.Distance(transform.position, target.position) * 0.5f;
        
        float radius = Mathf.Sin((float)Mathf.PI / (2 * initialDistance) * (currentDistance)); // 可以把公式放到desmos上看看半徑如何變化
        
        setScale(radius);
    }

    void setScale(float r)
    {
        transform.localScale = r * Vector3.one;
    }

    public void Pause()
    {
        this.isPaused = true;
        this.transform.SetParent(null);
    }

    public void ChangeColor(Color color)
    {
        this.GetComponent<Renderer>().material.shader = Shader.Find("_MainColor");
        this.GetComponent<Renderer>().material.SetColor("_Color", color);
    }

    // GameObject lightBall = other.gameObject.transform.GetChild(0).gameObject;
    // Renderer rend = lightBall.GetComponent<Renderer>();
    // rend.material.shader = Shader.Find("_MainColor");
    // rend.material.SetColor("_MainColor", Color.green);

    // lightBall.GetComponent<ball>().Pause();

    public void destroy()
    {
        this.destroy();
    }
    
    // // Start is called before the first frame update
    // public Transform targets;
    // public GameObject ball_prefab;

    // float total_distance;   // total distance between the glove and the target in the beginning
    // GameObject ball_object;
    // Transform gloves;

    // void Start()
    // {
    //     gloves = gameObject.transform;
    //     total_distance = Vector3.Distance(gloves.position, targets.position);
    //     ball_object = Instantiate(ball_prefab, gloves.position, Quaternion.identity, gloves);
    //     // Debug.Log(total_distance);
    // }

    // // Update is called once per frame
    // void Update()
    // {
    //     ball_object.transform.position = gloves.position + gloves.right * 0.133f;
    //     double distance = Vector3.Distance(gloves.position, targets.position);
    //     setScale((float)distance * 0.5f);
    // }


    // void OnTriggerEnter(Collider other)
    // {
    //     if (other.gameObject.name == "target")
    //     {
    //         Debug.Log("hit");
    //     }
    // }



    // void setScale(float currentDistance) // initial scale is x on distance total_distance, 0 on distance 0
    // {
    //     ball_object.transform.localScale = Mathf.Sin((float)Mathf.PI / (2 * total_distance) * (currentDistance)) * Vector3.one;
    // }
}
