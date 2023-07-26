#include "main.h"

/**
 *_strncpy - copies a string into another
 *@dest: destination string
 *@src: source string
 *@n: number of characters copied
 *Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
