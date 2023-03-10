#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

 /**
  * check_num - check if a string contains only digits
  * @str: the string to check
  *
  * Return: 1 if the string contains only digits, 0 otherwise
  */

int check_num(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: an arrya of command-line argument strings
 *
 * Return: 0 if successfull, 1 if there was an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (!check_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		int num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
