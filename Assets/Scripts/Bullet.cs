using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

    [SerializeField] private GameObject explosionGO;
    [SerializeField] private float Speed = 250f;
    private Vector3 movingVector;
	// Update is called once per frame
	void Update () {

        movingVector = transform.forward * Time.deltaTime * Speed;
        transform.position += movingVector;

    }

    private void OnCollisionEnter(Collision other)
    {
        var explosion = Instantiate(explosionGO, transform.position, Quaternion.identity);
        Destroy(gameObject);
        Destroy(explosion, 2f);
    }
    
}