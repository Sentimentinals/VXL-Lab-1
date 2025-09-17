#include "Ex8.h"

static uint16_t clockPins[12] = {ONE_Pin, TWO_Pin, THREE_Pin, FOUR_Pin, FIVE_Pin, SIX_Pin,
                                 SEVEN_Pin, EIGHT_Pin, NINE_Pin, TEN_Pin, ELEVEN_Pin, TWELVE_Pin};

void setNumberOnClock(int num) {
    if (num >= 1 && num <= 12) {
        int index = (num == 12) ? 11 : num - 1;
        HAL_GPIO_WritePin(GPIOA, clockPins[index], GPIO_PIN_RESET);
    }
}

void EX8_Task(void) {
    HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin|FIVE_Pin|SIX_Pin|
                             SEVEN_Pin|EIGHT_Pin|NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_SET);
    setNumberOnClock(12);
    HAL_Delay(1000);
    
    HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin|FIVE_Pin|SIX_Pin|
                             SEVEN_Pin|EIGHT_Pin|NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_SET);
    setNumberOnClock(3);
    HAL_Delay(1000);
    
}
