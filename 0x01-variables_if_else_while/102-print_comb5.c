#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l, k;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar(n / 10 + '0'); /*example: 23 will print 2 */
			putchar(n % 10 + '0'); /* 23 will print 3 */
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
