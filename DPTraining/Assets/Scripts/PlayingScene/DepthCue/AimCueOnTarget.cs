using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AimCueOnTarget : MonoBehaviour
{
    [SerializeField]
    private PlayingModeManager playingModeManager;
    [SerializeField]
    private Transform rightShoulder;
    [SerializeField]
    private Transform leftShoulder;
    [SerializeField]
    private Transform userCenter;
    [SerializeField]
    private SpriteRenderer rightAim;
    [SerializeField]
    private SpriteRenderer leftAim;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void closeAimCueOnTarget()
    {
        this.rightAim.gameObject.SetActive(false);
        this.leftAim.gameObject.SetActive(false);
    }

    public void aimCueUpdate()
    {
        this.rightAim.gameObject.SetActive(true);
        this.leftAim.gameObject.SetActive(true);

        float distanceToRightShoulder = calculateHorizatonalDistance(userCenter.position, rightShoulder.position);
        float distanceToLeftShoulder = calculateHorizatonalDistance(userCenter.position, leftShoulder.position);

        this.rightAim.color = getAimSpriteColor(distanceToRightShoulder);
        this.leftAim.color = getAimSpriteColor(distanceToLeftShoulder);
    }

    Color getAimSpriteColor(float distance)
    {
        float furthestMultiplier = 2.5f;
        float furthestDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * furthestMultiplier;
        float idealDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength;
        float idealDistanceMin = idealDistance - idealDistance * (1.0f / 20.0f);
        float idealDistanceMax = idealDistance + idealDistance * (3.0f / 8.0f);

        float hue = 0.0f;
        float saturation = 0.0f;
        float value = 1.0f;
        float alpha = 1.0f;

        Color newColor = Color.HSVToRGB(hue, saturation, value);
        float alphaMax = 1.0f;
        float alphaMin = 0.3f;

        if (distance <= idealDistanceMax && distance >= idealDistanceMin)
        {
            alpha = alphaMax;
        }
        else if (distance < idealDistanceMin)
        {
            if (distance < 0.1f) { alpha = alphaMin; }
            else
            {
                alpha = alphaMax - Mathf.Abs(distance - idealDistanceMin) / (idealDistanceMin) * Mathf.Abs(alphaMax - alphaMin);
            }
        }
        else if (distance > idealDistanceMax)
        {
            if (distance > furthestDistance) { alpha = alphaMin; }
            else
            {
                alpha = alphaMax - Mathf.Abs(distance - idealDistanceMax) / (idealDistanceMin) * Mathf.Abs(alphaMax - alphaMin);
            }
        }
        newColor.a = alpha;
        return newColor;
    }

    float calculateHorizatonalDistance(Vector3 p1, Vector3 p2)
    {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }
}
