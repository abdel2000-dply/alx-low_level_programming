#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: input
 *
 * Return; 0
 */
void rev_string(char *s)
{
	char t;
	int i, len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		t = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = t;
	}
}
