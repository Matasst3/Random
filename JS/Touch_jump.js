var distToGround: float;
var jumpSpeed: float = 8;

 function Start(){
   distToGround = GetComponent.<Collider>().bounds.extents.y;
 }

 function IsGrounded(): boolean {
   return Physics.Raycast(transform.position, -Vector3.up, distToGround + 0.5);
 }

function Update () {
    for (var touch : Touch in Input.touches) {
        if (touch.phase == TouchPhase.Began) {
        if (IsGrounded()){
     	GetComponent.<Rigidbody>().velocity.y = jumpSpeed;
            }
        }
    }
}
