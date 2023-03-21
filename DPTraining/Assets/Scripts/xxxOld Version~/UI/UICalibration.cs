using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UICalibration : MonoBehaviour
{
    [SerializeField]
    public GameObject calibrationUI;
    [SerializeField]
    public TMP_Text instructionTitle_text;
    [SerializeField]
    public TMP_Text instruction_text;
    [SerializeField]
    public Image instructionImage;
    [SerializeField]
    public Sprite[] instructionImagesSource;

    [SerializeField]
    public TMP_Text resultTitle_text;
    [SerializeField]
    public TMP_Text resultDescription_text;

    [SerializeField]
    public GameObject resultCanvas;
    
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
