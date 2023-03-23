#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if the number of arguments is incoorect,
 * 2 if the number of bytes is negative
 */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (i);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
