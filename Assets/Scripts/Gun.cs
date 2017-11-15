using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{

	[SerializeField] private GameObject bulletGO;
    [SerializeField] private float bulletCooldown = 1.5f;
    private float bulletTimer;

	void Update () 
    {
		if (Input.GetKey(KeyCode.F))
		{
            if (bulletTimer <= 0)
            {
                Instantiate(bulletGO, transform.position + transform.forward * 5f, transform.rotation);
                bulletTimer = bulletCooldown;
            }
            else
            {
                bulletTimer -= Time.deltaTime;
            }
		}

        if (Input.GetKeyUp(KeyCode.F))
        {
            bulletTimer = 0;
        }
	}
}
