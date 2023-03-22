#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n1, n2, nextNum, i, next1, next2;

	n1 = 1, n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (i = 3; i <= 98; i++)
	{
	if (i <= 92)
	{
		nextNum = n1 + n2;
		printf("%lu", nextNum);
		printf(", ");
		/* updating the value of n1 and n2 */
		n1 = n2;
		n2 = nextNum;
	}
	else
	{
		next1 = (n1 + n2) / 10000000000;
		next2 = (n1 + n2) % 10000000000;
		printf("%lu%lu", next1, next2);
		printf(", ");
		n1 = n2;
		n2 = (next1 * 10000000000) + next2;
	}
	}
	printf("\n");
	return (0);
}
