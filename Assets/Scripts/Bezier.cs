using UnityEngine;

public static class Bezier {

	public static Vector3 GetPoint (Vector3 p0, Vector3 p1, Vector3 p2, float t) {
		t = Mathf.Clamp01(t);
		float oneMinusT = 1f - t;
		return
			oneMinusT * oneMinusT * p0 +
			2f * oneMinusT * t * p1 +
			t * t * p2;
	}

	public static Vector3 GetFirstDerivative (Vector3 p0, Vector3 p1, Vector3 p2, float t) {
		return
			2f * (1f - t) * (p1 - p0) +
			2f * t * (p2 - p1);
	}

	public static Vector3 GetPoint (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t) {
		t = Mathf.Clamp01(t);
        float t2 = t * t;
		float OneMinusT = 1f - t;
        float OneMinusT2 = OneMinusT*OneMinusT;
		return
			OneMinusT2 * OneMinusT * p0 +
			3f * OneMinusT2 * t * p1 +
			3f * OneMinusT * t2 * p2 +
			t2 * t * p3;
	}

	
	public static Vector3 GetPointNoClamp (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t) {
		//t = Mathf.Clamp01(t);
		if (t < 0)
			return p0 + (p1 - p0) * t;
		else if (t > 1)
			return p2 + (p3 - p2) * t;
		else 
			return GetPoint (p0, p1, p2, p3, t);
	}
    
	public static Vector3 GetPoint (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4, float t) {
		t = Mathf.Clamp01(t);
        float t2 = t * t;
		float OneMinusT = 1f - t;
        float OneMinusT2 = OneMinusT * OneMinusT;
		return
            OneMinusT2 * OneMinusT2  * p0 +
            4f * OneMinusT2 * OneMinusT * t * p1 +
            6f * OneMinusT2 * t2 * p2 +
            4f * OneMinusT * t2 * t * p3 +
            t2 * t2 * p4;
	}    
    
    public static Vector3 GetPoint (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4, Vector3 p5, float t) {
		t = Mathf.Clamp01(t);
        float t2 = t * t;
        float t3 = t2 * t;
		float OneMinusT = 1f - t;
        float OneMinusT2 = OneMinusT * OneMinusT;
        float OneMinusT3 = OneMinusT2 * OneMinusT;
		return
            OneMinusT3 * OneMinusT2 * p0 +
            5f * OneMinusT2 * OneMinusT2 * t * p1 +
            10f * OneMinusT3 * t2 * p2 +
            10f * OneMinusT2 * t3 * p3 +
            5f * OneMinusT * t2 * t2 * p4 +
            t3 * t2 * p5;
	}

	public static Vector3 GetFirstDerivative (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t) {
		t = Mathf.Clamp01(t);
		float oneMinusT = 1f - t;
		return
			3f * oneMinusT * oneMinusT * (p1 - p0) +
			6f * oneMinusT * t * (p2 - p1) +
			3f * t * t * (p3 - p2);
	}
	
	
	public static float GetBezierLenght(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float precision = 1000f)
	{
		var pp = p0;
		var l = 0f;
		for (var i = 0; i < precision; i++)
		{
			var pn = Bezier.GetPoint(p0, p1, p2, p3, (float) i / precision);
			l += Vector3.Distance(pp, pn);
			pp = pn;
		}
		return l;
	}
}