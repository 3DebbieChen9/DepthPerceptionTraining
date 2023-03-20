using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UITesting : MonoBehaviour
{
    [SerializeField]
    public GameObject testingUI;

    [SerializeField]
    public GameObject canvas_countdown;
    [SerializeField]
    public TMP_Text readyUnit_text;
    [SerializeField]
    public TMP_Text readyCountdown_text;
    [SerializeField]
    public Image readyCountdown_image;
    
    [SerializeField]
    public GameObject canvas_result;
    [SerializeField]
    public TMP_Text resultUnit_text;
    [SerializeField]
    public TMP_Text resultScore_text;
    [SerializeField]
    public TMP_Text resultDescription_text;

    [SerializeField]
    public GameObject canvas_start;
    [SerializeField]
    public TMP_Text startTitle_text;
    [SerializeField]
    public TMP_Text startDescription_text;

    [SerializeField]
    public GameObject canvas_final;
    [SerializeField]
    public TMP_Text finalTitle_text;
    [SerializeField]
    public TMP_Text finalDescription_text;

    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
