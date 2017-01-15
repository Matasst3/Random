 var distToGround: float;
 var jumpSpeed: float = 8;
 
 function Start(){
   distToGround = GetComponent.<Collider>().bounds.extents.y;
 }
 
 function IsGrounded(): boolean {
   return Physics.Raycast(transform.position, -Vector3.up, 0.07);
 }
 
 function Update () {
   if (IsGrounded()){
     GetComponent.<Rigidbody>().velocity.y = jumpSpeed;
   }
 }