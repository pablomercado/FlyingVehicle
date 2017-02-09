using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

    private float Speed = 250f;
    private Vector3 movingVector;

	// Update is called once per frame
	void Update () {

        movingVector = transform.forward * Time.deltaTime * Speed;
        transform.position += movingVector;

    }
}
