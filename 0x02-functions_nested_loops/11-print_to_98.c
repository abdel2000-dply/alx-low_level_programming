#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  prints all natural numbers
 * @n: inputs as an integer
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
