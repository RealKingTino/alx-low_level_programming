#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the element
 * @h: pointer to the head
 * Return: Number of the nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
