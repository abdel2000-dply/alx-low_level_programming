#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip.
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while ((n ^ m) != 0)
	{
		i += (n ^ m) & 1;
		(n ^ m) >>= 1;
	}

	return (i);
}
