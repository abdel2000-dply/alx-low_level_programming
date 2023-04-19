#include "3-calc.h"
#include <stdio.h>
/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0;
 */
int main(int ac, char *av[])
{
	int num1, num2, result;
	char a;
	int (*op_func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	op_func = get_op_func(av[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	a = *av[2];
	if ((a == '/' || a == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
