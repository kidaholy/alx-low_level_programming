#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
 int main(void)
 {
     int num = 0;
     
     while(num <= 10)
     {
         putchar(48 + num);
         if(num != 9)
         {
             putchar(',');
             putchar(' ');
         }
         num++;
     }
     return(0);
 }
