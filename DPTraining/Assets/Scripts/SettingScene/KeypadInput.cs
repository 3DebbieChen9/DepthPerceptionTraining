using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class KeypadInput : MonoBehaviour
{
    [SerializeField]
    public TMP_Text inputText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void inputNumber(string num) {
        this.inputText.text += num;
    }

    public void clearInput() {
        this.inputText.text = "";
    }
}
