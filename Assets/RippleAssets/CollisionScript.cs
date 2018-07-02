 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionScript : MonoBehaviour
{
	public float distanceX, distanceZ;
	public float[] waveAmplitude;
	public float magnitudeDivider;
	public Vector2[] impactPos;
	public float[] distance;
	public float speedWaveSpread;
	public float misteryMultiplier = 1f;
	private Mesh mesh;
	private int waveNumber;
	private MeshRenderer renderer;
	// Use this for initialization
	void Start ()
	{
		mesh = GetComponent<MeshFilter>().mesh;
		renderer = GetComponent<MeshRenderer>();
	}
	
	// Update is called once per frame
	void Update () {
		for (int i = 0; i < 8; i++)
		{
			waveAmplitude[i] = renderer.material.GetFloat("_WaveAmplitude" + (i + 1)); 
			if (waveAmplitude[i] > 0)
			{
				distance[i] += speedWaveSpread;
				renderer.material.SetFloat("_Distance" + (i + 1), distance[i]);
				renderer.material.SetFloat("_WaveAmplitude" + (i + 1), waveAmplitude[i] * 0.98f);
			}

			if (waveAmplitude[i] < 0.01)
			{
				renderer.material.SetFloat("_WaveAmplitude" + (i + 1), 0);
				distance[i] = 0;
			}
		}	
	}

	private void OnCollisionEnter(Collision col)
	{		
		if (col.rigidbody)
		{
			waveNumber++;
			if (waveNumber == 9)
			{
				waveNumber = 1;
			}
			waveAmplitude[waveNumber - 1] = 0;
			distance[waveNumber - 1] = 0;
			
			distanceX = this.transform.position.x - col.gameObject.transform.position.x;
			distanceZ = this.transform.position.z - col.gameObject.transform.position.z;
			impactPos[waveNumber - 1].x = col.transform.position.x;
			impactPos[waveNumber - 1].y = col.transform.position.z;
			
			renderer.material.SetFloat("_xImpact" + waveNumber, col.transform.position.x);
			renderer.material.SetFloat("_zImpact" + waveNumber, col.transform.position.z);
			
			renderer.material.SetFloat("_OffsetX" + waveNumber, distanceX / mesh.bounds.size.x * misteryMultiplier);
			renderer.material.SetFloat("_OffsetZ" + waveNumber, distanceZ / mesh.bounds.size.z * misteryMultiplier);
			renderer.material.SetFloat("_WaveAmplitude" + waveNumber, col.rigidbody.velocity.magnitude * magnitudeDivider);
		}
	}
}