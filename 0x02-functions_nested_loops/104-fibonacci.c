#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, nextNum, i, next1, next2, n11, n13, n22, n23;

	n1 = 1, n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 93; i++)
	{
		nextNum = n1 + n2;
		printf("%lu", nextNum);
		printf(", ");
		/* updating the value of n1 and n2 */
		n1 = n2;
		n2 = nextNum;
	}
	for (i = 93; i <= 98; i++)
	{
		n11 = n1 / 1000000;
		n13 = n1 % 1000000;
		n22 = n2 / 1000000;
		n23 = n2 % 1000000;
		next1 = n11 + n22;
		next2 = n13 + n23;
		_putchar(next1 + '0');
		_putchar(next2 + '0');
		printf(", ");
		n11 = n22;
		n13 = n23;
		n22 = next1;
		n23 = next2;
	}
	printf("\n");
	return (0);
}
