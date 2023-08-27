#include "main.h"
/**
 *is_whitespace - checks for whitespaces
 *@c: the character being checked for whitespaces
 *Return: whitespaces
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 *count_words - counts words in a string
 *@str: the string whose words are counted
 *Return: the word count
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		/*Skip leading whitespaces*/
		while (is_whitespace(str[i]))
		{
			i++;
		}

		if (str[i] != '\0') /*Non-whitespace character found*/
		{
			count++;
			/*Skip the word*/
			while (str[i] != '\0' && !is_whitespace(str[i]))
			{
				i++;
			}
		}
	}

	return (count);
}
/**
 *strtow - converts string to words
 *@str: the string to be converted to words
 *Return: pointer to the converted words
 */
char **strtow(char *str)
{
	int num_words, i, j, word_index, start, length;
	char **words;
	if (str == NULL || *str == '\0' || count_words(str) == 0)
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
