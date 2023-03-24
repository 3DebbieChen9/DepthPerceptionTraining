using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoachRenderManager : MonoBehaviour
{
    [SerializeField]
    public GameObject[] m_targetGameObjects;
    public Color[] m_targetOriginColors;

    // Start is called before the first frame update
    void Start()
    {
         for (int i = 0; i < m_targetGameObjects.Length; i++) {
            if (m_targetGameObjects[i].GetComponent<MeshRenderer>().materials.Length <= 1) {
                m_targetOriginColors[i] = m_targetGameObjects[i].GetComponent<MeshRenderer>().materials[0].color;
            }
            else {
               foreach (Material m in m_targetGameObjects[i].GetComponent<MeshRenderer>().materials) {
                    if(m.name == "M_Body (Instance)") {
                        m_targetOriginColors[i] = m.color;
                        break;
                    }
                } 
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void clearCoachColor() {
        for (int i = 0; i < m_targetGameObjects.Length; i++) {
            if (m_targetGameObjects[i].GetComponent<MeshRenderer>().materials.Length <= 1) {
                m_targetGameObjects[i].GetComponent<MeshRenderer>().materials[0].color = m_targetOriginColors[i];
            }
            else {
               foreach (Material m in m_targetGameObjects[i].GetComponent<MeshRenderer>().materials) {
                    if(m.name == "M_Body (Instance)") {
                        m.color = m_targetOriginColors[i];
                        break;
                    }
                } 
            }
        }
    }
}
