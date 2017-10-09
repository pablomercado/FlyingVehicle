using UnityEngine;
using System.Collections;

public class ShipController : MonoBehaviour {

    public GameObject Missile;

    [SerializeField] Rigidbody Rigidbody;
    [SerializeField] float normalSpeed = 90f;
    [SerializeField] float turboSpeed = 150f;
    [SerializeField] float brakeSpeed = 20f;
    [SerializeField] private float turnSpeed = 1f;
    [SerializeField] private GameObject explosionFX;
    public AnimationCurve transitionCurve;

    private Vector3 movingVector;
    private bool turboing;
    private bool coroutineRunning = false;
    private float currentSpeed;
    
    private string currentAction;
    private string prevAction;


    void start()
    {
        currentSpeed = normalSpeed;
    }    
    
    void Update() {

        Vector3 moveCamTo = transform.position - transform.forward * 3f + Vector3.up * 2f;
        float bias = 0.96f;
        Camera.main.transform.position = Camera.main.transform.position * bias + moveCamTo * (1.0f - bias);
        Camera.main.transform.LookAt(transform.position + transform.forward * 30f);

        movingVector = transform.forward * Time.deltaTime * currentSpeed;
        transform.position += movingVector;
        
        transform.Rotate(Input.GetAxis("Vertical"), 0f, 0f);
        if (Input.GetAxis("Horizontal") <= -.03f || Input.GetAxis("Horizontal") >= .03f)
        {
            if (transform.localEulerAngles.z < 60 || transform.localEulerAngles.z > 300)
            {
                transform.Rotate(0f, 0f, -Input.GetAxis("Horizontal")* turnSpeed);
            }
            transform.Rotate(0, Input.GetAxis("Horizontal") * turnSpeed, 0, Space.World);
        }
        else
        {
            if(transform.eulerAngles.z <= 180)
                transform.localEulerAngles = Vector3.Lerp(transform.localEulerAngles, new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, 0), 0.1f);
            else
                transform.localEulerAngles = Vector3.Lerp(transform.localEulerAngles, new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, 360), 0.1f);
        }
        
        float shipTerrainHight = Terrain.activeTerrain.SampleHeight(transform.position);

        if (shipTerrainHight > transform.position.y)
            transform.position = new Vector3(transform.position.x,
                                                shipTerrainHight,
                                                transform.position.z);

        bool turbo = Input.GetKey(KeyCode.Space);
        bool brake = Input.GetKey(KeyCode.C);

        if (turbo)
            currentSpeed = turboSpeed;
        else if(brake)
            currentSpeed = brakeSpeed;
        else 
            currentSpeed = normalSpeed;
        
        
        if (Input.GetKeyDown(KeyCode.G))
        {
            Instantiate(Missile, transform.position + transform.forward * 15f, transform.rotation);
        }
	}

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "Missile")
        {
            var explosion = Instantiate(explosionFX, transform.position, Quaternion.identity);
            Destroy(gameObject);    
        }
        Debug.Log(collision.gameObject);
    }
    
    
}
