using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserSimulate : MonoBehaviour
{
    [SerializeField] private GameObject mainCamera;
    [SerializeField] private GameObject userCapsule;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.Q))
        {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.0f, 0.01f);
        }

        if (Input.GetKey(KeyCode.E))
        {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.0f, -0.01f);
        }

        if (Input.GetKey(KeyCode.A))
        {
            this.mainCamera.transform.position += new Vector3(0.01f, 0.0f, 0.0f);
        }

        if (Input.GetKey(KeyCode.D))
        {
            this.mainCamera.transform.position += new Vector3(-0.01f, 0.0f, 0.0f);
        }

        if (Input.GetKey(KeyCode.W))
        {
            this.mainCamera.transform.position += new Vector3(0.0f, 0.01f, 0.0f);
        }

        if (Input.GetKey(KeyCode.S))
        {
            this.mainCamera.transform.position += new Vector3(0.0f, -0.01f, 0.0f);
        }
    }

    void FixedUpdate()
    {
        this.userCapsule.transform.position = new Vector3(this.mainCamera.transform.position.x,
                                                          this.userCapsule.transform.position.y,
                                                          this.mainCamera.transform.position.z);
        this.userCapsule.transform.rotation = Quaternion.Euler(0.0f, this.mainCamera.transform.rotation.y, 0.0f);
    }
}
