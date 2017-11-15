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
    [SerializeField] private Transform modelTransform;
    public AnimationCurve transitionCurve;

    private Vector3 movingVector;
    private bool turboing;
    private bool coroutineRunning = false;
    private float currentSpeed;
    
    private string currentAction;
    private string prevAction;

    private float bias = 0.96f;

    private bool useWorldSpaceY;


    void start()
    {
        currentSpeed = normalSpeed;
    }    
    
    void Update() 
    {

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            useWorldSpaceY = !useWorldSpaceY;
            Debug.Log("Use WSY : " + useWorldSpaceY);
        }

        Vector3 moveCamTo = transform.position - transform.forward * 3f + transform.up * 2f;

        Camera.main.transform.position = Camera.main.transform.position * bias + moveCamTo * (1.0f - bias);
        var targetRotation = Quaternion.LookRotation(transform.position + transform.forward * 30f - Camera.main.transform.position, transform.up);
        Camera.main.transform.rotation = Quaternion.Slerp(Camera.main.transform.rotation, targetRotation, 0.1f);
        //Camera.main.transform.LookAt(transform);

        movingVector = transform.forward * Time.deltaTime * currentSpeed;
        transform.position += movingVector;

        float xRotation = Input.GetAxis("Vertical");
        float yRotation = 0;
        float zRotation = 0;

        if (Input.GetAxis("Horizontal") <= -.03f || Input.GetAxis("Horizontal") >= .03f)
        {
            if (modelTransform.localEulerAngles.z < 60 || modelTransform.localEulerAngles.z > 300)
                zRotation = -Input.GetAxis("Horizontal") * turnSpeed;

            yRotation = Input.GetAxis("Horizontal") * turnSpeed;
        }

        transform.Rotate(xRotation, 0f, 0f);

        if (useWorldSpaceY)
        {
            if (Vector3.Dot(transform.up, Vector3.down) > 0)
                yRotation = -yRotation;    
            transform.Rotate(0f, yRotation, 0f, Space.World);
        }
        else
        {
            transform.Rotate(0f, yRotation, 0);
        }

        modelTransform.Rotate(0f, 0f, zRotation);

        if(yRotation == 0)
        {
            var localAngles = modelTransform.localEulerAngles;
            float distanceToZero = localAngles.z;
            float distanceTo360 = 360 - localAngles.z;

            if (modelTransform.eulerAngles.z < 0)
            {
                distanceToZero = 0 - localAngles.z;
                distanceTo360 = 360 + localAngles.z;
            }

            if(distanceToZero < distanceTo360)
                modelTransform.localEulerAngles = Vector3.Lerp(localAngles, new Vector3(0, 0, 0), 0.1f);
            else
                modelTransform.localEulerAngles = Vector3.Lerp(localAngles, new Vector3(0, 0, 360), 0.1f);
        }


        float shipTerrainHight = Terrain.activeTerrain.SampleHeight(transform.position);

        if (shipTerrainHight > transform.position.y)
            transform.position = new Vector3(transform.position.x,
                                                shipTerrainHight,
                                                transform.position.z);

        bool turbo = Input.GetKey(KeyCode.Space);
        bool brake = Input.GetKey(KeyCode.E);

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
    }
    
    
}
