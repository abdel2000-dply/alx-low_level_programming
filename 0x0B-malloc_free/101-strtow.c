#include "main.h"
#include "library1.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, num_words, len_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < num_words; i++)
	{
		while (str[j] == ' ')
			j++;

		len_word = word_len(&str[j]);

		words[i] = malloc((len_word + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			free_array(words, i);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len_word; k++)
			words[i][k] = str[j + k];

		words[i][len_word] = '\0';
		j += len_word;
	}
	words[i] = NULL;
	return (words);
}
