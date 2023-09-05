#include "main.h"
/**
 *argstostr - concatenates all the arguments of a program
 *@ac: number of arguments
 *@av: pointer to the arguments
 *Return: pointer to a new string or NULL for error
 */
char *argstostr(int ac, char **av)
{
	int totalLength = 0;
	int index = 0;
	char *concatenated;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			totalLength += strlen(av[i]) + 1;
		}
	}

	concatenated = (char *)malloc(totalLength * sizeof(char) + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(concatenated + index, av[i]);
			index += strlen(av[i]);
			concatenated[index] = '\n';
			index++;
		}
	}

	concatenated[index] = '\0';

	return (concatenated);
}
