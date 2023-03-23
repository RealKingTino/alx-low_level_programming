#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable number of strings to be printed
 *
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
