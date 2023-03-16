using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UICalibration : MonoBehaviour
{
    [SerializeField]
    public GameObject calibrationUI_Canvas;
    [SerializeField]
    public TMP_Text stepTitle_text;
    [SerializeField]
    public TMP_Text stepDescription_text;
    [SerializeField]
    public TMP_Text resultTitle_text;
    [SerializeField]
    public TMP_Text resultDescription_text;

    [SerializeField]
    public Image resultBackgroundImage;
    
    // Start is called before the first frame update
    void Start()
    {
        this.resultBackgroundImage.enabled = false;
        this.calibrationUI_Canvas.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
