/* 
 * File:   ecu_keypad.h
 * Author: M A R W A N
 *
 * Created on July 19, 2024, 4:16 PM
 */

#ifndef ECU_KEYPAD_H
#define	ECU_KEYPAD_H

 /* Section : Includes */

#include "../../MCAL_layer/GPIO/hal_gpio.h"

 /* Section : Macros Definition */
#define ECU_KEYPAD_ROW           4
#define ECU_KEYPAD_Columns       4

 /* Section : Macros Functions Declaration */

 /* Section : Data Types Declaration */
typedef struct{
    pin_config_t keypad_row_pins[ECU_KEYPAD_ROW];
    pin_config_t keypad_colomns_pins[ECU_KEYPAD_Columns];
}keypad_t;

 /* Section : Function Declaration */
STD_ReturnType keypad_initialize(const keypad_t *_keypad);
STD_ReturnType keypad_get_value(const keypad_t *_keypad, uint8 *value);


#endif	/* ECU_KEYPAD_H */

