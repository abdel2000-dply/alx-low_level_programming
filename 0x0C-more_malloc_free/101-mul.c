#include <stdlib.h>
#include <stdio.h>

/**
 * is_number - checks if a string is a number
 * @s: the string to check
 *
 * Return: 1 if s is a number, 0 otherwise
 */

int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * error - prints an error message and exits the program with code 98
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * str_len - calculates the length of a string
 * @str: the string to calculate the length of
 *
 * Return: the length of str
 */

int str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * compute_mult - computes the product of two numbers represented as strings
 * @len1: the length of the first number string
 * @len2: the length of the second number string
 * @s1: the first number string
 * @s2: the second number string
 * @result: an array to store the resulting product
 */

void compute_mult(int len1, int len2, char *s1, char *s2, int *result)
{
	int carry = 0;
	int digit1 = 0;
	int digit2 = 0;
	int i, j;

	for (i = 0; i < len1 + len2 + 1; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += result[i + j + 1] + (digit1 * digit2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[i + j + 1] = carry;
	}
}

/**
 * main - the entry point of the program
 * @ac: the number of command-line arguments
 * @av: an array of strings representing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int ac, char *av[])
{
	int len1 = 0, len2 = 0, *result;
	char *s1, *s2;
	int checker = 0;
	int i;

	if (ac != 3)
		error();
	if (!(is_number(av[1]) && is_number(av[2])))
		error();
	s1 = av[1];
	s2 = av[2];
	len1 = str_len(s1);
	len2 = str_len(s2);
	result = malloc(sizeof(int) * (len1 + len2 + 1));
	for (i = 0; i < len1 + len2 + 1; i++)
		result[i] = 0;
	compute_mult(len1, len2, s1, s2, result);
	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i])
			checker = 1;
		if (checker)
			putchar(result[i] + 48);
	}
	if (checker == 0)
		putchar('0');
	putchar('\n');
	free(result);
	return (0);
}
