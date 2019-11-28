#include "servo.h"
#include "mcal_pwm.h"

void HAL_vServoMotor(T_F16 unghi){
    T_F16 duty;
    if(unghi>=10 && unghi<=170){
        if(unghi<65){
            unghi=65;
        }
        if(unghi>115){
            unghi=115;
        }
        duty=4+(unghi-10)*0.04375;
        PWM1_vSetDuty(duty,1);
    }
}
