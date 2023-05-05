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
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		i += xor & 1;
		xor >>= 1;
	}

	return (i);
}
