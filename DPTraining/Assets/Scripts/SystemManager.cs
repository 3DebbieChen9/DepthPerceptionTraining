using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SystemManager : MonoBehaviour
{
    public enum SystemMode {
        Calibration_Size,
        Calibration_ArmLength,
        Testing,
        Training,
    }
    
    [SerializeField]
    public SystemMode cur_systemMode = SystemMode.Calibration_Size;

    [SerializeField]
    public float _scaleTransferFactor = 1.0f; // vr-distance / real-distance
    [SerializeField]
    public float _referenceDistance = 0.30f; // in meters
    [SerializeField]
    public float avgDistance = 0.0f; // in meters
    [SerializeField]
    public float avgArmLength = 0.0f; // in meters

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
