#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to a pointer to the first node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *prev;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
			{
				prev = current;
				current = current->next;
				free(prev);
			}
			else
			{
				free(current);
				break;
			}
	}

	*h = NULL;

	return (count);
}

