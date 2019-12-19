#include "asw_move.h"
#include "servo.h"
#include "rte.h"


void initializare(){//gasesc functia in sys_task
RTE_vInit();
}

void miscare(){//gasesc functia in sys_task
    if(HAL_u8GetValueLineFollower()){
        RTE_vSetMotorDir(0);//hal_dc.c
        RTE_vSetMotorSpeed(30,2);//hal_dc.c
        //RTE_vServoMotor(90);//servo.c
        if(HAL_u8GetValueLineFollower()==0b000011)
            RTE_vServoMotor(115);//servo.c
        else
            if(HAL_u8GetValueLineFollower()==0b110000)
                RTE_vServoMotor(65);//servo.c
                else
                     if(HAL_u8GetValueLineFollower()==0b000001)
                         RTE_vServoMotor(115);//servo.c
                            else
                                if(HAL_u8GetValueLineFollower()==0b100000)
                                       RTE_vServoMotor(65);//servo.c
                                else
                                    if(HAL_u8GetValueLineFollower()==0b001100)
                                        RTE_vServoMotor(90);//servo.c
                                    else 
                                        if(HAL_u8GetValueLineFollower()==0b001000)
                                            RTE_vServoMotor(85);//servo.c
                                         else 
                                             if(HAL_u8GetValueLineFollower()==0b000100)
                                                    RTE_vServoMotor(95);//servo.c
                                                    else 
                                                         if(HAL_u8GetValueLineFollower()==0b010000)
                                                                RTE_vServoMotor(65);//servo.c
                                                                   else 
                                                                     if(HAL_u8GetValueLineFollower()==0b000010)
                                                                         RTE_vServoMotor(115);//servo.c
                
                
    }
    else
    {
        RTE_vSetMotorDir(1);//hal_dc.c
        RTE_vSetMotorSpeed(30,2);//hal_dc.c
        RTE_vServoMotor(90);//servo.c
    }
}