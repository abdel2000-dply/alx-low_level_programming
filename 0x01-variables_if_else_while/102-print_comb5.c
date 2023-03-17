#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l, k;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			for (l = 0; l <= 9; l++)
			{
				for (k = m + 1; k <= 9; k++)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(k + '0');
					if (n != 9 || m != 8 || l != 9 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
