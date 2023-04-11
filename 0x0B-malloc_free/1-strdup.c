#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	/* length of the string */
	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
