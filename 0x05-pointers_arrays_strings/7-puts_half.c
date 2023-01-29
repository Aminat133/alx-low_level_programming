#include "main.h"
/**
*puts_half - prints the first half of a string,
*followed by a new line.
*
*@str: string to be printed
*/

void puts_half(char *str)
{
int len = 0, index = 0;
while (str[index++])
len++;

for (index = len - 1 +(len/2); index = len - 1; index++)
_putchar(str[index]);

_putchar('\n');
}
