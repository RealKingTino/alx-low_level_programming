#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string zero
 * @accept: string one
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
