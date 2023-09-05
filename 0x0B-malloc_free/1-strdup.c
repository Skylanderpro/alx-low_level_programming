#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	size_t len = strlen(str);

	char *duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
