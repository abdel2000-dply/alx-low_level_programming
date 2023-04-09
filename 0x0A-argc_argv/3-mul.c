#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
