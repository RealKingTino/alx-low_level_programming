#include "main.h"
#include <stdio.h>
 /**
  * main - multiplies two numbers
  * @argc: numbers of arguments
  * @argv: array of arguments
  *
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num;

		if (scanf(argv[i], "%d", &num) != 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
