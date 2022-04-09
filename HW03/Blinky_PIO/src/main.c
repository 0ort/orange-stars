#include "stm32f4xx_hal.h"


#define GPIO_PIN_LED_GREEN      GPIO_PIN_13
#define GPIO_PIN_LED_RED        GPIO_PIN_14
#define LED_GPIO_PORT           GPIOG
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOG_CLK_ENABLE()


void LEDInit(uint32_t a_ledPin) {
    LED_GPIO_CLK_ENABLE();
    GPIO_InitTypeDef sGPIO;
    sGPIO.Pin = a_ledPin;
    sGPIO.Mode = GPIO_MODE_OUTPUT_PP;
    sGPIO.Pull = GPIO_PULLUP;
    sGPIO.Speed = GPIO_SPEED_HIGH;

    HAL_GPIO_Init(LED_GPIO_PORT, &sGPIO);
}


int main(void) {
    HAL_Init();
    LEDInit(GPIO_PIN_LED_GREEN);
    LEDInit(GPIO_PIN_LED_RED);

    while (1) {
        HAL_GPIO_TogglePin(LED_GPIO_PORT, GPIO_PIN_LED_GREEN);
        HAL_Delay(1000);
        HAL_GPIO_TogglePin(LED_GPIO_PORT, GPIO_PIN_LED_GREEN);
        HAL_GPIO_TogglePin(LED_GPIO_PORT, GPIO_PIN_LED_RED);
        HAL_Delay(1000);
        HAL_GPIO_TogglePin(LED_GPIO_PORT, GPIO_PIN_LED_RED);
    }
}


void SysTick_Handler(void) {
    HAL_IncTick();
}