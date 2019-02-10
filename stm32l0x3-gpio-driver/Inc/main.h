/*
 * main.h
 *
 *      Author: coolnumber9
 */

#ifndef MAIN_H_
#define MAIN_H_

#define DBGMCU_SLEEP                 DBGMCU_CR_DBG_SLEEP
#define DBGMCU_STOP                  DBGMCU_CR_DBG_STOP
#define DBGMCU_STANDBY               DBGMCU_CR_DBG_STANDBY
#define IS_DBGMCU_PERIPH(__PERIPH__) ((((__PERIPH__) & (~(DBGMCU_CR_DBG))) == 0x00U) && ((__PERIPH__) != 0x00U))

#define GPIO_PIN_13                	((uint16_t)0x2000U)  /* Pin 13 selected   */
#define GPIO_PIN_14                	((uint16_t)0x4000U)  /* Pin 14 selected   */

#define SWDIO_Pin 					GPIO_PIN_13
#define SWDIO_GPIO_Port 			GPIOA
#define SWCLK_Pin 					GPIO_PIN_14
#define SWCLK_GPIO_Port 			GPIOA

#endif /* MAIN_H_ */
