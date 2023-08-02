#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in the list
 * @h: A pointer to the listint_t structure
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
