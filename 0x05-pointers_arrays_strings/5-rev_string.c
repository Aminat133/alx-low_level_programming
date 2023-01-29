#include "main.h"

/**
*rev_string - reverses a string.
*
*@s: string to be reversed
*/

void rev_string(char *s)
{
int len = 0, index;
char *m;
char *b;

while (s++)
len++;

for (index = len - 1; index >= 0; index--)
m++ = --s;

for (index = len - 1; index >= 0; index--)
s = m++;
}
