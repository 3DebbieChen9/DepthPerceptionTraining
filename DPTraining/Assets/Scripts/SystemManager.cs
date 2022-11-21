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
    public float avgDistnace = 0.0f;
    [SerializeField]
    public float avgArmLength = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
