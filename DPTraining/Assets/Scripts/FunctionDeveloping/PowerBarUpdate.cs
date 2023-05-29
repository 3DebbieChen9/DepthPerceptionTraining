using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PowerBarUpdate : MonoBehaviour
{
    public GameObject user;
    public Transform rightShoulder;
    public Transform leftShoulder;
    public Slider powerBar;
    public float armLength = 0.55f;
    public Image fillColor;

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

    float setDistance()
    {
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

    void setBarLength()
    {
        float furthestMultiplier = 2.5f;
        float furthestDistance = this.armLength * furthestMultiplier;
        float idealDistance = this.armLength;
        float idealDistanceMin = idealDistance - idealDistance * (1.0f / 20.0f);
        float idealDistanceMax = idealDistance + idealDistance * (3.0f / 8.0f);

        float distance = setDistance();

        powerBar.maxValue = 1.0f;
        powerBar.minValue = 0.0f;

        if (distance <= idealDistanceMax && distance >= idealDistanceMin)
        {
            powerBar.value = powerBar.maxValue;
        }
        else if (distance < idealDistanceMin)
        {
            if (distance < 0.1f) { powerBar.value = 0.1f; }
            else
            {
                powerBar.value = distance / idealDistanceMin;
            }
            Debug.Log($"Too Close | Distance: {distance}, Bar Value: {powerBar.value}");
        }
        else if (distance > idealDistanceMax)
        {
            if (distance > furthestDistance) { powerBar.value = 0.1f; }
            else
            {
                powerBar.value = Mathf.Abs(distance - furthestDistance) / Mathf.Abs(furthestDistance - idealDistanceMax);
            }
            Debug.Log($"Too Far | Distance: {distance}, Bar Value: {powerBar.value}");
        }
        if (powerBar.value < 0.1f) { powerBar.value = 0.1f; }

        Debug.Log($"Distance: {distance}, Bar Value: {powerBar.value}");
        Color darkRed = Color.HSVToRGB(0, 0, 0.4f);
        Color lightWhite = Color.HSVToRGB(0, 0, 1.0f);
        float value = powerBar.value * 0.6f + 0.4f;
        // fillColor.color = Color.Lerp(darkRed, lightWhite, powerBar.value);
        fillColor.color = Color.HSVToRGB(0, 0, value);
        // bar.GetComponent<Slider>().maxValue = 1.0f;
        // float minValue = bar.GetComponent<Slider>().maxValue * 0.01f;
        // if (distance > armLength * 2)
        // {
        //     bar.GetComponent<Slider>().value = armLength * 2;
        // }
        // else
        // {
        //     bar.GetComponent<Slider>().value = distance;
        // }
    }
}
