#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog_t
 * @d: pointer to dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
