#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m <= n)
	{
		m <<= 1;
	}
	if (m != n)
		m >>= 1;

	while (m)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
	}
}
