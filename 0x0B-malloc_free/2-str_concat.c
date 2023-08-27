#include "main.h"

/**
 *str_concat - concatenates 2 strings with right memory allocation
 *@s1: the first string to be concatenated
 *@s2: the second string
 *Return: NULL on failure or pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	size_t total_length = strlen(s1) + strlen(s2) + 1;

	concatenated = (char *)malloc(total_length);

	if (concatenated == NULL)
		return (NULL);
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
