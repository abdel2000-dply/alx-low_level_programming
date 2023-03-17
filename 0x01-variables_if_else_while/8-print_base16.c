#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char l = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
