/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 21, 2019, 6:19 PM
 */
#include "general_types.h"
#ifndef HAL_DC_H
#define	HAL_DC_H

#ifdef	__cplusplus
extern "C" {
#endif

    void HAL_vSetMotorDir(BOOL bValue);
    void HAL_vInit();
    void HAL_vSetMotorSpeed(T_F16 f16Duty, T_U8 u8Ch);


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

