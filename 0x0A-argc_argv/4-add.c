#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}
	return (0);
}
