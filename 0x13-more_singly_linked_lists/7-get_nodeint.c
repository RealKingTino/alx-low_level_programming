#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t list
 * @head: A poiter to the node of the list
 * @index: The index of the node to retrieve
 *
 * Return: a pointer of the nth of the lit if node exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (curent);
		i++;
		current = current->next;
	}

	return (NULL);
}
