#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: 0
 */
void print_number(int n)
{
	int i;
	unsigned int dig, div;

	div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	/* counting div ( number of digits ) */
	i = n;
	while (i > 9)
	{
		div *= 10;
		i /= 10;
	}
	/* printing */
	while (div > 0)
	{
		dig = (n / div) % 10;
		_putchar(dig + '0');
		div /= 10;
	}
}
