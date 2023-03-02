#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *str)
{
	char *p = str;
	int i;

	while (*p)
{
	if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
	{
		*p += 13;
	}
	else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
	{
		*p -= 13;
	}
	p++;
}
return (s);
}

int main(void)
{
	char str[] = "Hello, world!";

	printf("Original: %s\n", str);
	rot13(str);
	printf("Encoded: %s\n", str);
	return (0);
}
