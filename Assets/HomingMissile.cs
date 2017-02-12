using UnityEngine;
using System.Collections;

public class HomingMissile : MonoBehaviour {

    [SerializeField] private float speed = 20f;
    private Transform target;

    void Start()
    {
        target = GameObject.FindGameObjectsWithTag("MissileTarget")[0].transform;

    }

	void Update () {
        //Target.transform.position
        Vector3 targetDirection = target.transform.position - transform.position;
        //targetDirection = targetDirection.normalized;
        Vector3 movingVector = (transform.forward * Time.deltaTime * speed);
        float step = speed * Time.deltaTime * .035f;
        Vector3 newDirection = Vector3.RotateTowards(transform.forward, targetDirection, step, 0.0F);
        transform.rotation = Quaternion.LookRotation(newDirection);
        
        transform.position += movingVector;

        Debug.DrawRay(transform.position, newDirection, Color.red);

        
	}
}
