#include <kipr/wombat.h>
#include "movement.h"
#include  "effectors.h"
#include  "sensors.h"
#include "constants.h"

int main()
{
    //LINE FOLLOW CODE
    printf("Hello World\n");
    enable_servos();
    sleepy();
    msleep(1000);
    forward_to_black(1000, LEFT_LINE);
    forward(1000, 500);
    right(500, 1000);
    forward_to_black(1500, RIGHT_LINE);     //ALIGNS ON PVC PIPE
    forward(1000, 250);
    right(500, 785); //ALIGNS TO HOOK AIRLOCK
    backward(1000, 3950);
    left(300,250); //HOOKS ONTO AIRLOCK
    msleep(1000);
    forward(1000, 1400); //PULLS AIRLOCK
    right(500, 500);
    backward_to_black(1500, RIGHT_LINE);//GOES TO FLIP  SWITCH; PUSHES FIRST ROCK
    forward(1000, 500);
    right(500,1105);
    forward(500, 850);
    arm_lift(); //FLIPS SWITCH
    msleep(1000);
    backward(1000, 1200); //GOES TO COLLECT ROCKS & PUSHES SECOND ROCK
    forward(1000,200);
    right(500,2200);
    LOWER_MAMMOTH(); //CATCHES ROCKS
    msleep(500);
    forward(2000,1500); 
    left(500,300);
    forward(1000,1500); //CATCHES LAST ROCK ON BLACK
    left(150,1800);  //TURNS TO GO TO ROCK HEAP
    forward(2000,3500); //GRABS LAST ROCK NEAR HEAP
    right(500,400); //AVOIDS POMS
    forward(1000,3000);
    left(500,850); //TURNS IN FRONT OF ROCK HEAP
    forward(1000,4000); //PUSHES ALL ROCKS IN
  
    
    
    
    
    
    
    
    
    //OUR NEW CODE
    // forward_to_black(1500, LEFT_LINE);
//    forward(1000, 1500);
//    right(500,1715); //turns to hook airlock
//    backward(1000, 2950); //goes to hook airlock
//    left(500, 300);  //hooks on to airlock
//    forward(1000, 1000);  //pulls out airlock
//    right(500, 525);  //lets go of the airlock
//    backward_to_black(1500, LEFT_LINE);  //moves to flip switch 
//	right(500, 500);
    
    
    
    
    
    
    //THOMAS ORIGINAL CODE
//    forward_to_black(1500, LEFT_LINE);
//    right(1100, 1000);
//    forward(1000,1000);  //Hi start box divier
//    backward_to_black(1000, RIGHT_LINE); // HIT LINE BESIDE START BOX
//	forward(1000,900);
//    right_to_black(1000, RIGHT_LINE);
//    backward_to_black(1000,LEFT_LINE);
//    backward(1000, 2675);
//    left(1500,220);
//    forward(1500,1000);
    
    //HOOKED now LET GO
//    backward(200,100);
   
//     right(1000, 700);
    
//    backward_to_black(1500,0);
//    forward(1000,65);
//    right(750, 600);
//    forward(1000, 2500);
//    arm_lift();
   
    return 0;
}
