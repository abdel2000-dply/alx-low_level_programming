#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if argc is not exactly 1, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int coins;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins > 0)
	{
		if (coins >= 25)
			coins -= 25, i++;
		else if (coins >= 10)
			coins -= 10, i++;
		else if (coins  >= 5)
			coins -= 5, i++;
		else if (coins >= 2)
			coins -= 2, i++;
		else
			coins -= 1, i++;
	}
	printf("%d\n", i);
	return (0);
}
