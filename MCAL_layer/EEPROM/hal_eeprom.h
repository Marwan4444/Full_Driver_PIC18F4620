/* 
 * File:   hal_eeprom.h
 * Author: M A R W A N
 *
 * Created on September 1, 2024, 8:24 PM
 */

#ifndef HAL_EEPROM_H
#define	HAL_EEPROM_H

 /* Section : Includes */

#include "../std_libraries.h"
#include "pic18f4620.h"
#include "../device_config.h"
#include "../Interrupt/hal_internal_interrupt.h"

 /* Section : Macros Definition */

 /* Section : Macros Functions Declaration */

 /* Section : Data Types Declaration */

 /* Section : Function Declaration */
STD_ReturnType Data_EEPROM_WriteByte(uint16 b_Add, uint8 b_Data);
STD_ReturnType Data_EEPROM_ReadByte(uint16 b_Add, uint8 *b_Data);


#endif	/* HAL_EEPROM_H */

