using UnityEngine;
using System.Collections;

public class Move : MonoBehaviour {

	void Update () {
		
		if(Input.GetKey(KeyCode.UpArrow)){
			transform.Translate(Vector3.up * 5 * (Time.deltaTime) * 5);
		}

		if(Input.GetKey(KeyCode.DownArrow)){
			transform.Translate(Vector3.up * -5 * (Time.deltaTime) * 5);
		}

		if(Input.GetKey(KeyCode.LeftArrow)){
			transform.Translate(Vector3.right * -5 * (Time.deltaTime) * 5);
		}

		if(Input.GetKey(KeyCode.RightArrow)){
			transform.Translate(Vector3.right * 5 * (Time.deltaTime) * 5);
		}

	}

}
