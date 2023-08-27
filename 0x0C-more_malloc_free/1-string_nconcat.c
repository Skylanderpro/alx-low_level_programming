#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	char *result = (char *)malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
