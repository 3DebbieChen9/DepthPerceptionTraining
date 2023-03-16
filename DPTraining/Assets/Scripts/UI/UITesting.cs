using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UITesting : MonoBehaviour
{
    [SerializeField]
    public GameObject testingUI_Canvas;

    [SerializeField]
    public GameObject front_Canvas;
    [SerializeField]
    public TMP_Text readyUnit_text;
    [SerializeField]
    public TMP_Text readyCountdown_text;
    [SerializeField]
    public Image readyCountdown_image;
    
    [SerializeField]
    public GameObject side_Canvas;
    [SerializeField]
    public TMP_Text resultUnit_text;
    [SerializeField]
    public TMP_Text resultScore_text;
    [SerializeField]
    public TMP_Text resultDescription_text;

    [SerializeField]
    public GameObject initial_Canvas;
    [SerializeField]
    public TMP_Text initialTitle_text;
    [SerializeField]
    public TMP_Text initialDescription_text;

    [SerializeField]
    public GameObject final_Canvas;
    [SerializeField]
    public TMP_Text finalTitle_text;
    [SerializeField]
    public TMP_Text finalDescription_text;

    
    // Start is called before the first frame update
    void Start()
    {
        this.testingUI_Canvas.SetActive(false);
        this.front_Canvas.SetActive(false);
        this.side_Canvas.SetActive(false);
        this.final_Canvas.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
