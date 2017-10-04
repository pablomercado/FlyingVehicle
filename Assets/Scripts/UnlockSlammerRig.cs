using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Security.Cryptography.X509Certificates;

public class UnlockSlammerRig : MonoBehaviour {
    [SerializeField] private float pogStartScale = 1f;
    [SerializeField] private GameObject pogGO;
    [SerializeField] private GameObject slammerGO;
    [SerializeField] private GameObject pedestalGO;
    [SerializeField] private GameObject centerPos;
    [SerializeField] private GameObject VisualFX;
    [Range(2f, 40)]
    [SerializeField] private float radious = 10f;
    [SerializeField] private float finalRadious = 5f;
    [SerializeField] private GameObject[] bezierPointsGO = new GameObject[10];
    [SerializeField] private float circleAnimationDuration = 5f;
    [SerializeField] private float singleLoopTime = 2f;
    [SerializeField] private float splineAnimationDuration = 2f;
    [SerializeField] private float slammerAnimationDuration = 0.8f;
    [SerializeField] private float radiousAnimationTime = 1.5f;
    [SerializeField] private AnimationCurve animationCurve;
    [SerializeField] private GameObject slammerPosition;
    [SerializeField] private Vector3 slammerInitialScale = Vector3.one * 1.8f;
    [SerializeField] private Vector3 slammerFinalScale = Vector3.one * 0.3f;

    [Space(5)]
    [Header("Sequence timming")]
    [Range(0f, 1f)] [SerializeField] private float whenToMoveCirlceToSlammer = 0.35f;
    [Range(0f, 1f)] [SerializeField] private float whenShowSpecialFX = 0.5f;
    [Range(0f, 1f)] [SerializeField] private float whenRadiousAnimation = 0.7f;
    [Range(0f, 1f)] [SerializeField] private float whenContemplateSlammer = 0.83f;

    
    [Header("Perlin Noise")]
    [SerializeField] private float perlinMaxY = -1f;
    [SerializeField] private float perlinNoiseScale = 2f;
    [SerializeField] private float pogNormalizedDuration = 0.9f;

    public bool Done { get; private set; }

    private BezierEvaluator bezierEvaluator;
    private Transform capObject;
    private Transform fxObject;
    private string currentUIAnimatorState;
    private float Pi2 = Mathf.PI * 2;
    private GameObject[] pogs;
    private GameObject slammer;
    private GameObject pedestal;
    private AnimTimeTracker generalTimeTracker;
    private AnimTimeTracker slammerTimeTracker;
    private AnimTimeTracker radiousTimeTracker;
    private bool pogsInAnimation;
    private bool slammerInAnimation;
    private bool radiousInAnimation;
    private bool cameraChanged;
    private Vector3 slammerInitialPosition;
    private float initialRadious;
    private UnlockSlammerData unlockSlammerData;
    private float[] perlinY;
    private float[] time;

    public class UnlockSlammerData
    {
        public string slammerID;
        public string[] pogIDs;
        public string slammerName;
    }

