#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ali = 0;

	for (; s[ali] >= '\0'; ali++)
	{
		if (s[ali] == c)
			return (&s[ali]);
	}
	return (0);
}
