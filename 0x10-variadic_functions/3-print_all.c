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
	int num_i;
	float num_f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num_i = va_arg(args, int);
				printf("%d", num_i);
				break;
			case 'f':
				num_f = va_arg(args, double);
				printf("%f", num_f);
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
				i++;
				continue;
		}
		len = i == 0 ? 1 : i + 1;
		if (format[len] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
