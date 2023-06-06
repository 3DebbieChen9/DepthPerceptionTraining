using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class KeypadInput : MonoBehaviour
{
    [SerializeField]
    public TMP_Text inputText;
    [SerializeField]
    public TMP_Text[] inputTextArray;
    [SerializeField]
    public int textIndex;

    // Start is called before the first frame update
    void Start()
    {
        textIndex = 0;
        if (this.inputTextArray.Length > 0)
        {
            this.inputText = this.inputTextArray[textIndex];
            this.inputText.color = Color.yellow;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void inputNumber(string num)
    {
        this.inputText.text += num;
    }

    public void clearInput()
    {
        this.inputText.text = "";
    }

    public void backspaceInput()
    {
        if (this.inputText.text.Length > 0)
        {
            this.inputText.text = this.inputText.text.Substring(0, this.inputText.text.Length - 1);
        }
    }

    public void pushable(bool isPushable)
    {
        this.inputText.text = isPushable.ToString();
    }

    public void btnRightIndex()
    {
        this.inputText.color = Color.white;
        this.textIndex = (this.textIndex + 1) % this.inputTextArray.Length;
        this.inputText = this.inputTextArray[this.textIndex];
        this.inputText.color = Color.yellow;
    }

    public void btnLeftIndex()
    {
        this.inputText.color = Color.white;
        this.textIndex = (this.textIndex - 1 + this.inputTextArray.Length) % this.inputTextArray.Length;
        this.inputText = this.inputTextArray[this.textIndex];
        this.inputText.color = Color.yellow;
    }
}
