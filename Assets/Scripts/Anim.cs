using UnityEngine;

public static class Anim {
    public static float PlayWithIntervals(float controller, float duration, int order, AnimationCurve curve, int itemCount){
        Debug.Assert (duration > 0, "Duration can not be 0!");
        Debug.Assert (itemCount > 0, "There are not objects for animation!");
        var c = Mathf.Clamp01 (controller);
        duration = Mathf.Clamp01 (duration);
        itemCount = itemCount > 1 ? itemCount - 1 : 1;
        var delta = (1f - duration) / itemCount;
        c = (c - delta * order) / duration;
        c = Mathf.Clamp01 (c);
        return curve.Evaluate (c);
    }

    public static Vector3 GetPositionAroundCircle(float u, float radious, Vector3 center, bool clockwise = false)
    {
        Debug.Assert(u >= 0, "circleU shouldn't be minor than 0. u = " + u);
        var pi2 = Mathf.PI * 2;
        var radiants = clockwise ? pi2 * (1f - u) : pi2 * u;
        var posX = (Mathf.Cos(radiants) * radious) + center.x;
        var posZ = (Mathf.Sin(radiants) * radious) + center.z;
        var position = new Vector3(posX, center.y, posZ);
        return position;
    }

    public static Vector3 GetRotationInCircle(float u, bool clockwise = false)
    {
        var Pi2 = Mathf.PI * 2;
        var radiants = clockwise ? Pi2 * (1f - u) : Pi2 * u;
        var degreesRotation = -(radiants * 180f) / Mathf.PI;
        var rotation = new Vector3(0f, degreesRotation, 0f);
        return rotation;
    }
}
