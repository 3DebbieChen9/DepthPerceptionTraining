using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneBuilding : MonoBehaviour
{
    [SerializeField]
    public GameObject _gym;
    [SerializeField]
    private LineRenderer[] _verticalLines;
    [SerializeField]
    private LineRenderer[] _horizontalLines;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SceneInitialization()
    {
        _gym.SetActive(false);
    }
}
