#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * This function splits the input string into words separated by spaces
 * and returns an array of strings.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str);

/**
 * countWords - Counts the number of words in a string.
 * @str: The input string to count words in.
 *
 * This function counts the number of words in the inpt
 * string based on spaces.
 *
 * Return: The number of words in the string.
 */
int countWords(const char *str)
{
	int i, count = 0, isWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!isWord)
			{
				count++;
				isWord = 1;
			}
		}
		else
		{
			isWord = 0;
		}
	}

	return (count);
}

/**
 * splitIntoWords - Splits a string into an array of words.
 * @str: The input string to split into words.
 * @wordCount: The number of words in the input string.
 *
 * This function splits the input string into an array of words and returns it.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **splitIntoWords(const char *str, int wordCount)
{
	int i, j;
	char *copy, *token;
	char **words = (char **)malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	copy = strdup(str);
	token = strtok(copy, " ");

	for (i = 0; i < wordCount; i++)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			free(copy);
			return (NULL);
		}
		token = strtok(NULL, " ");
	}
	free(copy);
	words[wordCount] = NULL;

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * This function splits the input string into words separated by spaces
 * and returns an array of strings.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int wordCount;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	wordCount = countWords(str);
	if (wordCount == 0)
	{
		return (NULL);
	}

	return (splitIntoWords(str, wordCount));
}
