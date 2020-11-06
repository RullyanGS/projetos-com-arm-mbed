#include "mbed.h"

DigitalIn button(PC_7);
DigitalOut led(PA_6);

int main()
{
     while(true)
     {
         if (button == 0) // Botão pressionado
         led = 1;
         else // Botão NÃO está pressionado
         led = 0;
     }
}

