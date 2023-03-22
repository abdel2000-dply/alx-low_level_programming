#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, nextNum, i;

	n1 = 1, n2 = 2;
	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		nextNum = n1 + n2;
		printf("%d", nextNum);
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
