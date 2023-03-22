#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, nextNum, i;

	n1 = 1, n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
		nextNum = (n1 + n2) % 1000000000;
		printf("%lu", nextNum);
		if (i != 50)
		{
			printf(", ");
		}
		/* updating the value of n1 and n2 */
		n1 = n2;
		n2 = nextNum;
	}
	printf("\n");
	return (0);
}
