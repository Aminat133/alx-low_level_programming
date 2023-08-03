#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * looped_count - counts no of unique nodes in a  list
 * @head: A pointer to listint_t structure
 * Return: 0 onnot looped list, no of unique nodes on success
 */
size_t looped_count(listint_t *head)
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
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes, i = 0;
	listint_t *temp;

	nodes = looped_count(*h);

	if (nodes == 0)
	{
		while (*h)
		{
			temp = *h;
			(*h) = (*h)->next;
			free(temp);
		}
	}
	else
	{
		for (; i <= nodes; i++)
		{
			temp = *h;
			(*h) = (*h)->next;
			free(temp);
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
