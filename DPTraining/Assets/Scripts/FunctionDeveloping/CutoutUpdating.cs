using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CutoutUpdating : MonoBehaviour
{
    [SerializeField]
    private RectTransform mask;
    [SerializeField]
    private Image image;

    public Transform userCenter;
    public Transform rightShoulder;
    public Transform leftShoulder;
    public float armLength = 0.55f;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        this.setCutoutSize();
    }

    float calculateHorizatonalDistance(Vector3 p1, Vector3 p2)
    {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    float setDistance()
    {
        float distanceToRightShoulder = calculateHorizatonalDistance(userCenter.position, rightShoulder.position);
        float distanceToLeftShoulder = calculateHorizatonalDistance(userCenter.position, leftShoulder.position);

        if (distanceToLeftShoulder <= distanceToRightShoulder)
        {
            return distanceToLeftShoulder;
        }
        else
        {
            return distanceToRightShoulder;
        }
    }

    void setCutoutSize()
    {
        float furthestMultiplier = 2.4f;
        float furthestDistance = armLength * furthestMultiplier;
        float idealDistance = furthestDistance * 0.5f;
        float idealDistanceMin = idealDistance - idealDistance * (3.0f / 8.0f);
        float idealDistanceMax = idealDistance + idealDistance * (3.0f / 8.0f);

        float distance = setDistance();
        // this.bar.maxValue = furthestDistance;

        // if (distance < idealDistanceMin)
        // {
        //     Color newColor = Color.HSVToRGB(0f, 0.5f, 1.0f);
        //     newColor.a = 0.6f;
        //     this.image.color = newColor;
        // }
        // else if (distance > idealDistanceMax)
        // {
        //     Color newColor = Color.HSVToRGB(0f, 1.0f, 0.6f);
        //     newColor.a = 0.8f;
        //     this.image.color = newColor;
        // }
        float canvasWorstScale = 0.3f;
        float canvasIdealScale = 0.72f;
        float canvasScale = 0.0f;

        if (distance < idealDistanceMax && distance > idealDistanceMin)
        {
            Debug.Log($"Inside Ideal Range: distance = {distance}");
            canvasScale = canvasIdealScale;
        }
        else if (distance < idealDistanceMin)
        {
            Debug.Log($"Too Close: distance = {distance}");
            if (distance < 0) { canvasScale = canvasWorstScale; }
            else
            {
                canvasScale = canvasIdealScale - Mathf.Abs(distance - idealDistanceMin) / (idealDistanceMin) * Mathf.Abs(canvasIdealScale - canvasWorstScale);
            }
        }
        else if (distance > idealDistanceMax)
        {
            Debug.Log($"Too Far: distance = {distance}");
            if (distance > furthestDistance) { canvasScale = canvasWorstScale; }
            else
            {
                canvasScale = canvasIdealScale - Mathf.Abs(distance - idealDistanceMax) / (idealDistanceMin) * Mathf.Abs(canvasIdealScale - canvasWorstScale);
            }
        }

        this.mask.localScale = new Vector3(canvasScale, canvasScale, canvasScale);
    }
}
