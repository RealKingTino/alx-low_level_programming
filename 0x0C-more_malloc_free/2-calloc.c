#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *ch_p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return(NULL);

	ch_p = p;
	for (i = 0; i < nmemb * size; i++)
		ch_p[i] = 0;

	return (p);
}
