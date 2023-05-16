using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BarCue : MonoBehaviour
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
    private Slider bar;
    [SerializeField]
    private GameObject barCanvas;
    [SerializeField]
    private Transform barCanvasRect;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        this.barCanvas.transform.position = this.barCanvasRect.position;
        this.barCanvas.transform.rotation = this.barCanvasRect.rotation;
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

    public void barAidUpdate()
    {
        this.barCanvas.SetActive(true);

        float distance = setDistance();
        float furthestMultiplier = 2.4f;
        float furthestDistance = this.playingModeManager.mainManager.myUserInfo.userBodySize.armLength * furthestMultiplier;
        this.bar.maxValue = furthestDistance;

        if (distance > furthestDistance)
        {
            this.bar.value = furthestDistance;
        }
        else
        {
            this.bar.value = distance;
        }
    }

    public void closeBarAid()
    {
        this.barCanvas.SetActive(false);
    }
}
