using UnityEngine;
using System.Collections;

public class HomingMissile : MonoBehaviour {

    [SerializeField] private float speed = 10f;
    private Transform target;

    void Start()
    {
        target = GameObject.FindGameObjectsWithTag("MissileTarget")[0].transform;

    }

	void Update () {
        //Target.transform.position
        Vector3 targetDirection = target.transform.position - transform.position;
        Debug.Log(targetDirection.magnitude);
        Vector3 movingVector = (transform.forward + targetDirection) * Time.deltaTime * speed;

        transform.position += movingVector;
        transform.LookAt(targetDirection);
	}
}
