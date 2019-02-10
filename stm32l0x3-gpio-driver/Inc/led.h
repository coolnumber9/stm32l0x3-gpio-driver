/*
 * led.h
 *
 *      Author: coolnumber9
 */

#ifndef LED_H_
#define LED_H_

#include "stm32l0x3_gpio_driver.h"

/* User LEDs GPIO definitions
 * For STM32L053 Discovery board, there are only 2 User LEDs connected to GPIOs.
 * For custom board, populate as necessary.
 * */

#define GPIOD_PIN_4		4
#define GPIOD_PIN_5		5

#define LED_GREEN		GPIOD_PIN_4
#define LED_RED       	GPIOD_PIN_5

#define GPIO_BUTTON_PIN 0

/**
* @brief  Initialize the LEDs
* @param  None
* @retval None
*/
void led_init(void);

/**
* @brief  Turns ON the led which is connected on the given pin
* @param  *GPIOx : Base address of the GPIO Port
* @param  Pin : pin number of the LED
* @retval None
*/
void led_turn_on(GPIO_TypeDef *GPIOx, uint16_t pin);

/**
* @brief  Turns OFF the led which is connected on the given pin
* @param  *GPIOx : Base address of the GPIO Port
* @param  Pin : pin number of the LED
* @retval None
*/
void led_turn_off(GPIO_TypeDef *GPIOx, uint16_t pin);

/**
* @brief  Toggels the led which is connected on the given pin
* @param  *GPIOx : Base address of the GPIO Port
* @param  Pin : pin number of the LED
* @retval None
*/
void led_toggle(GPIO_TypeDef *GPIOx, uint16_t pin);

#endif /* LED_H_ */
