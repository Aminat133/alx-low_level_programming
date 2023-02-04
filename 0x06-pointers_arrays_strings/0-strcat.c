#include "main.h"

/**
*char *_strcat - appends the src string to the dest string,
*overwriting the terminating null byte (\0) at the end of dest
*and then adds a terminating null byte
*
* @dest: first string.
* @src: second string.
* 
* return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
int dest_len =0, i;

while (dest++)
dest_len++;

while (src++)
src_len++;

for( i = 0; i <= src_len; i++)
dest[(dest_len + i)] = src[i];

dest[(dest_len + i)] = '\0' ;

return (dest);
}
