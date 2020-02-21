#include "hal_acumulator.h"
#include "mcal_adc.h"


T_U8 HAL_afisareBaterie()//redenumit in RTE in rte.h
{
    ADC_vInit();
    T_U16 val=ADC_u16Read(0);
    T_U8 rez=0;
    T_U8 charge=0;
    if(val>=7 && val<=8.4){
        rez=(100-20)/(8.4-7);
        charge=(val-7)*rez+20;
    }
    else
        if(val>=6.5 && val<=7){
        rez=(20-10)/(7-6.5);
        charge=(val-6.5)*rez+10;
        }
        else
            if(val>=6 && val<6.5){
            rez=10/(6.5-6);
            charge=(val-6)*rez;
        }
    return charge;
}
