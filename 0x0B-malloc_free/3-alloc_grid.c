#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a newly allocated string containing the contents of s1
 * followed by the contents of s2, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int s1_len = 0, s2_len = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];
	for (i = 0; i < s2_len; j++)
		result[i + j] = s2[j];

	result[s1_len + s2_len] = '\0';

	return (result);
}
