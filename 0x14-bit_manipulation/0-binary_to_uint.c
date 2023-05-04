#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars;
 *
 * Return: the converted number, or 0 if fail.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, multi = 1, len = 0;
	int i;

	if (!b)
		return (0);

	while (b[i] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			conv += multi;
		else if (b[i] != '0')
			return (0);

		multi = multi << 1;
	}

	return (conv);
}
