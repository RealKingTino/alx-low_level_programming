#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* Check if slow and fast have met */
		if (slow == fast)
		{
			/* Move slow to the beginning of the list */
			slow = head;

		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

		/* Return the loop start node */
		return (slow);
		}
	}

	/* No loop found */
	return (NULL);
}
