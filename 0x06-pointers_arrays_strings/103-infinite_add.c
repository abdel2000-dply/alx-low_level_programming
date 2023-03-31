#include "main.h"
#include <string.h>

/**
 * infinite_add -  adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer
 * @size_r: size of the buffer
 *
 * Return: a pointer, 0 otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, lenr;

	i = strlen(n1);
	j = strlen(n2);
	lenr = size_r - 1;
	if (i > lenr || j > lenr)
		return (0);
	m = 0;
	for (i--, j--, k = 0; k < lenr; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k--, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
