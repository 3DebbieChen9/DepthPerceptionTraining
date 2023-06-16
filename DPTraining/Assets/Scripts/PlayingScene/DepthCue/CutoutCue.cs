using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using DepthPerceptionSystem;

public class CutoutCue : MonoBehaviour
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
    private RectTransform mask;
    [SerializeField]
    private Image image;
    [SerializeField]
    private GameObject cutoutCanvas;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void FixedUpdate()
    {
        if (this.cutoutCanvas.activeSelf)
        {
            this.cutoutCanvas.transform.DORotateQuaternion(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation, 0.0f);
            this.cutoutCanvas.transform.DOMove(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position, 0.0f);
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

    public void cutoutAidUpdate(bool isUpdating)
    {
        this.cutoutCanvas.SetActive(true);
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

        float canvasWorstScale = 0.18f;
        float canvasIdealScale = 0.72f;
        float canvasScale = 0.5f;
        if (distance <= idealDistanceMax && distance >= idealDistanceMin)
        {
            canvasScale = canvasIdealScale;
        }
        else if (distance < idealDistanceMin)
        {
            if (distance < 0.1f) { canvasScale = canvasWorstScale; }
            else
            {
                float canvasAlmostIdealScale = 0.55f;
                canvasScale = canvasAlmostIdealScale - Mathf.Pow((Mathf.Abs(distance - idealDistanceMin) / (idealDistanceMin) * Mathf.Abs(canvasAlmostIdealScale - canvasWorstScale)), Mathf.Log(1.8f)) * 1.5f;
                // canvasScale = Mathf.Pow(distance, 2.7f) + 0.3f;
                // float canvasAlmostIdealScale = 0.4f;
                // canvasScale = canvasAlmostIdealScale - (Mathf.Abs(distance - idealDistanceMin) / (idealDistanceMin) * Mathf.Abs(canvasAlmostIdealScale - canvasWorstScale));
            }
        }
        else if (distance > idealDistanceMax)
        {
            if (distance > furthestDistance) { canvasScale = canvasWorstScale; }
            else
            {
                canvasScale = canvasIdealScale - Mathf.Abs(distance - idealDistanceMax) / Mathf.Abs(furthestDistance - idealDistanceMax) * Mathf.Abs(canvasIdealScale - canvasWorstScale);
            }
        }

        Debug.Log($"distance: {distance}, canvasScale: {canvasScale}");
        if (canvasScale < canvasWorstScale) { canvasScale = canvasWorstScale; }
        else if (canvasScale > canvasIdealScale) { canvasScale = canvasIdealScale; }

        this.mask.localScale = new Vector3(canvasScale, canvasScale, canvasScale);
    }

    public void closeCutoutAid()
    {
        this.cutoutCanvas.SetActive(false);
    }
}
