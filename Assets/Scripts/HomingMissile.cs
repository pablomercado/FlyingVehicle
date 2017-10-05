using UnityEngine;
using System.Collections;
using System.Diagnostics;
using UnityEngine.Assertions.Comparers;
using Debug = UnityEngine.Debug;

public class HomingMissile : MonoBehaviour {

    [SerializeField] private float speed = 20f;
    [SerializeField] private GameObject Explosion;
    [SerializeField] private float lifeTime = 1f;
    private GameObject[] targets;
	private GameObject closestTarget;
    
    void Start()
    {
        StartCoroutine(waitToDestroy());
        closestTarget = getClosestTarget();
    }

    private GameObject getClosestTarget()
    {
        targets = GameObject.FindGameObjectsWithTag("MissileTarget");
        GameObject _closestTarget = targets[0];
        float closestDistance = 100000f;
        for (int i = 0; i < targets.Length; i++)
        {
            var distanceVector = targets[i].transform.position - transform.position;
            if (distanceVector.magnitude < closestDistance)
            {
                _closestTarget = targets[i];
                closestDistance = distanceVector.magnitude;
            }
        }
        return _closestTarget;
    }
    
	void Update ()
	{
	    if (closestTarget == null)
	        closestTarget = getClosestTarget();
        Vector3 targetDirection = closestTarget.transform.position - transform.position;
        float step = speed * Time.deltaTime * .035f;
        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, step, 0.0F);
        transform.rotation = Quaternion.LookRotation(newDirection);
        Vector3 movingVector = (transform.forward * Time.deltaTime * speed);
        transform.position += movingVector;
        Debug.DrawRay(transform.position, newDirection, Color.red);
	}

    void OnCollisionEnter(Collision collision)
    {
//        ContactPoint contact = collision.contacts[0];
//        Quaternion rot = Quaternion.FromToRotation(Vector3.up, contact.normal);
//        Vector3 pos = contact.point;
//        Instantiate(explosionPrefab, pos, rot);
        if (collision.gameObject.tag == "MissileTarget")
            Destroy(collision.gameObject);
        var explosion = Instantiate(Explosion, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }
    
    private IEnumerator waitToDestroy()
    {
        yield return new WaitForSeconds(lifeTime);
        var explosion = Instantiate(Explosion, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }

}
