#include "main.h"
#include <stdlib.h>
/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 * Return: number of words in string
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}
/**
 * word_len - gets the length of a word in a string
 * @str: string containing word
 * Return: length of word
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;
	return (len);
}
/**
 * free_array - frees memory allocated to an array of strings
 * @arr: array of strings to free
 * @size: size of array
 */
void free_array(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
}
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
