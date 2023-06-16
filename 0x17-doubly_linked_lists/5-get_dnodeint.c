#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node
 * Return: Address of the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
