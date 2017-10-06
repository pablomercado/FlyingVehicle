using UnityEngine;
using System.Collections;

public class Gun : MonoBehaviour
{

	[SerializeField] private GameObject bulletGO;

		void Update () {
		if (Input.GetKeyDown(KeyCode.F))
		{
			Instantiate(bulletGO, transform.position + transform.forward * 5f, transform.rotation);
		}
	}
}
