using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

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

    void recenterUICanvas()
    {
        this.cutoutCanvas.transform.DORotateQuaternion(Quaternion.Euler(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.x, this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.y, this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.rotation.eulerAngles.z), 0.0f);
        this.cutoutCanvas.transform.DOMove(new Vector3(this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.x, 0.0f, this.playingModeManager.mainManager.OVRCameraRig.GetComponent<OVRCameraRig>().centerEyeAnchor.position.z), 0.0f);
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

    public void cutoutAidUpdate()
    {
        this.cutoutCanvas.SetActive(true);
        this.recenterUICanvas();

        float furthestMultiplier = 2.4f;
        float furthestDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * furthestMultiplier;
        float idealDistance = furthestDistance * 0.5f;
        float idealDistanceMin = idealDistance - idealDistance * (3.0f / 8.0f);
        float idealDistanceMax = idealDistance + idealDistance * (3.0f / 8.0f);

        float distance = setDistance();

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

        float canvasClosest = 600.0f;
        float canvasFurthest = 850.0f;
        float canvasLocalPositionZ = canvasClosest + (Mathf.Abs(distance - idealDistance) / (idealDistanceMin)) * (canvasFurthest - canvasClosest);
        if (canvasLocalPositionZ < canvasClosest)
        {
            canvasLocalPositionZ = canvasClosest;
        }
        else if (canvasLocalPositionZ > canvasFurthest)
        {
            canvasLocalPositionZ = canvasFurthest;
        }
        // this.mask.localPosition = new Vector3(0.0f, -220.0f, canvasLocalPositionZ);
    }

    public void closeCutoutAid()
    {
        this.cutoutCanvas.SetActive(false);
    }
}
