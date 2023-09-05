#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words from str.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i, j, k, wordCount = 0, len;
	char **words = NULL;
	char *token;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wordCount++;
	}

	if (wordCount == 0)
		return (NULL);

	words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");
	for (i = 0; i < wordCount; i++)
	{
		if (token == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		len = strlen(token);
		words[i] = (char *)malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strcpy(words[i], token);
		token = strtok(NULL, " ");
	}

	words[wordCount] = NULL;

	return (words);
}

