#include "Ex4.h"

// Hàm hiển thị số trên 7-segment display - STM32F103C6
void display7Segment(int number) {
    // Tắt tất cả đèn 7-segment trước
    HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_SET); // Segment G
    HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_SET); // Segment F
    HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_SET); // Segment E
    HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_SET); // Segment D
    HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_SET); // Segment C
    HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_SET); // Segment B
    HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_SET); // Segment A
    
    // Bật đèn theo từng số
    switch(number) {
        case 0: // Hiển thị số 0
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_RESET); // E
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            break;
            
        case 1: // Hiển thị số 1
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            break;
            
        case 2: // Hiển thị số 2
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_RESET); // E
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            break;
            
        case 3: // Hiển thị số 3
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            break;
            
        case 4: // Hiển thị số 4
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            break;
            
        case 5: // Hiển thị số 5
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            break;
            
        case 6: // Hiển thị số 6
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_RESET); // E
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            break;
            
        case 7: // Hiển thị số 7
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            break;
            
        case 8: // Hiển thị số 8
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_RESET); // E
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            break;
            
        case 9: // Hiển thị số 9
            HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_RESET); // A
            HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_RESET); // B
            HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_RESET); // C
            HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_RESET); // D
            HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_RESET); // F
            HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_RESET); // G
            break;
            
        default:
            break;
    }
}

static int counter = 0;

void EX4_Task(void)
{
    display7Segment(counter);
    counter++;
    if (counter > 9) counter = 0;
    HAL_Delay(1000);
}
