#include "main.h"

/**
 *_strdup - duplicates string in newly allocated space in memory
 *@str: string duplicated
 *
 *Return: a pointer to duplicated string or NULL for insufficient
 *memory or str = NULL
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	strcpy(duplicate, str);

	return (duplicate);
}
