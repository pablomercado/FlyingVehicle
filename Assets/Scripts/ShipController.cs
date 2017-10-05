﻿using UnityEngine;
using System.Collections;
using System.Diagnostics;
using UnityEditor;
using Debug = UnityEngine.Debug;

public class ShipController : MonoBehaviour {

    public GameObject Bullet;

    [SerializeField]
    Rigidbody Rigidbody;

    [SerializeField]
    float Speed = 90f;

    [SerializeField]
    float TurboScalar = 1f;

    public AnimationCurve transitionCurve;

    private Vector3 movingVector;
    private bool turboing;
    private bool coroutineRunning = false;

    private string currentAction;
    private string prevAction;

    // Update is called once per frame
    void Update() {

        Vector3 moveCamTo = transform.position - transform.forward * 3f + Vector3.up * 2f;
        float bias = 0.96f;
        Camera.main.transform.position = Camera.main.transform.position * bias + moveCamTo * (1.0f - bias);
        Camera.main.transform.LookAt(transform.position + transform.forward * 30f);

        movingVector = transform.forward * Time.deltaTime * Speed * TurboScalar;
        transform.position += movingVector;
        
//        transform.Rotate(Input.GetAxis("Vertical"), 0f, -Input.GetAxis("Horizontal") * 3f);
//        transform.Rotate(Input.GetAxis("Vertical"), Input.GetAxis("Horizontal"), 0f);
        transform.Rotate(Input.GetAxis("Vertical"), 0f, 0f);
        if (Input.GetAxis("Horizontal") <= -.03f || Input.GetAxis("Horizontal") >= .03f)
        {
            if (transform.localEulerAngles.z < 90 || transform.localEulerAngles.z > 270)
            {
                transform.Rotate(0f, 0f, -Input.GetAxis("Horizontal"));
            }
            transform.Rotate(0, Input.GetAxis("Horizontal"), 0, Space.World);
        }
        else
        {
            if(transform.eulerAngles.z <= 180)
                transform.localEulerAngles = Vector3.Lerp(transform.localEulerAngles, new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, 0), 0.05f);
            else
                transform.localEulerAngles = Vector3.Lerp(transform.localEulerAngles, new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, 360), 0.05f);
        }
            Debug.Log(transform.rotation.eulerAngles.y);        
        
        
        float shipTerrainHight = Terrain.activeTerrain.SampleHeight(transform.position);

        if (shipTerrainHight > transform.position.y)
            transform.position = new Vector3(transform.position.x,
                                                shipTerrainHight,
                                                transform.position.z);

        bool turbo = Input.GetKey(KeyCode.U);
        bool brake = Input.GetKey(KeyCode.LeftShift);

        if (brake == false && turbo == false)
        {
            currentAction = "normal";
            StartCoroutine(TransitionTurboScalator(1f, 1f));
        }
        if (brake)
        {
            currentAction = "brake";
            StartCoroutine(TransitionTurboScalator(1f, .5f));
        }
        else if (turbo)
        { 
            currentAction = "turbo";
            StartCoroutine(TransitionTurboScalator(1f, 2f));
        }

        //Debug.Log((brake == false && turbo == false));

        Speed -= transform.forward.y * Time.deltaTime * TurboScalar;
        if (Speed < 10f)
            Speed = 10f;

        if (Input.GetKeyDown(KeyCode.Space))
        {
            Instantiate(Bullet, transform.position + transform.forward * 5f, transform.rotation);
        }

	}

    IEnumerator TransitionTurboScalator(float a, float b)
    {
        if (prevAction != currentAction)
        {
            prevAction = currentAction;
            if (!coroutineRunning)
            {
                coroutineRunning = true;
                float t = 0f;
                while (t < 1f)
                {
                    t += Time.deltaTime;
                    TurboScalar = Mathf.Lerp(a, b, t);
                    //Debug.Log("t: " + t);
                    yield return null;
                }
                coroutineRunning = false;
            }
        }
    }
}
