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

	*t = print_rev(s);
	*s = *t;
}
