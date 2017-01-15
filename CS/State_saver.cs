//State.saving should be attached to every scene + State.saver should be attached to it.
//State.loader should be attached to start page + State.saver should be attached to it.

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Saver : MonoBehaviour
{

	void Awake() {
		DontDestroyOnLoad(transform.gameObject);
	}

	public void Save()
	{
		string openScene = SceneManager.GetActiveScene().name;
		PlayerPrefs.SetString("Saved Level", openScene);
	}

	public void Load()
	{
		string sceneToLoad = PlayerPrefs.GetString("Saved Level");
		SceneManager.LoadScene(sceneToLoad);
	}

}
