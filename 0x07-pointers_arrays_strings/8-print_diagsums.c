#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, h;

	sum1 = 0;
	sum2 = 0;

	for (h = 0; h < size; h++)
	{
		sum1 = sum1 + a[h * size + h];
	}

	for (h = size - 1; h >= 0; h--)
	{
		sum2 += a[h * size + (size - h - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
