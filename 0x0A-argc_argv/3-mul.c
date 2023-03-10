#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - converts a string to an integer		
 * @argc: number of arguments
 * @argv: Array of arguments
 *
 * Return: always 0 (Success)
 */
		
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\nprint", result);
	return (0);
}
