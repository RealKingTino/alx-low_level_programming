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
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: number of characters printed
 */

int _puts(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
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

	while (_isdigit(*s))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result);
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
		exit(98);
	}

	char *s1 = argv[1];
	char *s2 = argv[2];

	while (*s1)
	{
		if (!_isdigit(*s1))
		{
			_puts("Error\n");
			exit(98);
		}
		s1++;
	}
	while (*s2)
	{
		if (!_isdigit(*s2))
		{
			_puts("Error\n");
			exit(98);
		}
		s2++;
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
