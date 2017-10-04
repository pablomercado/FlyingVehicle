using UnityEngine;

public class AnimTimeTracker
{
	public float T0;
	public float T1;
	public float T{get { return Time.unscaledTime; }}
	public float TransitionTime{get { return Time.unscaledTime - T0; }}
	public float Duration{get { return T1 - T0; }}
	public float U{get{return Mathf.Clamp01((Time.unscaledTime - T0) / (T1 - T0));}}

	public AnimTimeTracker(float duration)
	{
		T0 = Time.unscaledTime;
		T1 = duration + T0;
	}
}