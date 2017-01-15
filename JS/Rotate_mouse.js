#pragma strict
var speed : float = 1;
var potato : float = 1;
public var thrust: float;
public var rb: Rigidbody;

function Start () {
Screen.lockCursor = true;
rb = GetComponent.<Rigidbody>();
}

function Update () {
if(Input.GetMouseButton(0))
rb.AddRelativeForce(Vector3.up * thrust);
else if (Input.GetMouseButtonUp(0))
    GetComponent.<Rigidbody>().velocity = Vector3.zero;
    GetComponent.<Rigidbody>().angularVelocity = Vector3.zero; 
 if(Input.GetAxis("Mouse X") < 0)
     transform.Rotate(Vector3.down * -speed / potato);
 if(Input.GetAxis("Mouse X") > 0)
     transform.Rotate(Vector3.down * speed / potato);
 if(Input.GetAxis("Mouse Y") < 0)
     transform.Rotate(Vector3.right * speed / potato);
 if(Input.GetAxis("Mouse Y") > 0)
     transform.Rotate(Vector3.right * -speed / potato);
}