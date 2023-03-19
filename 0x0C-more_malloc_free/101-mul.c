#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: number of characters printed
 */

int _puts(char *str)
{
	int len = 0;

	while (*str)
	{
		putchar(*str++);
		len++;
	}

	return (len);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')

	{
		sign = -1;

		s++;
	}

	while (_isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: the product of num1 and num2
 */

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
	{
		_puts("Error\n");
		return (98);
	}

	result = mul(num1, num2);

	printf("%d\n", result);

	return (0);
}
