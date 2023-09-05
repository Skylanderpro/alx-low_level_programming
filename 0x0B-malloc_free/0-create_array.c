#include "main.h"
/**
 *create_array - creates array using malloc
 *@size: array size
 *@c: values in array
 *Return: the array or NULL for errors
 */
char *create_array(unsigned int size, char c) {
	if (size == 0) {
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL) {
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++) {
		array[i] = c;
	}

	return (array);
}
