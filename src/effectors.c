#include <kipr/wombat.h>
#include "constants.h"

void sleepy()
{
    set_servo_position(ARM, ARM_SLEEP);
    set_servo_position(CLAW, CLAW_OPEN);
}
void arm_reset()
{
    set_servo_position(ARM, ARM_SLEEP);
}
void GRAB_1()
{
    set_servo_position(CLAW, CLAW_OPEN);
    set_servo_position(ARM, ARM_GRAB1);
    msleep(1500);
    set_servo_position(CLAW, CLAW_CLOSE);
}
void arm_lift()
{
    set_servo_position(ARM, ARM_GRAB1);
}
void LOWER_MAMMOTH()
{
    set_servo_position(MAMMOTH, MAMMOTH_DOWN);
}
void RAISE_MAMMOTH()
{
    set_servo_position(MAMMOTH, MAMMOTH_UP);
}