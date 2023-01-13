using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    [SerializeField]
    public float timeTarget = 7.0f;
    [SerializeField]
    public float timeLeft;
    [SerializeField]
    public bool timerOn = false;
    [SerializeField]
    public bool timesUp = false;
    [SerializeField]
    public Image timerCircle;
    [SerializeField]
    public TMP_Text timerText;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(this.timerOn) {
            if (this.timeLeft > 0)
            {
                this.timeLeft -= Time.deltaTime;
                this.timerText.text = this.timeLeft.ToString("0");
                this.timerCircle.fillAmount = this.timeLeft / timeTarget;
            }
            else
            {
                Debug.Log("Time's up!");
                this.timerText.text = "Start!";
                this.timesUp = true;
                this.timerOn = false;
            }
        }
        
    }

    public void resetTimer() {
        this.timeLeft = this.timeTarget;
        this.timerOn = true;
    }
}
