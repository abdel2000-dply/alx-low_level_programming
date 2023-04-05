#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		return;
	}
	 _print_rev_recursion(s + 1);
	 _putchar(*s);
}
