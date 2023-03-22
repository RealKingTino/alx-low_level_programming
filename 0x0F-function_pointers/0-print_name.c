#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a given name
 *
 * @name: pointer to the name to be printed
 * @f: pointer to a function that takes a string parameter and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
