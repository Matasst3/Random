//State.saving should be attached to every scene + State.saver should be attached to it.
//State.loader should be attached to start page + State.saver should be attached to it.

﻿using UnityEngine;
using System.Collections;

public class Loader : MonoBehaviour {

	public Saver other;
	void Start() {
			other.Load ();
	}
}
