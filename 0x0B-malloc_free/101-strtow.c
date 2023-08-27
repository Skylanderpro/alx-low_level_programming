#include "main.h"
/**
 *is_whitespace - checks for whitespaces
 *@c: the character being checked
 *Return: the whitespace character
 */
int is_whitespace(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}
/**
 *count_words - counts the words in the string
 *@str: the string to count words in
 *Return: counted words or
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		/* Skip leading whitespaces*/
		while (is_whitespace(str[i]))
		{
			i++;
		}

		if (str[i] != '\0') /* Non-whitespace character found*/
		{
			count++;
			/* Skip the word*/
			while (str[i] != '\0' && !is_whitespace(str[i]))
			{
				i++;
			}
		}
	}
	return (count);
}
/**
 *strtow - converts strings to words
 *@str: the string converted to words
 *Return: the pointer to converted words or NULL
 */
char **strtow(char *str)
{
	int num_words, length, start, word_index, i, j;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);

	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	word_index = 0;
	i = 0;

	while (str[i] != '\0')
	{
		/*Skip leading whitespaces*/
		while (is_whitespace(str[i]))
		{
			i++;
		}

		if (str[i] != '\0') /*Non-whitespace character found*/
		{
			start = i;
			/*Find the end of the word*/
			while (str[i] != '\0' && !is_whitespace(str[i]))
			{
				i++;
			}

			length = i - start;
			/*Allocate memory for the word and copy it*/
			words[word_index] = (char *)malloc((length + 1) * sizeof(char));

			if (words[word_index] == NULL)
			{
				/*Free memory for previously allocated words*/
				for (j = 0; j < word_index; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}

			strncpy(words[word_index], str + start, length);
			words[word_index][length] = '\0'; /*Null-terminate the word*/

			word_index++;
		}
	}

	words[word_index] = NULL; /*Set the last element to NULL*/

	return (words);
}
