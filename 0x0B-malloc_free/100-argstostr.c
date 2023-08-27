#include "main.h"

/**
 *
 *
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int total_length, i, position;
	char *result;

	if (ac == 0 || av == NULL)
	{		  
		return NULL;
	}

	total_length = 0;
	    
	for (i = 0; i < ac; i++)
	{		
		total_length += strlen(av[i]) + 1; /* +1 for the newline character*/
	}

	/* Allocate memory for the concatenated string*/
	result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
	{	
		return NULL; /* Memory allocation failed*/
	}

	position = 0;


	/* Copy each argument to the concatenated string with a newline*/

	for (i = 0; i < ac; i++)
	{		
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';				
	}

	result[position - 1] = '\0'; /* Replace the last newline
					with null terminator*/

	return result;
}
