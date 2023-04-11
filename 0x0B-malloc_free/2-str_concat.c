#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
	{
		len++;
		i++;
	}
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		newstr[i] = s2[j];
	newstr[i] = '\0';

	return (newstr);
}
