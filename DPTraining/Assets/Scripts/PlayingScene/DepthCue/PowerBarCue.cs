using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using DepthPerceptionSystem;

public class PowerBarCue : MonoBehaviour
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
    private Slider powerBar;
    [SerializeField]
    private Image fillColor;
    [SerializeField]
    private Image targetIcon;
    [SerializeField]
    private GameObject powerBarCanvas;
    [SerializeField]
    private Transform barCanvasRect;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        this.powerBarCanvas.transform.position = this.barCanvasRect.position;
        this.powerBarCanvas.transform.rotation = this.barCanvasRect.rotation;
    }

    void FixedUpdate()
    {
        if (this.powerBarCanvas.activeSelf)
        {
            this.powerBarCanvas.transform.DORotateQuaternion(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation, 0.0f);
            this.powerBarCanvas.transform.DOMove(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position, 0.0f);
        }
    }

    float calculateHorizatonalDistance(Vector3 p1, Vector3 p2)
    {
        return Mathf.Sqrt(Mathf.Pow(p1.x - p2.x, 2) + Mathf.Pow(p1.z - p2.z, 2));
    }

    float setDistance()
    {
        float distanceToRightShoulder = calculateHorizatonalDistance(userCenter.position, rightShoulder.position);
        float distanceToLeftShoulder = calculateHorizatonalDistance(userCenter.position, leftShoulder.position);

        // if (distanceToLeftShoulder <= distanceToRightShoulder)
        // {
        //     return distanceToLeftShoulder;
        // }
        // else
        // {
        //     return distanceToRightShoulder;
        // }
        if (this.playingModeManager.coachManager.coachShoudlerTarget == Hand.Right)
        {
            return distanceToRightShoulder;
        }
        else
        {
            return distanceToLeftShoulder;
        }
    }

    public void powerBarUpdate(bool isUpdating)
    {
        this.powerBarCanvas.SetActive(true);
        if (!isUpdating)
        {
            return;
        }

        float furthestMultiplier = 2.5f;
        float furthestDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * furthestMultiplier;
        float idealDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength;
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
            if (distance < 0.1f) { powerBar.value = 0.01f; }
            else
            {
                powerBar.value = Mathf.Pow((distance / idealDistanceMin), 2.7f);
            }
        }
        else if (distance > idealDistanceMax)
        {
            if (distance > furthestDistance) { powerBar.value = 0.01f; }
            else
            {
                powerBar.value = Mathf.Abs(distance - furthestDistance) / Mathf.Abs(furthestDistance - idealDistanceMax);
            }
        }
        if (powerBar.value < 0.01f) { powerBar.value = 0.01f; }

        float value = powerBar.value * 0.6f + 0.4f;
        Color white = Color.HSVToRGB(0, 0, value);
        fillColor.color = Color.Lerp(Color.white, Color.green, powerBar.value * 0.2f);
        if (powerBar.value > 0.9f)
        {
            fillColor.color = Color.Lerp(Color.white, Color.green, powerBar.value);
            targetIcon.color = Color.Lerp(Color.white, Color.green, powerBar.value);
        }
        else
        {
            targetIcon.color = Color.white;
        }
    }

    public void closePowerBar()
    {
        this.powerBarCanvas.SetActive(false);
    }
}
