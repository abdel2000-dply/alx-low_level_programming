#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	newstr = malloc((len1 + n + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		newstr[i] = s2[j];
	newstr[i] = '\0';

	return (newstr);
}
