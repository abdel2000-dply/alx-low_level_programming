#include "main.h"

int _sqrt_recursion_2(int n, int i);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: input number
 *
 * Return: -1 if the input does not have a natural sq root,
 * the natural square root of the input otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion_2(n, 2));
}

/**
 * _sqrt_recursion_2 - recursively finds the square root of a number.
 * @n: the number to find the square root of.
 * @i: the current guess for the square root.
 *
 * Return: the square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion_2(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_2(n, i + 1));
}
