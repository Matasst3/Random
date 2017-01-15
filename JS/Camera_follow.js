#pragma strict

var target:Transform;
var distance = 10.0; 
var height = 0.0;
var damping = 5.0;
var smoothRotation = true;
var rotationDamping = 0.0;

function Update()
{
	transform.position = Vector3.Lerp(transform.position, target.TransformPoint(0, height, -distance), Time.deltaTime * damping); //tween (lerp) between two points with time and damping
	if(smoothRotation)
	{
		transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(target.position - transform.position, target.up), Time.deltaTime * rotationDamping); //interpolate spherically between two points with time and damping
	}
	else
	{
		transform.LookAt(target, target.up);
	}
}