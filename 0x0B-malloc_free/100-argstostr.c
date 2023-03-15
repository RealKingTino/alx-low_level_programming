#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @str: A pointer to the string
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 *
 * Return: A pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += _strlen(av[i]) + 1;

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[len++] = av[i][j];

		str[len++] = '\n';
	}

	str[len] = '\0';
	return (str);
}
