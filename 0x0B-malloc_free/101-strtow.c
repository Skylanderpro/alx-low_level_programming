#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_whitespace(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        // Skip leading whitespaces
        while (is_whitespace(str[i]))
        {
            i++;
        }

        if (str[i] != '\0') // Non-whitespace character found
        {
            count++;

            // Skip the word
            while (str[i] != '\0' && !is_whitespace(str[i]))
            {
                i++;
            }
        }
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0' || count_words(str) == 0)
    {
        return NULL;
    }

    int num_words = count_words(str);

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));

    if (words == NULL)
    {
        return NULL;
    }

    int word_index = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        // Skip leading whitespaces
        while (is_whitespace(str[i]))
        {
            i++;
        }

        if (str[i] != '\0') // Non-whitespace character found
        {
            int start = i;

            // Find the end of the word
            while (str[i] != '\0' && !is_whitespace(str[i]))
            {
                i++;
            }

            int length = i - start;

            // Allocate memory for the word and copy it
            words[word_index] = (char *)malloc((length + 1) * sizeof(char));
            
            if (words[word_index] == NULL)
            {
                // Free memory for previously allocated words
                for (int j = 0; j < word_index; j++)
                {
                    free(words[j]);
                }
                free(words);
                return NULL;
            }

            strncpy(words[word_index], str + start, length);
            words[word_index][length] = '\0'; // Null-terminate the word
            
            word_index++;
        }
    }

    words[word_index] = NULL; // Set the last element to NULL

    return words;
}
