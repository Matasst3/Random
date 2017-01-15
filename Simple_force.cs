using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections;
[RequireComponent(typeof(AudioSource))]

public class Force : MonoBehaviour, IPointerClickHandler {
public AudioClip clip;

	public void OnPointerClick(PointerEventData eventData)
	{
		GameObject.Find("Camera").GetComponent<Rigidbody>().AddForce(transform.right * -9999);
		AudioSource.PlayClipAtPoint(clip, new Vector3(0, 0, 0));
		DestroyObject(gameObject);
	}
}
