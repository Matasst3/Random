using UnityEngine;
using System.Collections;

public class Rotate_m : MonoBehaviour {

	public float speed = 10f;
	public GameObject AudioObject;
	bool colliding = false;

	void Start () {
		AudioObject = GameObject.Find("AUDIO");
	}

	void OnCollisionEnter(Collision collision)
	{
		colliding = true;
	}

	void OnCollisionExit(Collision collision)
	{
		colliding = false;
	}

	void Update () {
		transform.Rotate(Vector3.forward, -speed * Time.deltaTime);
		if(!colliding)
		{
			if (Input.GetKeyDown (KeyCode.Period)) {
				Destroy(AudioObject);
				Application.LoadLevel ("FAIL");
			}
	}
		else if (Input.GetKeyDown (KeyCode.Period))
		{
			Application.LoadLevel ("WIN");
		}

}
}
