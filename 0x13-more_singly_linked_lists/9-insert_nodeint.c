#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at the given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for the new_node
 * Return: The address to the ne_ node at  index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
