#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *first = head;

	if (head == NULL)
		exit(98);
	
	while (head)
	{
		nodes++;
		if (head->next == first)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (nodes);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

	}
	return (nodes);
}
