#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @seperator: the string to br printed between numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a;
	va_list nums;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(nums, int);
		if (i != n - 1)
			printf("%d %s", a, separator);
		else
			printf("%d\n", a);
	}
	va_end(nums);
}