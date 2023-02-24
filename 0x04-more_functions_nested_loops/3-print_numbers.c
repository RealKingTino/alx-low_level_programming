#include "main.h"
#include <stdio.h>

/**
 * print_numbers - check for digits (0 - 9)
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58, c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
