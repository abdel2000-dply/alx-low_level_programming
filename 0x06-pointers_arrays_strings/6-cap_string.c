#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;
	char *ch = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
	if (strchr(ch, s[i - 1]) != NULL && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	else
	{
		continue;
	}
	}
	return (s);
}
