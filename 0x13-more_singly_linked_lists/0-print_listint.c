#include "lists.h"

/**
 * print_listint - Prints all the elements in the list
 * @h: A pointer to listin_t structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
