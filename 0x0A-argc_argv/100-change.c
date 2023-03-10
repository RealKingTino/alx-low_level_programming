#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if the program completes successfully, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = number_of_coins(cents);

	printf("%d\n", coins);

	return (0);
}

/**
 * number_of_coins - computes the minimum number of coins
 * to make change for an amount of money
 *
 * @cents: the amount of money in cents
 *
 * Return: the minimum number of coins to make
 * change for the amount of money
 */
int number_of_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		else
		{
			coins += cents;
			cents = 0;
		}
	}

	return (coins);
}
