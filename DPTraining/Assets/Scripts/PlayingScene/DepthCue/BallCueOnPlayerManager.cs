using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DepthPerceptionSystem;

public class BallCueOnPlayerManager : MonoBehaviour
{
    [SerializeField]
    private PlayingModeManager playingModeManager;

    [SerializeField]
    private GameObject lightBallPrefab;
    [SerializeField]
    private Transform rightShoulder;
    [SerializeField]
    private Transform leftShoulder;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void instantiateBallCueOnPlayer(Hand hand)
    {
        switch (hand)
        {
            case Hand.Left:
                if (FindGameObjectInChildWithTag(this.playingModeManager.mainManager.OVRBoxingLeft, "LightBall") != null)
                {
                    return;
                }
                GameObject leftBall = Instantiate(this.lightBallPrefab,
                                                    this.playingModeManager.mainManager.OVRBoxingLeft.transform.position + this.playingModeManager.mainManager.OVRBoxingLeft.transform.right * 0.133f,
                                                    this.playingModeManager.mainManager.OVRBoxingLeft.transform.rotation,
                                                    this.playingModeManager.mainManager.OVRBoxingLeft.transform);
                leftBall.GetComponent<BallCueOnPlayer>().target = this.rightShoulder.transform;
                break;
            case Hand.Right:
                if (FindGameObjectInChildWithTag(this.playingModeManager.mainManager.OVRBoxingRight, "LightBall") != null)
                {
                    return;
                }
                GameObject rightBall = Instantiate(this.lightBallPrefab,
                                                    this.playingModeManager.mainManager.OVRBoxingRight.transform.position + this.playingModeManager.mainManager.OVRBoxingRight.transform.right * 0.133f,
                                                    this.playingModeManager.mainManager.OVRBoxingRight.transform.rotation,
                                                    this.playingModeManager.mainManager.OVRBoxingRight.transform);
                rightBall.GetComponent<BallCueOnPlayer>().target = this.leftShoulder.transform;
                break;
            case Hand.Both:
                if (FindGameObjectInChildWithTag(this.playingModeManager.mainManager.OVRBoxingLeft, "LightBall") != null)
                {
                    return;
                }
                leftBall = Instantiate(this.lightBallPrefab,
                                        this.playingModeManager.mainManager.OVRBoxingLeft.transform.position + this.playingModeManager.mainManager.OVRBoxingLeft.transform.right * 0.133f,
                                        this.playingModeManager.mainManager.OVRBoxingLeft.transform.rotation,
                                        this.playingModeManager.mainManager.OVRBoxingLeft.transform);
                leftBall.GetComponent<BallCueOnPlayer>().target = this.rightShoulder.transform;
                if (FindGameObjectInChildWithTag(this.playingModeManager.mainManager.OVRBoxingRight, "LightBall") != null)
                {
                    return;
                }
                rightBall = Instantiate(this.lightBallPrefab,
                                        this.playingModeManager.mainManager.OVRBoxingRight.transform.position + this.playingModeManager.mainManager.OVRBoxingRight.transform.right * 0.133f,
                                        this.playingModeManager.mainManager.OVRBoxingRight.transform.rotation,
                                        this.playingModeManager.mainManager.OVRBoxingRight.transform);
                rightBall.GetComponent<BallCueOnPlayer>().target = this.leftShoulder.transform;
                break;
            default:
                break;
        }
    }

    public void destroyBallCueOnPlayer(Hand hand = Hand.None)
    {
        switch (hand)
        {
            case Hand.Right:
                foreach (Transform child in this.playingModeManager.mainManager.OVRBoxingLeft.transform)
                {
                    if (child.gameObject.tag == "LightBall")
                    {
                        child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                    }
                }
                break;
            case Hand.Left:
                foreach (Transform child in this.playingModeManager.mainManager.OVRBoxingRight.transform)
                {
                    if (child.gameObject.tag == "LightBall")
                    {
                        child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                    }
                }
                break;
            default:
                foreach (Transform child in this.playingModeManager.mainManager.OVRBoxingLeft.transform)
                {
                    if (child.gameObject.tag == "LightBall")
                    {
                        child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                    }
                }
                foreach (Transform child in this.playingModeManager.mainManager.OVRBoxingRight.transform)
                {
                    if (child.gameObject.tag == "LightBall")
                    {
                        child.gameObject.GetComponent<BallCueOnPlayer>().destroy();
                    }
                }
                break;
        }
    }

    public GameObject FindGameObjectInChildWithTag(GameObject parent, string tag)
    {
        foreach (Transform child in parent.transform)
        {
            if (child.gameObject.tag == tag)
            {
                return child.gameObject;
            }
        }
        return null;
    }
}
