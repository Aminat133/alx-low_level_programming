#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: string to concatenate
 * @size: string to concatenate
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(nmemb * size);
	if (call == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		call[i] = 0;
	return (call);
}
