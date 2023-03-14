using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxingBagInteraction_2 : MonoBehaviour
{
    [SerializeField]
    private ModeSelection modeSelectionManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.modeSelectionManager == null) {
            this.modeSelectionManager = GameObject.Find("ModeSelection").GetComponent<ModeSelection>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            this.modeSelectionManager.switchOnRing();
        }
    }
}
