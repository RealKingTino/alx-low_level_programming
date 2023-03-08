#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of n, -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (_sqrt_recursion(n, 1));
}

/**
 * find_sqrt - finds the natural square root of a number
 * @n: number
 * @i: number
 *
 * Return: natural square root of n, -1 if it doesn't have one
 */
int _sqrt_recursion(int n, int i)
{
	if (n == i * i)
		return (i);

	if (n < i * i)
		return (-1);

	return (_sqrt_recursion(n, i + 1));
}
