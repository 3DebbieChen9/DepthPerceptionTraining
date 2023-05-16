using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BarUpdating : MonoBehaviour
{
    public GameObject user;
    public Transform rightShoulder;
    public Transform leftShoulder;
    public GameObject bar;
    public float armLength = 0.55f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        setBarLength();
    }

    float calculateHorizatonalDistance(Vector3 p1, Vector3 p2)
    {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    float setDistance() {
        float distanceToRightShoulder = calculateHorizatonalDistance(user.transform.position, rightShoulder.position);
        float distanceToLeftShoulder = calculateHorizatonalDistance(user.transform.position, leftShoulder.position);

        if (distanceToLeftShoulder <= distanceToRightShoulder)
        {
            return distanceToLeftShoulder;
        }
        else
        {
            return distanceToRightShoulder;
        }
    }

    void setBarLength() {
        float distance = setDistance();
        bar.GetComponent<Slider>().maxValue = armLength * 2;
        if (distance > armLength * 2)
        {
            bar.GetComponent<Slider>().value = armLength * 2;
        }
        else
        {
            bar.GetComponent<Slider>().value = distance;
        }
    }
}
