using UnityEngine;
using UnityEngine.UI;
using System.Collections;
[RequireComponent(typeof(AudioSource))]

public class Map_info : MonoBehaviour {

	public Text info = null;
	string clear = "";
	string object1 = "text";
	string object2 = "text";
	string object3 = "text";

	void Start () {
		info.text = clear;
	}

	void OnCollisionExit (Collision col) {
		info.text = clear;
	}

	void OnCollisionEnter (Collision col) {

		StartCoroutine("Sound");

		if (col.gameObject.tag == "object1")
			info.text = object1;
		if (col.gameObject.tag == "object2")
			info.text = object2;
		if (col.gameObject.tag == "object3")
			info.text = object3;
	}

	void OnCollisionStay (Collision col) {

		if (col.gameObject.tag == "object1"){
			if (Input.GetKeyDown (KeyCode.Period)){
			Application.LoadLevel ("object1");
			}
		}

		if (col.gameObject.tag == "object2"){
			if (Input.GetKeyDown (KeyCode.Period)){
				Application.LoadLevel ("object2");
			}
		}

		if (col.gameObject.tag == "object3"){
			if (Input.GetKeyDown (KeyCode.Period)){
				Application.LoadLevel ("object3");
			}
		}

	}

	IEnumerator Sound () {
		yield return new WaitForSeconds(0.01f);
		AudioSource audio = GetComponent<AudioSource> ();
			audio.Play ();
			yield return new WaitForSeconds (0.05f);
			audio.Stop ();
		}

}
