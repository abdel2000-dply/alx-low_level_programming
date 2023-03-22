#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, n;
	int res;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 10; i++)
		{
			res = n * i;
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(res + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
