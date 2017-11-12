using UnityEngine;

public class MoveGroupBezier : MonoBehaviour
{

    [SerializeField] private GameObject[] bezierPointsGO;
    private BezierEvaluator bezierEvaluator;

    private void Start()
    {
        setupCurve();
    }

    private void setupCurve()
    {
        bezierEvaluator = new BezierEvaluator();
        var bezierPoints = new Vector3[bezierPointsGO.Length];
        for (int i = 0; i < bezierPoints.Length; i++)
            bezierPoints[i] = bezierPointsGO[i].transform.position;
        bezierEvaluator.SetupCurve(bezierPoints);

        for (int i = 0; i < 20; i++)
        {
            GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.transform.position = bezierEvaluator.Evaluate(i/20f);
        }
        
        
    }
    
    void OnDrawGizmos()
    {
        Gizmos.color = Color.cyan;

        if (bezierEvaluator != null)
        {
            Gizmos.DrawLine(bezierEvaluator.Evaluate(0f), bezierEvaluator.Evaluate(1f));
            var curvePresicion = 30f;
            if (bezierPointsGO.Length > 1)
                for (var t = 0; t < curvePresicion; t++)
                    Gizmos.DrawLine(bezierEvaluator.Evaluate(t / curvePresicion), bezierEvaluator.Evaluate((t + 1)/ curvePresicion));    
        }
        
    }
    
}
