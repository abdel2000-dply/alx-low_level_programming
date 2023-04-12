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
int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}
void free_array(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
}
