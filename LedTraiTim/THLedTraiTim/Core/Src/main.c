#include "main.h"
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void SangHetLed();
void SangLanLuot(); // Sang theo chieu kim dong ho
void SangTatLanLuot();
void TatHetLed();
int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  while (1)
  {
		//SangHetLed();
		//HAL_Delay(1000);
		//TatHetLed();
		//HAL_Delay(1000);
		//SangLanLuot();
		//TatHetLed();
		//HAL_Delay(1000);
		SangTatLanLuot();
		TatHetLed();
		HAL_Delay(1000);
  }
}
void SangHetLed() {
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D1
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D2
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D3
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D4
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D5
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D6
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D7
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D8
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D9
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D10
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D11
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D12
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D13
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D14
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D15
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D16
	
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D17
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D18
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D19
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D20
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D21
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D22
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D23
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D24
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D25
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D26
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D27
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D28
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D29
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D30
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D31
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D32
}
void TatHetLed(){
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_0, GPIO_PIN_RESET);			// Tat 需n D1
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_1, GPIO_PIN_RESET);			// Tat 需n D2
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);			// Tat 需n D3
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_3, GPIO_PIN_RESET);			// Tat 需n D4
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);			// Tat 需n D5
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);			// Tat 需n D6
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);			// Tat 需n D7
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_7, GPIO_PIN_RESET);			// Tat 需n D8
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);			// Tat 需n D9
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);			// Tat 需n D10
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_10, GPIO_PIN_RESET);			// Tat 需n D11
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);			// Tat 需n D12
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);			// Tat 需n D13
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);			// Tat 需n D14
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);			// Tat 需n D15
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);			// Tat 需n D16
	
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_0, GPIO_PIN_RESET);			// Tat 需n D17
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_1, GPIO_PIN_RESET);			// Tat 需n D18
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_2, GPIO_PIN_RESET);			// Tat 需n D19
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_3, GPIO_PIN_RESET);			// Tat 需n D20
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_4, GPIO_PIN_RESET);			// Tat 需n D21
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_5, GPIO_PIN_RESET);			// Tat 需n D22
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_6, GPIO_PIN_RESET);			// Tat 需n D23
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_7, GPIO_PIN_RESET);			// Tat 需n D24
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);			// Tat 需n D25
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);			// Tat 需n D26
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);			// Tat 需n D27
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);			// Tat 需n D28
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);			// Tat 需n D29
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);			// Tat 需n D30
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);			// Tat 需n D31
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);			// Tat 需n D32
	
}
void SangLanLuot(){
	TatHetLed();
	//Led 1
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D1
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_0, GPIO_PIN_RESET);			// Tat 需n D1
	//Led 2
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D2
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_1, GPIO_PIN_RESET);			// Tat 需n D2
	//Led 3
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D3
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);			// Tat 需n D3
	//Led 4
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D4
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_3, GPIO_PIN_RESET);			// Tat 需n D4
	//Led 5
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D5
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);			// Tat 需n D5
	//Led 6
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D6
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);			// Tat 需n D6
	//Led 7
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D7
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);			// Tat 需n D7
	//Led 8
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D8
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_7, GPIO_PIN_RESET);			// Tat 需n D8
	//Led 9
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D9
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);			// Tat 需n D9
	//Led 10
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D10
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);			// Tat 需n D10
	//Led 11
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D11
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_10, GPIO_PIN_RESET);			// Tat 需n D11
	//Led 12
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D12
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);			// Tat 需n D12
	//Led 13
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D13
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);			// Tat 需n D13
	//Led 14
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D14
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);			// Tat 需n D14
	//Led 15
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D15
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);			// Tat 需n D15
	//Led 16
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D16
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);			// Tat 需n D16
	
	//Led 17
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D17
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_0, GPIO_PIN_RESET);			// Tat 需n D17
	//Led 18
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D18
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_1, GPIO_PIN_RESET);			// Tat 需n D18
	//Led 19
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D19
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_2, GPIO_PIN_RESET);			// Tat 需n D19
	//Led 20
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D20
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_3, GPIO_PIN_RESET);			// Tat 需n D20
	//Led 21
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D21
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_4, GPIO_PIN_RESET);			// Tat 需n D21
	//Led 22
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D22
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_5, GPIO_PIN_RESET);			// Tat 需n D22
  //Led 23
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D23
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_6, GPIO_PIN_RESET);			// Tat 需n D23
	//Led 24
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D24
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_7, GPIO_PIN_RESET);			// Tat 需n D24
	//Led 25
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D25
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);			// Tat 需n D25
	//Led 26
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D26
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);			// Tat 需n D26
	//Led 27
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D27
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);			// Tat 需n D27
	//Led 28
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D28
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);			// Tat 需n D28
	//Led 29
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D29
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);			// Tat 需n D29
	//Led 30
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D30
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);			// Tat 需n D30
	//Led 31
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D31
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);			// Tat 需n D31
	//Led 32
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D32
  HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);			// Tat 需n D32
}

void SangTatLanLuot(){
	TatHetLed();
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D1
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D2
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D3
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D4
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D5
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D6
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D7
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D8
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D9
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D10
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D11
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D12
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D13
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D14
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D15
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOD, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D16
	HAL_Delay(100);
	
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_0, GPIO_PIN_SET);			// S醤g 需n D17
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_1, GPIO_PIN_SET);			// S醤g 需n D18
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_2, GPIO_PIN_SET);			// S醤g 需n D19
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_3, GPIO_PIN_SET);			// S醤g 需n D20
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_4, GPIO_PIN_SET);			// S醤g 需n D21
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_5, GPIO_PIN_SET);			// S醤g 需n D22
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_6, GPIO_PIN_SET);			// S醤g 需n D23
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_7, GPIO_PIN_SET);			// S醤g 需n D24
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_8, GPIO_PIN_SET);			// S醤g 需n D25
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_9, GPIO_PIN_SET);			// S醤g 需n D26
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_10, GPIO_PIN_SET);			// S醤g 需n D27
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_11, GPIO_PIN_SET);			// S醤g 需n D28
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_12, GPIO_PIN_SET);			// S醤g 需n D29
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_13, GPIO_PIN_SET);			// S醤g 需n D30
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_14, GPIO_PIN_SET);			// S醤g 需n D31
	HAL_Delay(100);
	HAL_GPIO_WritePin (GPIOE, GPIO_PIN_15, GPIO_PIN_SET);			// S醤g 需n D32
  HAL_Delay(100);
}


/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7, GPIO_PIN_RESET);

  /*Configure GPIO pins : PE2 PE3 PE4 PE5
                           PE6 PE7 PE8 PE9
                           PE10 PE11 PE12 PE13
                           PE14 PE15 PE0 PE1 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PD8 PD9 PD10 PD11
                           PD12 PD13 PD14 PD15
                           PD0 PD1 PD2 PD3
                           PD4 PD5 PD6 PD7 */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
