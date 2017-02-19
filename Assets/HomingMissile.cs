using UnityEngine;
using System.Collections;

public class HomingMissile : MonoBehaviour {

    [SerializeField] private float speed = 20f;
    [SerializeField] private GameObject Explosion;
    private Transform target;
    private float lifeTime = 1f;
    

    void Start()
    {
        target = GameObject.FindGameObjectsWithTag("MissileTarget")[0].transform;
        StartCoroutine(waitToDestroy());
    }

	void Update () {
        Vector3 targetDirection = target.transform.position - transform.position;
        float step = speed * Time.deltaTime * .035f;
        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, step, 0.0F);
        transform.rotation = Quaternion.LookRotation(newDirection);
        Vector3 movingVector = (transform.forward * Time.deltaTime * speed);
        transform.position += movingVector;
        Debug.DrawRay(transform.position, newDirection, Color.red);
	}

    private IEnumerator waitToDestroy()
    {
        yield return new WaitForSeconds(lifeTime);
        var explosion = Instantiate(Explosion, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }

}
