#ifndef INC_RELAY_H_
#define INC_RELAY_H_

#include "stm32f1xx_hal.h"

// Cấu trúc lưu thông tin relay
typedef struct {
    GPIO_TypeDef *GPIOx;   // Cổng GPIO
    uint16_t Pin;          // Chân GPIO
} Relay_HandleTypeDef;

// Các hàm điều khiển relay
void Relay_Init(Relay_HandleTypeDef *hrelay, GPIO_TypeDef *GPIOx, uint16_t Pin);
void Relay_On(Relay_HandleTypeDef *hrelay);
void Relay_Off(Relay_HandleTypeDef *hrelay);

#endif /* INC_RELAY_H_ */
