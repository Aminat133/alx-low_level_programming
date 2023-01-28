#include "main.h"

/**
*_puts - prnts a string follwed by a line
*
*@ *str: string to be printed
* retun: 0
*/

void _puts(char *str)
{
 while (*str)
   _putchar(*str++);
   
 _putchar('\n');
}
