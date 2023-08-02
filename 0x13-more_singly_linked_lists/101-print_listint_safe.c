#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 1;

	nodes = looped_list_len(head);

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
		for (index = 0; index <= nodes; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	
	return (nodes);
}



/**
 * looped_listint_len - counts no of unique nodes in a  list
 * @head: A pointer to listint_t structure
 * Return: 0 onnot looped list, no of unique nodes on success
 */
size_t looped_listint_len(const listint_t *head)
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
				node++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next
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

