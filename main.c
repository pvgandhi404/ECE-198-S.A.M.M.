// Put this in the required comment spots
// Initialize: PA6, PA7, PC7, PB4, PB5, AND PB6 to GPIO_OUTPUT

/* USER CODE BEGIN Includes */
#include "lcd.h"
/* USER CODE END Includes */


/* USER CODE BEGIN 2 */

  // Lcd_PortType ports[] = { D4_GPIO_Port, D5_GPIO_Port, D6_GPIO_Port, D7_GPIO_Port };
    Lcd_PortType ports[] = { GPIOC, GPIOB, GPIOA, GPIOA };
    // Lcd_PinType pins[] = {D4_Pin, D5_Pin, D6_Pin, D7_Pin};
    Lcd_PinType pins[] = {GPIO_PIN_7, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_6};
    Lcd_HandleTypeDef lcd;
    // Lcd_create(ports, pins, RS_GPIO_Port, RS_Pin, EN_GPIO_Port, EN_Pin, LCD_4_BIT_MODE);
    lcd = Lcd_create(ports, pins, GPIOB, GPIO_PIN_5, GPIOB, GPIO_PIN_4, LCD_4_BIT_MODE);
    Lcd_cursor(&lcd, 0,1);
    Lcd_string(&lcd, "Nizar Mohideen");
      for ( int x = 1; x <= 200 ; x++ )
      {
        Lcd_cursor(&lcd, 1,7);
        Lcd_int(&lcd, x);
        HAL_Delay (1000);
      }

  /* USER CODE END 2 */
