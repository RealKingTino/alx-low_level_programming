#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *o = haystack;
		char *u = needle;

		while (*o == *u && *u != '\0')
		{
			o++;
			u++;
		}

		if (*u == '\0')
			return (haystack);
	}

	return (0);
}
