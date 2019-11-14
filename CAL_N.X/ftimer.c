#include "ftimer.h"
#include "general.h"
T_U8 i=0;
T_U8 aa=1;

void functie1(){
    i++;
    if(i==10 && i<20){
        i=0;
        GPIO_u8WritePortPin(PORT_A, 10, aa);
    }
    if (i%2==0 && i<10){
        aa=!aa;
        GPIO_u8WritePortPin(PORT_A, 10, aa);
    }
}
