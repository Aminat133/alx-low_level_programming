#include "maIn.h"

/**
* strlen - lists length of string
@ *s - string
return: length of string
*/

int _strlen(char *s)
int length = 0;
while (*s++)
length++;
return (length);
{
