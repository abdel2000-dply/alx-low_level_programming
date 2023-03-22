#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: inputs as an integer
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j;
	int res;

	if (n > 15 || n < 0)
	else
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res >= 10 && res < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
				_putchar(((res % 10) % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}}
				_putchar(res + '0');
		}
		_putchar('\n');
	}}

