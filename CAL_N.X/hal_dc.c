#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"

    void HAL_vSetMotorDir(){
      GPIO_u8WritePortPin(PORT_A,9,0);
    }
    
    void HAL_vInit(){
        PWM1_vInit();
        GPIO_u8SetPortPin(PORT_A,9,0,0);
    }
    
    void HAL_vSetMotorSpeed(){
        PWM1_vSetDuty(50,2);
    }
