/* 
 * File:   mcal_internal_interrupt.h
 * Author: M A R W A N
 *
 * Created on August 14, 2024, 11:01 AM
 */

#ifndef MCAL_INTERNAL_INTERRUPT_H
#define	MCAL_INTERNAL_INTERRUPT_H


 /* Section : Includes */

#include "hal_interrupt_cfg.h"

 /* Section : Macros Definition */

 /* Section : Macros Functions Declaration */

/*________________________ ADC ____________________*/

#if ADC_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for ADC module */
#define ADC_Interrupt_Disable()                (PIE1bits.ADIE = 0)
/* set interrupt enable for ADC module */
#define ADC_Interrupt_Enable()                 (PIE1bits.ADIE = 1)
/* clear interrupt flag for ADC module */
#define ADC_Interrupt_Flag_Clear()             (PIR1bits.ADIF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set ADC module interrupt -> high priority */
#define ADC_Interrupt_Priority_High()          (IPR1bits.ADIP = 1)
/* set ADC module interrupt -> low priority */
#define ADC_Interrupt_Priority_Low()           (IPR1bits.ADIP = 0)
#endif

#endif



/*________________________ TIMER0 ____________________*/

#if TIMER0_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for TIMER0 module */
#define TIMER0_Interrupt_Disable()                (INTCONbits.TMR0IE = 0)
/* set interrupt enable for TIMER0 module */
#define TIMER0_Interrupt_Enable()                 (INTCONbits.TMR0IE = 1)
/* clear interrupt flag for TIMER0 module */
#define TIMER0_Interrupt_Flag_Clear()             (INTCONbits.TMR0IF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set TIMER0 module interrupt -> high priority */
#define TIMER0_Interrupt_Priority_High()          (INTCON2bits.TMR0IP = 1)
/* set TIMER0 module interrupt -> low priority */
#define TIMER0_Interrupt_Priority_Low()           (INTCON2bits.TMR0IP = 0)
#endif

#endif



/*________________________ TIMER1 ____________________*/

#if TIMER1_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for TIMER1 module */
#define TIMER1_Interrupt_Disable()                (PIE1bits.TMR1IE = 0)
/* set interrupt enable for TIMER1 module */
#define TIMER1_Interrupt_Enable()                 (PIE1bits.TMR1IE = 1)
/* clear interrupt flag for TIMER1 module */
#define TIMER1_Interrupt_Flag_Clear()             (PIR1bits.TMR1IF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set TIMER1 module interrupt -> high priority */
#define TIMER1_Interrupt_Priority_High()          (IPR1bits.TMR1IP = 1)
/* set TIMER1 module interrupt -> low priority */
#define TIMER1_Interrupt_Priority_Low()           (IPR1bits.TMR1IP = 0)
#endif

#endif





/*________________________ TIMER2 ____________________*/

#if TIMER2_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for TIMER2 module */
#define TIMER2_Interrupt_Disable()                (PIE1bits.TMR2IE = 0)
/* set interrupt enable for TIMER2 module */
#define TIMER2_Interrupt_Enable()                 (PIE1bits.TMR2IE = 1)
/* clear interrupt flag for TIMER2 module */
#define TIMER2_Interrupt_Flag_Clear()             (PIR1bits.TMR2IF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set TIMER2 module interrupt -> high priority */
#define TIMER2_Interrupt_Priority_High()          (IPR1bits.TMR2IP = 1)
/* set TIMER2 module interrupt -> low priority */
#define TIMER2_Interrupt_Priority_Low()           (IPR1bits.TMR2IP = 0)
#endif

#endif




/*________________________ TIMER3 ____________________*/

#if TIMER3_INTERRUPT_FEATURE_ENABLE == Interrupt_Feature_Enable
/* clear interrupt enable for TIMER3 module */
#define TIMER3_Interrupt_Disable()                (PIE2bits.TMR3IE = 0)
/* set interrupt enable for TIMER3 module */
#define TIMER3_Interrupt_Enable()                 (PIE2bits.TMR3IE = 1)
/* clear interrupt flag for TIMER3 module */
#define TIMER3_Interrupt_Flag_Clear()             (PIR2bits.TMR3IF = 0)

#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable
/* set TIMER3 module interrupt -> high priority */
#define TIMER3_Interrupt_Priority_High()          (IPR2bits.TMR3IP = 1)
/* set TIMER3 module interrupt -> low priority */
#define TIMER3_Interrupt_Priority_Low()           (IPR2bits.TMR3IP = 0)
#endif
#endif





/*________________________ EUSART ____________________*/

#if EUSART_TX_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the EUSART Module */
#define EUSART_TX_InterruptDisable()         (PIE1bits.TXIE = 0)
/* This routine sets the interrupt enable for the EUSART Module */
#define EUSART_TX_InterruptEnable()          (PIE1bits.TXIE = 1)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the EUSART Module Interrupt Priority to be High priority */
#define EUSART_TX_HighPrioritySet()          (IPR1bits.TXIP = 1)
/* This routine set the EUSART Module Interrupt Priority to be Low priority */
#define EUSART_TX_LowPrioritySet()           (IPR1bits.TXIP = 0)
#endif
#endif

