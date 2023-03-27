#include "main.h"

/**
 * _strlen - the length of a string
 * @s: input
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
