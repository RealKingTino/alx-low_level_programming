#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * For numbers which are multiples of both 3 and 5 print FizzBuzz
 * Each number or word should be seperated by space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % %) == 0) && ((i % 3) != 0))
		{
			printf("Buzz");
		}
		else if (((i % 5) == 0 && ((i % 3) ==0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (!(i == 100))
		{
			printf(" ");
		}
	}
	printf("\n");
	retunt (0);
}
