#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	char *start;

	if (argc != 2)
	{
		printf("Error\n");
		return (1)
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	start = (char *) &main;
	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", start[i] & 0xff));
	}
	printf("\n");

	return (0);
}
