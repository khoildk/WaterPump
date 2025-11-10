#include "relay.h"

void Relay_Init(Relay_HandleTypeDef *hrelay, GPIO_TypeDef *GPIOx, uint16_t Pin)
{
    hrelay->GPIOx = GPIOx;
    hrelay->Pin = Pin;

    // Đặt relay OFF mặc định
    HAL_GPIO_WritePin(hrelay->GPIOx, hrelay->Pin, GPIO_PIN_RESET);
}

void Relay_On(Relay_HandleTypeDef *hrelay)
{
    HAL_GPIO_WritePin(hrelay->GPIOx, hrelay->Pin, GPIO_PIN_SET);
}

void Relay_Off(Relay_HandleTypeDef *hrelay)
{
    HAL_GPIO_WritePin(hrelay->GPIOx, hrelay->Pin, GPIO_PIN_RESET);
}

