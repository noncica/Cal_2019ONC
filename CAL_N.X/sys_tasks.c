/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"

#include "ftimer.h"
#include "asw_move.h"
#include "mcal_encoder.h"
#include "rte.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    initializare(); //functie din asw_move
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   
    miscare(); //functie in asw_move care controleaza masina
    //miscare2pe_cm();//functie in asw_move care controleaza masina pe o anumita distanta: 50 cm
}

void TASK_100ms()
{ 
    //functie1(); afisare led baterie
    /*if(bObs){
        GPIO_u8WritePortPin(PORT_A, 10, 1);
    }
    else
        GPIO_u8WritePortPin(PORT_A, 10, 0);
     */
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
   // a = !a;
    //GPIO_u8WritePortPin(PORT_A, 10, a);
}