#include <stdlib.h>
#include "function_pointers.h"

int _putchar(char c);

/**
 * print_name - Calls a function to print a given name
 *
 * @name: pointer to the name to be printed
 * @f: pointer to a function that takes a string parameter and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_name_as_is - Prints a name as is
 *
 * @name: pointer to the name to be printed
 */
void print_name_as_is(char *name)
{
	while (*name != '\0')

	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}

/**
 * print_name_uppercase - Prints a name in uppercase
 *
 * @name: pointer to the name to be printed
 */

void print_name_uppercase(char *name)
{
	char *name_upper = malloc(sizeof(char));
	if (name_upper == NULL)
		exit(1);

	while (*name != '\0')
	{
		if (*name >= 'a' && *name <= 'z')
			*name_upper = *name - ('a' - 'A');

		else
			*name_upper = *name;

		_putchar(*name_upper);
		name++;
	}

	_putchar('\n');
	free(name_upper);
}
