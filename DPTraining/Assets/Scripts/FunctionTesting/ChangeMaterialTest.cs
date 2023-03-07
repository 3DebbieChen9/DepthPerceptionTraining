using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ChangeMaterialTest : MonoBehaviour
{
    [SerializeField]
    public GameObject m_gameObject;
    public Color m_color;

    // Start is called before the first frame update
    void Start()
    {
        this.m_color = m_gameObject.GetComponent<MeshRenderer>().materials[0].color;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void changeMaterial_red() {
        if (this.m_gameObject.GetComponent<MeshRenderer>().materials.Length <= 1) {
            this.m_gameObject.GetComponent<MeshRenderer>().materials[0].color = Color.red;
        }
        else {
            foreach (Material m in this.m_gameObject.GetComponent<MeshRenderer>().materials) {
                if(m.name == "M_Body (Instance)") {
                    m.color = Color.red;
                    break;
                }
            }
        }
    }
    public void changeMaterial_white() {
        this.m_gameObject.GetComponent<MeshRenderer>().materials[0].color = m_color;
    }
}
