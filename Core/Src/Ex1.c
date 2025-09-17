#include "Ex1.h"

void EX1_Task(void) {
    // Ex1: Two LEDs toggle every 2 seconds
    // LED_RED_Pin: Red LED
    // LED_YELLOW_Pin: Yellow LED (negative pin connected - active low)
    
    // State 1: RED ON, YELLOW OFF
    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);       // Red LED ON
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET); // Yellow LED OFF (active low)
    
    HAL_Delay(2000);  // Wait 2 seconds
    
    // State 2: RED OFF, YELLOW ON
    HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);       // Red LED OFF
    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET); // Yellow LED ON (active low)
    
    HAL_Delay(2000);  // Wait 2 seconds
}
