#include "Ex9.h"

static uint16_t clockPins[12] = {ONE_Pin, TWO_Pin, THREE_Pin, FOUR_Pin, FIVE_Pin, SIX_Pin,
                                 SEVEN_Pin, EIGHT_Pin, NINE_Pin, TEN_Pin, ELEVEN_Pin, TWELVE_Pin};

void clearNumberOnClock(int num) {
    if (num == 12) num = 0;
    
    if (num >= 1 && num <= 11) {
        HAL_GPIO_WritePin(GPIOA, clockPins[num - 1], GPIO_PIN_SET);
    } else if (num == 0) {
        HAL_GPIO_WritePin(GPIOA, clockPins[11], GPIO_PIN_SET);
    }
}

void EX9_Task(void) {
    HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin|FIVE_Pin|SIX_Pin|
                             SEVEN_Pin|EIGHT_Pin|NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_RESET);
    HAL_Delay(2000);
    
    clearNumberOnClock(3);
    HAL_Delay(1000);
    clearNumberOnClock(6);
    HAL_Delay(1000);
    clearNumberOnClock(9);
    HAL_Delay(1000);
    clearNumberOnClock(12);
    HAL_Delay(2000);
}