#if EUSART_RX_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the EUSART Module */
#define EUSART_RX_InterruptDisable()         (PIE1bits.RCIE = 0)
/* This routine sets the interrupt enable for the EUSART Module */
#define EUSART_RX_InterruptEnable()          (PIE1bits.RCIE = 1)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the EUSART Module Interrupt Priority to be High priority */
#define EUSART_RX_HighPrioritySet()          (IPR1bits.RCIP = 1)
/* This routine set the EUSART Module Interrupt Priority to be Low priority */
#define EUSART_RX_LowPrioritySet()           (IPR1bits.RCIP = 0)
#endif
#endif



/*________________________ I2C ____________________*/

#if MSSP_I2C_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the MSSP I2C Module */
#define MSSP_I2C_InterruptDisable()         (PIE1bits.SSPIE = 0)
#define MSSP_I2C_BUS_COL_InterruptDisable() (PIE2bits.BCLIE = 0)
/* This routine sets the interrupt enable for the MSSP I2C Module */
#define MSSP_I2C_InterruptEnable()          (PIE1bits.SSPIE = 1)
#define MSSP_I2C_BUS_COL_InterruptEnable()  (PIE2bits.BCLIE = 1)
/* This routine clears the interrupt flag for the MSSP I2C Module */
#define MSSP_I2C_InterruptFlagClear()         (PIR1bits.SSPIF = 0)
#define MSSP_I2C_BUS_COL_InterruptFlagClear() (PIR2bits.BCLIF = 0)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the MSSP I2C Module Interrupt Priority to be High priority */
#define MSSP_I2C_HighPrioritySet()          (IPR1bits.SSPIP = 1)
#define MSSP_I2C_BUS_COL_HighPrioritySet()  (IPR2bits.BCLIP = 1)
/* This routine set the MSSP I2C Module Interrupt Priority to be Low priority */
#define MSSP_I2C_LowPrioritySet()           (IPR1bits.SSPIP = 0)
#define MSSP_I2C_BUS_COL_LowPrioritySet()   (IPR2bits.BCLIP = 0)
#endif
#endif




/*________________________ CCP1 ____________________*/

#if CCP1_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the CCP1 Module */
#define CCP1_InterruptDisable()         (PIE1bits.CCP1IE = 0)
/* This routine sets the interrupt enable for the CCP1 Module */
#define CCP1_InterruptEnable()          (PIE1bits.CCP1IE = 1)
/* This routine clears the interrupt flag for the CCP1 Module */
#define CCP1_InterruptFlagClear()       (PIR1bits.CCP1IF = 0)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the CCP1 Module Interrupt Priority to be High priority */
#define CCP1_HighPrioritySet()          (IPR1bits.CCP1IP = 1)
/* This routine set the CCP1 Module Interrupt Priority to be Low priority */
#define CCP1_LowPrioritySet()           (IPR1bits.CCP1IP = 0)
#endif
#endif




/*________________________ CCP2 ____________________*/

#if CCP2_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the CCP2 Module */
#define CCP2_InterruptDisable()         (PIE2bits.CCP2IE = 0)
/* This routine sets the interrupt enable for the CCP2 Module */
#define CCP2_InterruptEnable()          (PIE2bits.CCP2IE = 1)
/* This routine clears the interrupt flag for the CCP2 Module */
#define CCP2_InterruptFlagClear()       (PIR2bits.CCP2IF = 0)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the CCP2 Module Interrupt Priority to be High priority */
#define CCP2_HighPrioritySet()          (IPR2bits.CCP2IP = 1)
/* This routine set the CCP2 Module Interrupt Priority to be Low priority */
#define CCP2_LowPrioritySet()           (IPR2bits.CCP2IP = 0)
#endif
#endif




/*________________________ SPI ____________________*/

#if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
/* This routine clears the interrupt enable for the SPI Module */
#define MSSP_SPI_InterruptDisable()         (PIE1bits.SSPIE = 0)
/* This routine sets the interrupt enable for the SPI Module */
#define MSSP_SPI_InterruptEnable()          (PIE1bits.SSPIE = 1)
/* This routine clears the interrupt flag for the SPI Module */
#define MSSP_SPI_InterruptFlagClear()       (PIR1bits.SSPIF = 0)
#if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
/* This routine set the SPI Module Interrupt Priority to be High priority */
#define MSSP_SPI_HighPrioritySet()          (IPR1bits.SSPIP = 1)
/* This routine set the SPI Module Interrupt Priority to be Low priority */
#define MSSP_SPI_LowPrioritySet()           (IPR1bits.SSPIP = 0)
#endif
#endif
 /* Section : Data Types Declaration */

 /* Section : Function Declaration */
#endif	/* MCAL_INTERNAL_INTERRUPT_H */

