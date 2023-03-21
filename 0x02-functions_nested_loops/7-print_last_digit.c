#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * @n: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(-ld + '0');
		return (-ld);
	}
}
