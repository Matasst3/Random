#pragma strict
var threshold: float = -10;

function Update () {

if(transform.position.y < threshold){
transform.position = new Vector3(2.46, 2, 0.177);
}

}