/*
 * led.c
 *
 *      Author: coolnumber9
 */

#include "stm32l0x3_gpio_driver.h"
#include "led.h"

/**
	* @brief  Turns ON the led which is connected on the given pin
	* @param  *GPIOx : Base address of the GPIO Port
	* @param  Pin : pin number of the LED
	* @retval None
	*/
void led_turn_on(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	hal_gpio_write_to_pin(GPIOx, pin, 1);
}

/**
	* @brief  Turns OFF the led which is connected on the given pin
	* @param  *GPIOx : Base address of the GPIO Port
	* @param  Pin : pin number of the LED
	* @retval None
	*/
void led_turn_off(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	hal_gpio_write_to_pin(GPIOx, pin, 0);
}

/**
	* @brief  Toggles the led which is connected on the given pin
	* @param  *GPIOx : Base address of the GPIO Port
	* @param  Pin : pin number of the LED
	* @retval None
	*/
void led_toggle(GPIO_TypeDef *GPIOx, uint16_t pin)
{
	if(hal_gpio_read_from_pin(GPIOx, pin))
	{
		 hal_gpio_write_to_pin(GPIOx, pin, 0);
	}
	else
	{
		 hal_gpio_write_to_pin(GPIOx, pin, 1);
	}

#if 0
	//Logic 2
	hal_gpio_write_to_pin(GPIOx,pin, ~(hal_gpio_read_from_pin(GPIOx,pin)));
#endif
}
