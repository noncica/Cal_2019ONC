#include "hal_dc.h"
#include "mcal_gpio.h"
#include "mcal_pwm.h"


    void HAL_vSetMotorDir(BOOL bValue){
      GPIO_u8WritePortPin(PORT_A,9,bValue); //bValue e directie(0-inainte sau 1-inapoi)
    }
    
    void HAL_vInit(){
        PWM1_vInit();
        GPIO_u8SetPortPin(PORT_A,9,0,0);
    }
    
    void HAL_vSetMotorSpeed(T_F16 f16Duty, T_U8 u8Ch){
        PWM1_vSetDuty(f16Duty,u8Ch); //u8Ch mereu e 2
    }
