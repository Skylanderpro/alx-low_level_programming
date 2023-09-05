#include "main.h"

/**
 * countWords - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int countWords(char *str)
{
	int wordCount = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			wordCount++;
		}
	}
	return (wordCount);
}

/**
 * allocateWordsArray - Allocate memory for an array of strings.
 * @count: The number of strings to allocate space for.
 *
 * Return: A pointer to the allocated array.
 */
char **allocateWordsArray(int count)
{
	char **words = (char **)malloc((count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	return (words);
}

/**
 * splitAndCopyWords - Split a string into words and copy them into an array.
 * @str: The input string.
 * @count: The number of words in the string.
 *
 * Return: A pointer to the array of words.
 */
char **splitAndCopyWords(char *str, int count)
{
	char **words;
	char *token;
	int i;

	words = allocateWordsArray(count);
	if (words == NULL)
		return (NULL);

	token = strtok(str, " ");
	i = 0;

	while (token != NULL)
	{
		int len = strlen(token);

		words[i] = (char *)malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			freeWordsArray(words);
			return (NULL);
		}
		strcpy(words[i], token);
		token = strtok(NULL, " ");
		i++;
	}

	return (words);
}

/**
 * freeWordsArray - Free memory allocated for an array of strings.
 * @words: The array of strings to be freed.
 */
void freeWordsArray(char **words)
{
	int i;

	if (words == NULL)
	{
		return;
	}
	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int wordCount;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordCount = countWords(str);

	if (wordCount == 0)
		return (NULL);

	words = splitAndCopyWords(str, wordCount);

	if (words == NULL)
		return (NULL);

	words[wordCount] = NULL;

	return (words);
}
