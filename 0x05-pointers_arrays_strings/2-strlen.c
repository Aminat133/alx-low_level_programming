#include "main.h"

/**
* strlen - lists length of string
@ *s - string
return: length of string
*/

int _strlen(char *s)
{
int length;
length = 0;
while (*s++)
length++;
return (length);
}
