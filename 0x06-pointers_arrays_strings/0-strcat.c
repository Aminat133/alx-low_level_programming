#include "main.h"

/**
 * char *_strcat - appends the src string
 *  to the dest string, overwriting the
 *  terminating null byte (\0) at the end 
 *  of dest and then adds a terminating 
 *  null byte.
 *
 * @dest: first string.
 * @src: second string.
 * 
 * return: A pointer to the destination
 * string @dest.
 */

char *_strcat(char *dest, char *src)
{
int dest_len =0, i = 0, src_len = 0;

while (dest[i++])
dest_len++;

while (src[i++])
src_len++;

for ( i = 0; i <= src_len ; i++)
dest[dest_len + i] = src[i];

return (dest);
}
