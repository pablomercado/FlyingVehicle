using System.Collections.Generic;
using UnityEngine;

public class BezierEvaluator : MonoBehaviour
{
	
	private int precision = 2000;
	private int segments = 181;
	private float segmentLenght;
	private List<Vector3> ouputPoints;
	private List<BezierSegmentPoints> pointList;

	private struct BezierSegmentPoints
	{
		public Vector3 V0;
		public Vector3 V1;
		public Vector3 V2;
		public Vector3 V3;
	} 
	
	public void SetupCurve(Vector3[] points)
	{
		Debug.Assert(points.Length >= 4, "points in the curve must be at least 4");
		pointList = new List<BezierSegmentPoints>();
		ouputPoints = new List<Vector3>();
		fillOutPointList(points);
		var l = getTotalSplineLenght();
		segmentLenght = l / segments;
		GetEquidistantPoints(pointList, segmentLenght);
	}

	private void fillOutPointList(Vector3[] points)
	{
		if (points.Length >= 4)
		{
			int marker = 0;
			while (marker + 1 < points.Length)
			{
				var bsp = new BezierSegmentPoints();
				bsp.V0 = points[marker];
				bsp.V1 = points[marker + 1];
				bsp.V2 = points[marker + 2];
				bsp.V3 = points[marker + 3];
				marker += 3;
				pointList.Add(bsp);
			}
		}
	}

	private float getTotalSplineLenght()
	{
		var l = 0f;
		foreach (var point in pointList)
			l += Bezier.GetBezierLenght(point.V0, point.V1, point.V2, point.V3, 2000f);
		return l;
	}
	
	private void GetEquidistantPoints(List<BezierSegmentPoints> list, float segmentL)
	{
		var l = 0f;
		var s = 0;
		for (var i = 0; i < list.Count; i++)
		{
			var bezierSegmentPoints = list[i];
			var pp = bezierSegmentPoints.V0;
			for (var a = 0; a < precision; a++)
			{
				var pn = Bezier.GetPoint(bezierSegmentPoints.V0,bezierSegmentPoints.V1, bezierSegmentPoints.V2, bezierSegmentPoints.V3, (float) a / precision);
				l += Vector3.Distance(pp, pn);
				if (l > segmentL * s)
				{
					ouputPoints.Add(pp);
					++s;
				}
				pp = pn;
			}	
		}
	}

	public Vector3 Evaluate(float t)
	{
		t = Mathf.Clamp01(t);
		var point = ouputPoints[Mathf.FloorToInt(t * (ouputPoints.Count - 1))];
		return point;
	}
}
