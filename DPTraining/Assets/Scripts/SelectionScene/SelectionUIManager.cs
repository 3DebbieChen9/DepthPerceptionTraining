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
            case SelectionState.Noitom:
                this.toggleTitleText.text = "Use Noitom?";
                this.toggleContentTextR.text = "Use";
                this.toggleContentTextL.text = "Don't Use";
                break;
            case SelectionState.Place:
                this.toggleTitleText.text = "Where to train?";
                this.toggleContentTextR.text = "On Boxing Ring";
                this.toggleContentTextL.text = "On Floor";
                break;
            case SelectionState.Handedness:
                this.toggleTitleText.text = "Target's Handedness";
                this.toggleContentTextR.text = "Right Handed";
                this.toggleContentTextL.text = "Left Handed";
                break;
            default:
                break;
        }
    }
}
