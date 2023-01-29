#include "main.h"

/**
*print_rev - prints a string in reverse. followed by a new line.
*
*@s: string to be printed.
*
*return: 0
*/

void print_rev(char *s)
{
int len = 0, index;

while (*s++)
len++;
*s - 1
for (index = len - 1; index >= 0; index--)
_putchar(*s--);

_putchar('\n');
}
