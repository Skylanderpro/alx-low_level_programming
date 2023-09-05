#include "main.h"

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
