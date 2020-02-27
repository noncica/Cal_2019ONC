#include "ftimer.h"
#include "general.h"
#include "rte.h"

T_U8 aa=0;

void functie1(){
    //T_U8 baterie=RTE_afisareBaterie();
    aa=!aa;
    GPIO_u8WritePortPin(PORT_A, 10, aa);
    /*if(baterie<=10){
        aa=!aa;
        GPIO_u8WritePortPin(PORT_A, 10, aa);
    }
     */
}
