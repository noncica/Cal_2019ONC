/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 21, 2019, 6:54 PM
 */

#ifndef RTE_H
#define	RTE_H
#include "hal_dc.h"
#include "hal_LineFollower.h"
#include "hal_acumulator.h"
#include "servo.h"

#define RTE_vSetMotorDir HAL_vSetMotorDir
#define RTE_vInit HAL_vInit
#define RTE_vSetMotorSpeed HAL_vSetMotorSpeed
#define RTE_vServoMotor HAL_vServoMotor
#define RTE_vSetDirLineFollower HAL_vSetDirLineFollower
#define RTE_vWriteLineFollower HAL_vWriteLineFollower
#define RTE_u8GetValueLineFollower HAL_u8GetValueLineFollower
#define RTE_afisareBaterie HAL_afisareBaterie


#endif	/* RTE_H */

