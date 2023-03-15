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
 * count_words - Counts the number of words in a string
 * @str: A pointer to the string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
			count++;

		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: A pointer to the string
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < words)
	{
		while (*str == ' ')
			str++;

		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;

		arr[i] = malloc(sizeof(char) * (len + 1));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);

			free(arr);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			arr[i][k] = *str++;

		arr[i][k] = '\0';
		i++;
	}

	arr[i] = NULL;
	return (arr);
}
