#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i, dig, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* counting div ( number of digits ) */
	i = n;
	div = 1;
	while (i > 9)
	{
		div *= 10;
		i /= 10;
	}
	/* printing */
	while (div >= 1)
	{
		dig = (n / div) % 10;
		_putchar(dig + '0');
		div /= 10;
	}
}
