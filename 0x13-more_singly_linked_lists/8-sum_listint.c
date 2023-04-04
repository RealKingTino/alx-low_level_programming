#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: The sum of all data of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
