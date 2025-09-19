#include "Ex10.h"

int calculateClockPosition(int timeValue) {
    int position = (timeValue / 5);
    if (position == 0) position = 12;  // 0-4 minutes/seconds map to 12 o'clock
    return position;
}

static int timeSet = 0;
static int currentHour = 11;
static int currentMinute = 30;
static int currentSecond = 0;
static int tick = 0;

// Display clock with auto-run and flashing second hand
void displayClock(int hour, int minute, int second) {
    clearAllClock();
    
    int hourPosition = hour;
    if (hourPosition <= 0) hourPosition = 12;
    if (hourPosition > 12) hourPosition = hourPosition % 12;
    if (hourPosition == 0) hourPosition = 12;
    
    int minutePosition = calculateClockPosition(minute);
    int secondPosition = calculateClockPosition(second);
    
    setNumberOnClock(hourPosition);
    setNumberOnClock(minutePosition);
    
    if (tick % 2 == 1) {
        setNumberOnClock(secondPosition);
    }
}

void EX10_Task(void) {
    if (!timeSet) {
        currentHour = 10;
        currentMinute = 38;
        currentSecond = 40;
        timeSet = 1;
    }
    
    tick++;
    
    if (tick % 2 == 0) {
        currentSecond++;
        if (currentSecond >= 60) {
            currentSecond = 0;
            currentMinute++;
            if (currentMinute >= 60) {
                currentMinute = 0;
                currentHour++;
                if (currentHour > 12) {
                    currentHour = 1;
                }
            }
        }
    }
    
    displayClock(currentHour, currentMinute, currentSecond);
    HAL_Delay(500);
}
