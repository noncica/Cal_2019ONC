#include "asw_move.h"
#include "rte.h"

void initializare(){
RTE_vInit();
}

void miscare(){
RTE_vSetMotorDir();
RTE_vSetMotorSpeed();
}