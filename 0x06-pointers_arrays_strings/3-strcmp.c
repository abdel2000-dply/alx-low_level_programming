#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: 1 if s1 larger than s2, 0 if both are equal, -1 if less
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
