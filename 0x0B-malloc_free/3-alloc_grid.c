#include <stdlib>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated, or NULL
 * on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < s2_len; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
