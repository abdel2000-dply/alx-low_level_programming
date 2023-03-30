#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to resulting string
 */
char *leet(char *s)
{
	int i, j;
	char lett[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}

	return (s);
}
