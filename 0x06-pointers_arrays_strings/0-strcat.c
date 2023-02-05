#include "main.h"

/**
*reset_to_98 - resets_to_98.
*
*@dest: The pointer variable.
*@src: The pointer variable.
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
