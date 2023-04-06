#include "main.h"

int prime_checker(int n, int i);

/**
 * is_prime_number - checks if the input is a prime number
 * @n: input
 *
 * Return: 1 if the integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
/**
 * prime_checker - recursive helper function for is_prime_number
 * @n: the number to check
 * @i: the divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_checker(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
			return (1);
		else
			return (0);
	}
	else if (i * i > n)
		return (1);
	else
		return (prime_checker(n, i + 1));
}
