/* 
 * File:   mcal_interrupt_gen_cfg.h
 * Author: M A R W A N
 *
 * Created on August 14, 2024, 11:11 AM
 */

#ifndef MCAL_INTERRUPT_GEN_CFG_H
#define	MCAL_INTERRUPT_GEN_CFG_H

 /* Section : Includes */

 /* Section : Macros Definition */

#define Interrupt_Feature_Enable                        1
//#define Interrupt_Priority_Levels_Enable                Interrupt_Feature_Enable
#define External_Interrupt_INTx_Feature_Enable          Interrupt_Feature_Enable
#define External_Interrupt_OnChange_Feature_Enable      Interrupt_Feature_Enable
#define ADC_INTERRUPT_FEATURE_ENABLE                    Interrupt_Feature_Enable
#define TIMER0_INTERRUPT_FEATURE_ENABLE                 Interrupt_Feature_Enable
#define TIMER1_INTERRUPT_FEATURE_ENABLE                 Interrupt_Feature_Enable
#define TIMER2_INTERRUPT_FEATURE_ENABLE                 Interrupt_Feature_Enable
#define TIMER3_INTERRUPT_FEATURE_ENABLE                 Interrupt_Feature_Enable
 /* Section : Macros Functions Declaration */

 /* Section : Data Types Declaration */

 /* Section : Function Declaration */

#endif	/* MCAL_INTERRUPT_GEN_CFG_H */

