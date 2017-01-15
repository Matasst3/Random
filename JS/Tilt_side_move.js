#pragma strict

function Update () {

{
     var dir : Vector3;
     var Speed : float = 0.25;

     dir.x = Input.acceleration.x*Speed;
     transform.position.x += -dir.x;
}

}