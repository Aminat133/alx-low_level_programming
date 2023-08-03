#include "lists.h"
#include <stdio.h>

/**
 * looped_list_len -  finds the loop in a linked list.
 * @head: A pointer to listint_t structure
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	hare = head->next->next;
	tortoise = head->next;

	while(hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (hare);
		}
		tortoise =tortoise->next;
		hare = hare->next->next;
	}
	return (NULL);
}
