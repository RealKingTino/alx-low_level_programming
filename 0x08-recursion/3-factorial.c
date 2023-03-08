#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: given number
 *
 * Return: factorial of n, -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
