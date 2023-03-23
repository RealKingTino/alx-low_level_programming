#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, len = 0;
	char *str;
	char c;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				len++;
				break;
		}
		if (format[i + 1] && len == 0) /* check if len is zero */
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
