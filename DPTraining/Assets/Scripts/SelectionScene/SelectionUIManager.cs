using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DepthPerceptionSystem;

public class SelectionUIManager : MonoBehaviour
{
    [SerializeField]
    private TMP_Text toggleTitleText;
    [SerializeField]
    private TMP_Text toggleContentTextR;
    [SerializeField]
    private TMP_Text toggleContentTextL;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void setSelectionToggleText(SelectionState state) {
        switch (state) {
            // case SelectionState.Noitom:
            //     // this.toggleTitleText.text = "Use Noitom?";
            //     // this.toggleContentTextR.text = "Use";
            //     // this.toggleContentTextL.text = "Don't Use";
            //     this.toggleTitleText.text = "使用 Noitom?";
            //     this.toggleContentTextR.text = "使用";
            //     this.toggleContentTextL.text = "不使用";
            //     break;
            case SelectionState.Place:
                // this.toggleTitleText.text = "Where to train?";
                // this.toggleContentTextR.text = "On Boxing Ring";
                // this.toggleContentTextL.text = "On Floor";
                this.toggleTitleText.text = "訓練場地?";
                this.toggleContentTextR.text = "擂台上";
                this.toggleContentTextL.text = "地板";
                break;
            case SelectionState.Handedness:
                // this.toggleTitleText.text = "Target's Handedness";
                // this.toggleContentTextR.text = "Right Handed";
                // this.toggleContentTextL.text = "Left Handed";
                this.toggleTitleText.text = "對手架式";
                this.toggleContentTextR.text = "正架";
                this.toggleContentTextL.text = "反架";
                break;
            default:
                break;
        }
    }
}
