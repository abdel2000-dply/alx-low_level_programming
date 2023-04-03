#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of the character c,
 * null if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
