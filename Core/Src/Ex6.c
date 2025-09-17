#include "Ex6.h"

static int currentLED = 0;
static uint16_t ledPins[12] = {ONE_Pin, TWO_Pin, THREE_Pin, FOUR_Pin, FIVE_Pin, SIX_Pin,
                               SEVEN_Pin, EIGHT_Pin, NINE_Pin, TEN_Pin, ELEVEN_Pin, TWELVE_Pin};

void EX6_Task(void) {
    HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin|FIVE_Pin|SIX_Pin|
                             SEVEN_Pin|EIGHT_Pin|NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_SET);
    
    HAL_GPIO_WritePin(GPIOA, ledPins[currentLED], GPIO_PIN_RESET);
    
    currentLED++;
    if (currentLED >= 12) {
        currentLED = 0;
    }
    
    HAL_Delay(1000);
}
