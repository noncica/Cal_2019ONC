/* 
 * File:   hal_LineFollower.h
 * Author: student
 *
 * Created on December 12, 2019, 6:22 PM
 */
#include "general_types.h"

#ifndef HAL_LINEFOLLOWER_H
#define	HAL_LINEFOLLOWER_H

#ifdef	__cplusplus
extern "C" {
#endif

    void HAL_vSetDirLineFollower(BOOL bDir);
    void HAL_vWriteLineFollower(void);
    T_U8 HAL_u8GetValueLineFollower(void);


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_LINEFOLLOWER_H */

