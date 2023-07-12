#include "main.h"

/**
 * _strncat - concatenates two strings,
 *            using at most n bytes from src,
 *            src does not need to be
 *            null-terminated if it contains
 *            n or more bytes.
 *
 * @dest: initial string.
 * @src: string to be added.
 * @n: max number of chars that can be added.
 *
 * return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0, src_len = 0;

while (dest[index++])
dest_len++;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

if (src_len < n)
dest[dest_len] = '\0';

return (dest);
}
