#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: a pointer to a block of memory
 * @b: constante
 * @n: number of bytes to be set the cnst to
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
