#include "main.h"

/**
 * _strlen - the length of a string
 * @s: input
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s* = *(s + 1);
	}
	return (l);
}
