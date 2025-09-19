#include "Ex7.h"

void clearAllClock(void) {
    HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin|FIVE_Pin|SIX_Pin|
                             SEVEN_Pin|EIGHT_Pin|NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_SET);
}

void EX7_Task(void) {
    clearAllClock();
    HAL_Delay(1000);
}
