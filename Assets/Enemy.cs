using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{

	private float energy = 10f;
	private float currentEnergy;
	private Color healthy = Color.blue;
	private Color dying = Color.red;

	void Start () {
		currentEnergy = energy;
		gameObject.GetComponent<Renderer>().material.color = Color.blue;
	}

	void Update()
	{
		
	}

	private void OnCollisionEnter(Collision other)
	{
		currentEnergy -= 1f;
		var energyRatio = currentEnergy / energy;
		gameObject.GetComponent<Renderer>().material.color = Color.Lerp(Color.red, Color.blue, energyRatio);
		if (currentEnergy <= 0)
			Destroy(gameObject);
		
		Debug.Log("currentEnergy: " + currentEnergy);
		Debug.Log("energyRatio: " + energyRatio);
	}
}