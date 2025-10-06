#include "relay.h"

#define RELAY_PORT GPIOA
#define RELAY_PIN  GPIO_PIN_1  // thay bằng chân bạn dùng để điều khiển relay

void Relay_Init(void)
{
    HAL_GPIO_WritePin(RELAY_PORT, RELAY_PIN, GPIO_PIN_RESET);
}

void Relay_On(void)
{
    HAL_GPIO_WritePin(RELAY_PORT, RELAY_PIN, GPIO_PIN_SET);
}

void Relay_Off(void)
{
    HAL_GPIO_WritePin(RELAY_PORT, RELAY_PIN, GPIO_PIN_RESET);
}

