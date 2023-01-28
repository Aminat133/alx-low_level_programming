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
int index = 0, length;
while(s++)
index++;

for(length = index - 1; length >= 0; length--)
_putchar(s[length]);

_putchar('\n');
}