    public void Setup(UnlockSlammerData data)
    {
        unlockSlammerData = data;
        Debug.Assert(!string.IsNullOrEmpty(unlockSlammerData.slammerID), "SlammerID is null or empty!");
        Debug.Assert(unlockSlammerData.pogIDs != null, "Pogs IDs is null!");
        Debug.Assert(!string.IsNullOrEmpty(unlockSlammerData.slammerName), "Slammer name is null or empty!");
    }

#if DEBUG
    private void CreateMockupSetup()
    {
        unlockSlammerData = new UnlockSlammerData()
        {
            slammerID = "1",
            pogIDs = new string[] { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" }
        };
    }
#else
    private void CreateMockupSetup()
    {
    }
#endif

    void Start ()
    {
        initSequence();
    }

    public void initSequence()
    {
        if(unlockSlammerData == null)
        {
            Debug.Assert(false, "Unlock slammer data is not setup!");
            #if DEBUG
            CreateMockupSetup();
            #else
            return;
            #endif
        }
        StartCoroutine(initSequenceCoroutine(0.8f));
    }

    private IEnumerator initSequenceCoroutine(float delay)
    {
        pogs = new GameObject[unlockSlammerData.pogIDs.Length];
        instantiateObjects();
        initialRadious = radious;
		yield return new WaitForSecondsRealtime(delay);
        
        setupBezierCurve();
        setupTime();
        setupPerlinY(unlockSlammerData.pogIDs.Length);
    }

    private void setupBezierCurve()
    {
        bezierEvaluator = new BezierEvaluator();
        var bezierPoints = new Vector3[bezierPointsGO.Length];
        for (int i = 0; i < bezierPoints.Length; i++)
            bezierPoints[i] = bezierPointsGO[i].transform.position;
        bezierEvaluator.SetupCurve(bezierPoints);
    }


    private void setupTime()
    {
        generalTimeTracker = new AnimTimeTracker(circleAnimationDuration + splineAnimationDuration);
        pogsInAnimation = true;
        time = new float[unlockSlammerData.pogIDs.Length];
        for (var i = 0; i < time.Length; i++)
            time[i] = 0f;
    }

    private void setupPerlinY(int pogs, float t = 0f)
    {
        perlinY = new float[pogs];
        for (var i=0; i<pogs; i++)
        {
            perlinY[i] = Mathf.PerlinNoise(t, (i * 7.777f) / perlinNoiseScale) * 25;
            if(perlinMaxY < 0)
                if (perlinY[i] > perlinMaxY) perlinMaxY = perlinY[i];
        }
    }

    void Update()
    {
        rotateSlammer();
        if (pogsInAnimation)
        {
            if ((generalTimeTracker.U >= whenToMoveCirlceToSlammer) && !cameraChanged)
            {
                //changeCameraLocation("UnlockSlammer1");
                moveCircleCenterToSlammer();
                cameraChanged = true;
            }
            if (generalTimeTracker.U >= whenShowSpecialFX)
                if(!VisualFX.activeSelf)
                    VisualFX.SetActive(true);

            if (generalTimeTracker.U >= whenRadiousAnimation)
                setRadiousAnimationTime();

            if(generalTimeTracker.U >= whenContemplateSlammer)
                contemplateSlammer();

            
            if (generalTimeTracker.U < 1f)
            {
                for (var i = 0; i < unlockSlammerData.pogIDs.Length; i++)
                {
                    var iPogU = Anim.PlayWithIntervals(generalTimeTracker.U, pogNormalizedDuration, i, animationCurve, unlockSlammerData.pogIDs.Length);
                    globalMotion(iPogU, i);
                }
            }
        }
        if (slammerInAnimation)
            moveSlammerToMenu();
        if (radiousInAnimation)
            animateRadious();
    }

    private void globalMotion(float u, int pogIndex)
    {
        Vector3 position;
        Vector3 rotation;
        var pogDuration = generalTimeTracker.Duration * pogNormalizedDuration;
        var pogSplineDuration = splineAnimationDuration * pogNormalizedDuration;
        var pogTime = pogDuration * u;
        if ( pogTime <= pogSplineDuration)
        {
            var splineU = pogTime / pogSplineDuration;
            position = getPositionRotationInSpline(splineU, pogIndex);
            rotation = Anim.GetRotationInCircle(splineU);
            if (splineU > 0.75f)
            {
                var lerpT = (splineU - .75f) / .25f;
                var cU = (time[pogIndex] % singleLoopTime) / singleLoopTime;
                position = Vector3.Lerp(position,Anim.GetPositionAroundCircle(cU, radious, centerPos.transform.position, true), lerpT);
                rotation = Vector3.Lerp(rotation, Anim.GetRotationInCircle(cU, true), lerpT);
                time[pogIndex] += Time.unscaledDeltaTime;
            }
        }
        else
        {
            
            var cU = (time[pogIndex] % singleLoopTime) / singleLoopTime;
            position = Anim.GetPositionAroundCircle(cU, radious, centerPos.transform.position, true);
            rotation = Anim.GetRotationInCircle(cU, true);
            time[pogIndex] += Time.unscaledDeltaTime;
        }
        setupPerlinY(unlockSlammerData.pogIDs.Length, generalTimeTracker.T);
        var height = perlinY[pogIndex] * (1f - generalTimeTracker.U);
//        var height = perlinY[pogIndex];
        position = new Vector3(position.x, position.y + height, position.z);
        pogs[pogIndex].transform.position = position;
        pogs[pogIndex].transform.localRotation = Quaternion.Euler(rotation);
    }

    private void moveSlammerToMenu()
    {
        if (slammerTimeTracker.U < 1)
        {
            slammer.transform.position = bezierSlammerToCollectionIcon(slammerTimeTracker.U);
            slammer.transform.localScale = slammerInitialScale - ((slammerInitialScale - slammerFinalScale) * slammerTimeTracker.U);
        }
        else
        {
            Destroy(slammer);
            slammerInAnimation = false;
        }
    }

    private void animateRadious()
    {
        if (radiousTimeTracker == null) radiousTimeTracker = new AnimTimeTracker(radiousAnimationTime);
        if (radiousTimeTracker.U < 1) radious = initialRadious - ((initialRadious - finalRadious) * radiousTimeTracker.U);
    }

    private void setRadiousAnimationTime()
    {
        if (radiousInAnimation == false) radiousInAnimation = true;
    }

    private void rotateSlammer()
    {
        if(slammer != null)
            slammer.transform.rotation = Quaternion.Euler(new Vector3(90, -45 * Time.unscaledTime, 0));
    }

    public void contemplateSlammer()
    {
        pogsInAnimation = false;
        destroyPogs();
        //VisualFX.SetActive(true);
//        changeCameraLocation("UnlockSlammer2");
        StartCoroutine(setSlammerAnimationTime(7f)); 
    }

    private IEnumerator setSlammerAnimationTime(float delay)
    {
        //delay should be public field
        var seconds = 0f;
        while (!Input.anyKeyDown && seconds < delay)
        {
            seconds += Time.unscaledDeltaTime;
            yield return null;
        }
        slammerTimeTracker = new AnimTimeTracker(slammerAnimationDuration);
        StartCoroutine(destroyAndGoBackToSolo(2f));
        slammerInAnimation = true;
    }

    private IEnumerator destroyAndGoBackToSolo(float delay)
    {
        yield return new WaitForSecondsRealtime(delay);
        Done = true;
        if(slammer != null)
            Destroy(slammer);
        Destroy(pedestal);
        Destroy(gameObject);
    }

    private void destroyPogs()
    {
        for (int i = 0; i < unlockSlammerData.pogIDs.Length; i++)
            Destroy(pogs[i]);
    }

   private void instantiateObjects()
    {
        for (var i = 0; i < unlockSlammerData.pogIDs.Length; i++)
        {
            pogs[i] = Instantiate(pogGO);
            pogs[i].transform.localScale = Vector3.one * pogStartScale;
        }
        slammer = Instantiate(slammerGO);
        slammer.transform.position = slammerPosition.transform.position;
        slammer.transform.rotation = slammerPosition.transform.rotation;
        
        
        pedestal = Instantiate(pedestalGO, slammerPosition.transform.position + (Vector3.up * -10.5f), slammerPosition.transform.rotation);
        slammer.transform.localScale = slammerInitialScale;
        slammerInitialPosition = slammerPosition.transform.position;
    }

    void OnDrawGizmos()
    {
        if (unlockSlammerData == null)
            CreateMockupSetup();

        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(centerPos.transform.position, Vector3.one);
        Gizmos.color = Color.green;
        Gizmos.DrawWireCube(slammerPosition.transform.position, Vector3.one * 2);
        
        for (var i = 0; i < unlockSlammerData.pogIDs.Length; i++)
        {
//            Gizmos.DrawLine(getPositionInCircle(unlockSlammerData.pogIDs.Length, i, 0f, centerPos.transform.position), getPositionInCircle(unlockSlammerData.pogIDs.Length, i+1, 0f, centerPos.transform.position));
            var u1 = (float)i / unlockSlammerData.pogIDs.Length;
            var u2 = (float)(i + 1) / unlockSlammerData.pogIDs.Length;
            Gizmos.DrawLine(Anim.GetPositionAroundCircle(u1, radious, centerPos.transform.position), Anim.GetPositionAroundCircle(u2, radious, centerPos.transform.position));
        }            

        Gizmos.color = Color.blue;
        for (int i = 0; i<bezierPointsGO.Length; i++)
            Gizmos.DrawWireSphere(bezierPointsGO[i].transform.position, 1f);
        var curvePresicion = 20f;
         for (var t = 0; t < curvePresicion; t++)
         {
            Gizmos.color = Color.cyan;
//            Gizmos.DrawLine(bezierEvaluator.Evaluate(t / (float)curvePresicion), bezierEvaluator.Evaluate((t + 1) / (float)curvePresicion));
            Gizmos.DrawLine(bezierS1(t / (float)curvePresicion), bezierS1((t + 1) / (float)curvePresicion));
            Gizmos.DrawLine(bezierS2(t / (float)curvePresicion), bezierS2((t + 1) / (float)curvePresicion));
            Gizmos.DrawLine(bezierS3(t / (float)curvePresicion), bezierS3((t + 1) / (float)curvePresicion));
            Gizmos.DrawLine(bezierS4(t / (float)curvePresicion), bezierS4((t + 1) / (float)curvePresicion));
          }
    }

    private Vector3 getPositionRotationInSpline(float u, int pogIndex)
    {
        Debug.Assert(u >= 0, "u shouldn't be minor than 0");
        var position = bezierEvaluator.Evaluate(u);
        position = new Vector3(position.x, position.y, position.z);
        return position;
    }

    private Vector3 bezierS1(float t)
    {
        var p0 = bezierPointsGO[0].transform.position;
        var p1 = bezierPointsGO[1].transform.position;
        var p2 = bezierPointsGO[2].transform.position;
        var p3 = bezierPointsGO[3].transform.position;

        return Bezier.GetPointNoClamp(p0, p1, p2, p3, t);
    }

    private Vector3 bezierS2(float t)
    {
        var p0 = bezierPointsGO[3].transform.position;
        var p1 = bezierPointsGO[4].transform.position;
        var p2 = bezierPointsGO[5].transform.position;
        var p3 = bezierPointsGO[6].transform.position;

        return Bezier.GetPointNoClamp(p0, p1, p2, p3, t);
    }

    private Vector3 bezierS3(float t)
    {
        var p0 = bezierPointsGO[6].transform.position;
        var p1 = bezierPointsGO[7].transform.position;
        var p2 = bezierPointsGO[8].transform.position;
        var p3 = bezierPointsGO[9].transform.position;

        return Bezier.GetPointNoClamp(p0, p1, p2, p3, t);
    }
    
    private Vector3 bezierS4(float t)
    {
        var p0 = bezierPointsGO[9].transform.position;
        var p1 = bezierPointsGO[10].transform.position;
        var p2 = bezierPointsGO[11].transform.position;
        var p3 = bezierPointsGO[12].transform.position;

        return Bezier.GetPointNoClamp(p0, p1, p2, p3, t);
    }

    private Vector3 bezierSlammerToCollectionIcon(float t)
    {
        var p0 = slammerInitialPosition;
        var p1 = p0 + new Vector3(-10, 20, 0);
        //Transform target = BottomNavigationController.Instance.GetNavigationButton(NavigationButtonID.Collection).transform;
        //var p3 = Camera.main.ScreenToWorldPoint(target.position + new Vector3(0, 0, 30f));
        var p3 = p1 + new Vector3(-10, 20, 0);
        var p2 = p3 + new Vector3(0, 7, 0);

        return Bezier.GetPointNoClamp(p0, p1, p2, p3, t);
    }

    private void moveCircleCenterToSlammer()
    {
/*
        var movement = centerPos.GetComponent<ObjectMovement>();
        movement.SetMovement(
                slammerPosition.transform.position,
                Quaternion.Euler(Vector3.zero.x, Vector3.zero.y, Vector3.zero.z),
                movementToSlammerDuration);
*/
/**/
    }

}
