#include <kipr/wombat.h>
#include "constants.h"

void forward_to_black(int speed, int sensor)
{
    mav(RM, speed);
    mav(LM, speed);
    
    while (analog(sensor) < BLACK)
    {
    }
    
    mav(RM, 0);
    mav(LM, 0);
}

void backward_to_black(int speed, int sensor)
{
    mav(RM, -speed);
    mav(LM, -speed);
    
    while (analog(sensor) < BLACK)
    {
    }
    
    mav(RM, 0);
    mav(LM, 0);
}

void left_to_black(int speed, int sensor)
{
    mav(RM, speed);
    mav(LM, -speed);
    
    while (analog(sensor) < BLACK)
    {
    }
    
    mav(RM, 0);
    mav(LM, 0);
}

void right_to_black(int speed, int sensor)
{
    mav(RM, -speed);
    mav(LM, speed);
    
    while (analog(sensor) < BLACK)
    {
    }
    
    mav(RM, 0);
    mav(LM, 0);
}