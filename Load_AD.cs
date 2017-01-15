using UnityEngine;
using UnityEngine.Advertisements;

public class AD : MonoBehaviour
{
	void Update() {
		if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		{
			if (Advertisement.IsReady())
			{
				Advertisement.Show();
			}
		}

	}
}
