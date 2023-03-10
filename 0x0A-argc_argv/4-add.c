#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

 /**
  * main - adds positive numbers passed as arguments
  * @argc: numbers of arguments
  * @argv: Array of arguments
  * Return: 0 on success, 1 on error
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
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}

		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");

			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
