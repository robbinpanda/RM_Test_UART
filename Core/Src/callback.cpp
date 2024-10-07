#include "main.h"
#include "usart.h"

extern uint8_t message[8];
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    if(huart->Instance == huart6.Instance)
    HAL_UART_Receive_IT(&huart6, (uint8_t *)message, 8);
    HAL_UART_Transmit_IT(&huart6, (uint8_t *)message, 8);
}