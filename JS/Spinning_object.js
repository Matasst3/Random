 var degreesPerSecond = 30.0;
 var Speed_Right = 0.2;
 var time_Right = 0.2;

 function OnTriggerEnter(other : Collider)
{
    if (other.tag == "Player")
    {
  other.transform.position -= Vector3.right * time_Right * Speed_Right;
  Destroy(gameObject);
    }
}

 function Update () {
     transform.Rotate (Vector3.forward * degreesPerSecond * Time.deltaTime);
 }
