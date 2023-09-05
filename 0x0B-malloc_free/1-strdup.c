#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
