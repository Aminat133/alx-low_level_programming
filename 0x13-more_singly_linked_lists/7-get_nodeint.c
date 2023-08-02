#include "lists.h"

/**
 * get_nodeint_at_index - gets a node of list at a specific index
 * @head: A pointer to listint_t structure
 * @index: The index of the node
 * Return: pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i <= index)
	{
		head = head->next;
		i++;
		if (head = NULL)
			return (NULL);
	}
	return (head);
}
