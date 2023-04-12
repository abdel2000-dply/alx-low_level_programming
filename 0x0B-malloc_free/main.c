/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 *
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
 *
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
