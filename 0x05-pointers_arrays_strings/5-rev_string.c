#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 *
 * Return; 0
 */
void rev_string(char *s)
{
	char *t;
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		*(t + ((len - 1) - i)) = *(s + i);
	}
	*s = *t;
}
