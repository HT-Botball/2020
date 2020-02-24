#include <kipr/botball.h>

int main()
{
  	int left = 2;
    int right = 3;
         
       //go forward to suits. 
        motor(left,100);
        motor(right,100);
        msleep(2000);
        
          //when claw pushes a suit, do 360
        motor(left,100);
        msleep(1000);
         //go forward to pom-pom
        motor(left,100);
        motor(right,100);
        msleep(500);
        //use claw to pick up pom-pom
     enable_servos();
        set_servo_position(0,0);
        //turn around
        motor(1,100);
        
        
      //drop pom-pom
     //go level with cube
    //go left
   
    
    
    return 0;
}
