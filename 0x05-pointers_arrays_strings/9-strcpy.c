#include "main.h"

/**
 *_strcpy - a function that copies the string pointed to by src
 *@dest: copy to
 *@src: source
 *Return: str
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
		dest[x] = scr[x];
	dest[l] += '\0';
	return (dest)
}
