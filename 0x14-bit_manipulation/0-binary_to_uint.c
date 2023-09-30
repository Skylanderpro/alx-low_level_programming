#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: the binary to be converted to int
 *
 * Return: the unsigned int of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t length = 0, i;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
