#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the input number as an integer
 *
 * Return: 1 for possitive numvers. 0 for zero. -1 for the rest
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_puthchar(48);
		return (0);
	}
	else
	{
		_puthcar(45);
		return (-1);
	}
	_putchar('\n');
}
