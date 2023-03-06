#include "main.h"
/**
 * _memset - a function that fills memory with constant byte.
 * @s: address of memory
 * @b: value
 * @n: number of bytes changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
