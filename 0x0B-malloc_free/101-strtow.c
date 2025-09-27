#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	int i = 0, j, k, word_count = 0, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			word_count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	for (k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;

		words[k] = malloc((word_len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';

		i += word_len;
	}
	words[word_count] = NULL;

	return (words);
}
