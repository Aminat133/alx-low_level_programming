#include "main.h"

/**
*_strlen -  Returns the length of a string.
*@ *s - string
*return: length of @s
*/
int _strlen(char *s)
{
int length;
length = 0;
while (*s++)
length++;
return (length);
}
