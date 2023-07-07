#include "main.h"
/**
 * _strcat - appends the src string
 *           to the dest string, overwriting
 *           the terminating null byte (\0) 
 *           at the end of dest and then adds
 *           a terminating null byte.
 *
 * @dest: first string.
 * @src: second string.
 * 
 * return: A pointer to the destination
 *           string @dest.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
