#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input
 * @b: input
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
