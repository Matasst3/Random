using UnityEngine;
using UnityEngine.UI;
using System.Collections;
[RequireComponent(typeof(AudioSource))]

public class Text_print : MonoBehaviour {

	[SerializeField]
	public Text speak = null;
	string clear = "";
	string speak1 = "- text";
	string speak2 = "- text";
	string speak3 = "- text";

	void Start () {
		speak.text = clear;
		StartCoroutine("Line1");
		StartCoroutine("Line2");
		StartCoroutine("Line3");
		StartCoroutine("Line3");
	}

	IEnumerator Line1 () {
		speak.text = clear;
		AudioSource audio = GetComponent<AudioSource>();
		foreach(char letter in speak1.ToCharArray()){
			speak.text += letter;
			audio.Play();
			yield return new WaitForSeconds(0.05f);
			audio.Stop ();
		}
	}

	IEnumerator Line2 () {
		yield return new WaitForSeconds(2);
		speak.text = clear;
		AudioSource audio = GetComponent<AudioSource>();
		foreach(char letter in speak2.ToCharArray()){
			speak.text += letter;
			audio.Play();
			yield return new WaitForSeconds(0.05f);
			audio.Stop ();
		}
	}

	IEnumerator Line3 () {
		yield return new WaitForSeconds(4);
		speak.text = clear;
		AudioSource audio = GetComponent<AudioSource>();
		foreach(char letter in speak2.ToCharArray()){
			speak.text += letter;
			audio.Play();
			yield return new WaitForSeconds(0.05f);
			audio.Stop ();
		}
	}

	IEnumerator Line4 () {
		yield return new WaitForSeconds(6);
		Application.LoadLevel ("Fourth");
		}

}
