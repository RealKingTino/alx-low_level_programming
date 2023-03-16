#include <stdlib.h>
#include"main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of byte to allocate
 *
 * Return: A pointer to the allocated memory
 * If malloc fails the malloc_checked function should cause
 * normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *P = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
