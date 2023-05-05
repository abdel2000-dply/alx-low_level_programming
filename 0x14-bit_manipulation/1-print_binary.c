#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = ULONG_MAX;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m > 0 && !(n & m))
	{
		m >>= 1;
	}

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
		m >>= 1;
	}
}
