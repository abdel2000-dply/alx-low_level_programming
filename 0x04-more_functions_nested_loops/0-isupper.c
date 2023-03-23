#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: input as a character
 *
 * Return: 1 for uppercase. 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
