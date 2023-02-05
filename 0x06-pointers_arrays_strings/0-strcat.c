#include "main.h"

/**
 *strcat - Concatenates the string pointed
 *        to by @src, including the terminating
 *        null byte, to the end of the string
 *        pointed to by @dest.
 *@dest: A pointer to the string to be concatenated upon.
 *@src: The source string to be appended to @dest.
 *
 *Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{

int dest_len = 0,i = 0,src_len = 0;

while (dest[i++])
dest_len++;

while (src[i++])
src_len++;

for ( i = 0;i <= src_len ;i++)
dest[dest_len + i] = src[i];

return (dest);
}
