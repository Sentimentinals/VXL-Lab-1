#include "Ex5.h"


void display7Segment1(int number) {
    HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, GPIO_PIN_SET); // Segment G
    HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, GPIO_PIN_SET); // Segment F
    HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, GPIO_PIN_SET); // Segment E
    HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, GPIO_PIN_SET); // Segment D
    HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, GPIO_PIN_SET); // Segment C
    HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, GPIO_PIN_SET); // Segment B
    HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, GPIO_PIN_SET); // Segment A
    

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


void display7Segment2(int number) {
    // Tắt tất cả đèn 7-segment 2 trước (Common Anode: SET = tắt)
    HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_SET); // Segment G2
    HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_SET); // Segment F2
    HAL_GPIO_WritePin(SEG7_E2_GPIO_Port, SEG7_E2_Pin, GPIO_PIN_SET); // Segment E2
    HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_SET); // Segment D2
    HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_SET); // Segment C2
    HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_SET); // Segment B2
    HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_SET); // Segment A2
    
    
    switch(number) {
        case 0: // Hiển thị số 0
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            HAL_GPIO_WritePin(SEG7_E2_GPIO_Port, SEG7_E2_Pin, GPIO_PIN_RESET); // E2
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            break;
            
        case 1: // Hiển thị số 1
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            break;
            
        case 2: // Hiển thị số 2
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            HAL_GPIO_WritePin(SEG7_E2_GPIO_Port, SEG7_E2_Pin, GPIO_PIN_RESET); // E2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            break;
            
        case 3: // Hiển thị số 3
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            break;
            
        case 4: // Hiển thị số 4
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            break;
            
        case 5: // Hiển thị số 5
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            break;
            
        case 6: // Hiển thị số 6
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            HAL_GPIO_WritePin(SEG7_E2_GPIO_Port, SEG7_E2_Pin, GPIO_PIN_RESET); // E2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            break;
            
        case 7: // Hiển thị số 7
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            break;
            
        case 8: // Hiển thị số 8
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            HAL_GPIO_WritePin(SEG7_E2_GPIO_Port, SEG7_E2_Pin, GPIO_PIN_RESET); // E2
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            break;
            
        case 9: // Hiển thị số 9
            HAL_GPIO_WritePin(SEG7_A2_GPIO_Port, SEG7_A2_Pin, GPIO_PIN_RESET); // A2
            HAL_GPIO_WritePin(SEG7_B2_GPIO_Port, SEG7_B2_Pin, GPIO_PIN_RESET); // B2
            HAL_GPIO_WritePin(SEG7_C2_GPIO_Port, SEG7_C2_Pin, GPIO_PIN_RESET); // C2
            HAL_GPIO_WritePin(SEG7_D2_GPIO_Port, SEG7_D2_Pin, GPIO_PIN_RESET); // D2
            HAL_GPIO_WritePin(SEG7_F2_GPIO_Port, SEG7_F2_Pin, GPIO_PIN_RESET); // F2
            HAL_GPIO_WritePin(SEG7_G2_GPIO_Port, SEG7_G2_Pin, GPIO_PIN_RESET); // G2
            break;
            
        default:
            break;
    }
}


void dualCountDownTimer(int seconds1, int seconds2) {
    int maxTime = (seconds1 > seconds2) ? seconds1 : seconds2;
    
    for (int i = 1; i <= maxTime; i++) {

        if (i <= seconds1) {
            display7Segment1(seconds1 - i + 1);
        } else {
            display7Segment1(0);
        }
        
        if (i <= seconds2) {
            display7Segment2(seconds2 - i + 1);
        } else {
            display7Segment2(0);
        }
        
        HAL_Delay(1000);
    }
    
    display7Segment1(0);
    display7Segment2(0);
}

void countDownTimer(int seconds) {
    for (int i = seconds; i > 0; i--) {
        display7Segment1(i);
        HAL_Delay(1000);
    }
    display7Segment1(0);
}

void EX5_Task(void) {
    // CHU KỲ 1: Hướng 1 = Xanh + Vàng (5s), Hướng 2 = Đỏ (5s)
    
    // Giai đoạn 1.1: Hướng 1 Xanh (3s), Hướng 2 Đỏ (đếm từ 5→3)
    HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);     // Đỏ 1 TẮT
    HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET); // Vàng 1 TẮT
    HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_RESET); // Xanh 1 BẬT

    HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);   // Đỏ 2 BẬT
    HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET); // Vàng 2 TẮT
    HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);   // Xanh 2 TẮT

    // Hướng 1: Xanh 3→1, Hướng 2: Đỏ 5→3
    for (int i = 0; i < 3; i++) {
        display7Segment1(3 - i);  // 3, 2, 1
        display7Segment2(5 - i);  // 5, 4, 3
        HAL_Delay(1000);
    }

    // Giai đoạn 1.2: Hướng 1 Vàng (2s), Hướng 2 Đỏ (đếm từ 2→1)
    HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_SET);       // Đỏ 1 TẮT
    HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_RESET); // Vàng 1 BẬT
    HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);     // Xanh 1 TẮT

    // Hướng 1: Vàng 2→1, Hướng 2: Đỏ 2→1
    for (int i = 0; i < 2; i++) {
        display7Segment1(2 - i);  // 2, 1
        display7Segment2(2 - i);  // 2, 1
        HAL_Delay(1000);
    }


    HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, GPIO_PIN_RESET);   // Đỏ 1 BẬT
    HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, GPIO_PIN_SET); // Vàng 1 TẮT
    HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, GPIO_PIN_SET);   // Xanh 1 TẮT

    HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);     // Đỏ 2 TẮT
    HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET); // Vàng 2 TẮT
    HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET); // Xanh 2 BẬT


    for (int i = 0; i < 3; i++) {
        display7Segment1(5 - i);  // 5, 4, 3
        display7Segment2(3 - i);  // 3, 2, 1
        HAL_Delay(1000);
    }


    HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);       // Đỏ 2 TẮT
    HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET); // Vàng 2 BẬT
    HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);     // Xanh 2 TẮT


    for (int i = 0; i < 2; i++) {
        display7Segment1(2 - i);  // 2, 1
        display7Segment2(2 - i);  // 2, 1
        HAL_Delay(1000);
    }
}
