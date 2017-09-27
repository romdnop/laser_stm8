#include "main.h"

KEY_TypeDefStruct keys;

int main(void)
{
  // ---------- CLK CONFIG -----------------------
  CLK_DeInit();

  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1); // set 16 MHz for CPU

  KEYS_Reload(&keys);
  while(1)
  {
    if(KEYS_Execute(&keys) != KEY_NO)
    {
      
    }
  }
}




void assert_failed(uint8_t *assert1, uint32_t assert2)
{
  while(1);
}