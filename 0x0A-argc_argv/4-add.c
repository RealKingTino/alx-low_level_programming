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
