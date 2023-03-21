using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxingBagInteraction : MonoBehaviour
{
    [SerializeField]
    private SelectionSceneManager selectionSceneManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.selectionSceneManager == null) {
            this.selectionSceneManager = GameObject.Find("SelectionSceneManager").GetComponent<SelectionSceneManager>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other) {
        if (other.gameObject.tag == "Glove_R" || other.gameObject.tag == "Glove_L") {
            switch (this.gameObject.name) {
                case "Choice_L":
                    this.selectionSceneManager.toggleSelect(false);
                    break;
                case "Choice_R":
                    this.selectionSceneManager.toggleSelect(true);
                    break;
                case "Choice_Testing":
                    this.selectionSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Testing);
                    break;
                case "Choice_Training":
                    this.selectionSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Training_Traditional);
                    break;
                case "Choice_Depth":
                    this.selectionSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Training_Hint);
                    break;
                default:
                    break;
            }
        }
    }
}
