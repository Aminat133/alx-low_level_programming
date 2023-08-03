#include "lists.h"
#include <stdio.h>

/**
 * looped_list_len - counts no of unique nodes in a  list
 * @head: A pointer to listint_t structure
 * Return: 0 onnot looped list, no of unique nodes on success
 */

size_t looped_list_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	hare = head->next->next;
	tortoise = head->next;

	while(hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}
		tortoise =tortoise->next;
		hare = hare->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 1;

	nodes = looped_list_len (head);

	if (head == NULL)
		exit(98);
	
	if (nodes == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

	}
	else
	{
		for (; i <= nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
