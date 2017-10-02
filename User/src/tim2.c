#include "tim2.h"


void TIM2_init(void)
{

  TIM2_DeInit();
  

  TIM2->PSCR = (uint8_t)(TIM2_PRESCALER_32);
  TIM2->ARRH = (uint8_t)(1250 >> 8);            //400Hz
  TIM2->ARRL = (uint8_t)(1250);
  TIM2->CCMR1 |= (6<<4);                        //Output compare toggle mode
  TIM2->CCMR1 |= (1<<3);                        //preload enable
  TIM2->CCMR1 &= ~(3);                          //configured as output
  TIM2->CCR1H = (uint8_t)(625>>8);              //50% duty cycle
  TIM2->CCR1L = (uint8_t)(625);
  TIM2->CCER1 |= TIM2_CCER1_CC1E;
  TIM2->CR1 |= TIM2_CR1_CEN;

/*
  TIM2_DeInit();
  TIM2_TimeBaseInit(TIM2_PRESCALER_2, 1000);
  //TIM2_OC2Init(TIM2_OCMODE_PWM1, TIM2_OUTPUTSTATE_ENABLE, 1, TIM2_OCPOLARITY_HIGH);
  TIM2_OC1Init(TIM2_OCMODE_PWM1, TIM2_OUTPUTSTATE_ENABLE, 500, TIM2_OCPOLARITY_HIGH);
  TIM2_Cmd(ENABLE);
*/
  
  
}
