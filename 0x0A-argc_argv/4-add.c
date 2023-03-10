#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * add_positive_numbers - adds positive numbers
 * @n1: First number
 * @n2: Second number
 * @n3: Third number
 *
 * Return: Sum of the three numbers
 */

int add_positive_numbers(int n1, int n2, int n3)
{
	int sum;

	if (n1 > 0 && n2 > 0 && n3 >0)
	{
		sum = n1 + n2 + n3;
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	RETURN (0);
}
