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

        if (distance < idealDistanceMin)
        {
            Color newColor = Color.HSVToRGB(0f, 0.5f, 1.0f);
            newColor.a = 0.6f;
            this.image.color = newColor;
        }
        else if (distance > idealDistanceMax)
        {
            Color newColor = Color.HSVToRGB(0f, 1.0f, 0.6f);
            newColor.a = 0.8f;
            this.image.color = newColor;
        }
        float scale = 2.0f - Mathf.Abs(distance - idealDistance) / (idealDistanceMin);
        if (scale < 0.8f)
        {
            scale = 0.8f;
        }
        else if (scale > 2.0f)
        {
            scale = 2.0f;
        }
        this.mask.localScale = new Vector3(scale, scale, scale);
    }
}
