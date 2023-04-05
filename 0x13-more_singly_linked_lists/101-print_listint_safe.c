#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * without causing an infinite loop
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cat = head, *dog = head;
	size_t count = 0, flag = 0;

	while (cat && dog && dog->next)
	{
		printf("[%p] %d\n", (void *)cat, cat->n);
		cat = cat->next;
		dog = dog->next->next;

		if (cat == dog)
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		cat = head;
		while (cat != dog)
		{
			printf("[%p] %d\n", (void *)cat, cat->n);
			cat = cat->next;
			dog = dog->next;
		}
		printf("[%p] %d\n", (void *)cat, cat->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

	return (count);
}
