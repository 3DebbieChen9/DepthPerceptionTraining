using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoxingBagInteraction : MonoBehaviour
{
    [SerializeField]
    private SettingSceneManager settingSceneManager;

    // Start is called before the first frame update
    void Start()
    {
        if (this.settingSceneManager == null) {
            this.settingSceneManager = GameObject.Find("SettingSceneManager").GetComponent<SettingSceneManager>();
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
                    this.settingSceneManager.toggleSelect(false);
                    break;
                case "Choice_R":
                    this.settingSceneManager.toggleSelect(true);
                    break;
                case "Choice_Testing":
                    this.settingSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Testing);
                    break;
                case "Choice_Training":
                    this.settingSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Training_Traditional);
                    break;
                case "Choice_Depth":
                    this.settingSceneManager.sceneChoicesSelect(SystemManager.SystemMode.Training_Hint);
                    break;
                default:
                    break;
            }
        }
    }
}
