using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxingGlovesInteraction : MonoBehaviour
{
    [SerializeField]
    private ModeSelection modeSelectionManager;
    private bool isInteracted = false;

    // Start is called before the first frame update
    void Start()
    {
        if (this.modeSelectionManager == null) {
            this.modeSelectionManager = GameObject.Find("ModeSelection").GetComponent<ModeSelection>();
        }
        this.isInteracted = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            if (!this.isInteracted) {
                this.isInteracted = true;
                this.modeSelectionManager.startSystem();
            }
        }
    }
}
