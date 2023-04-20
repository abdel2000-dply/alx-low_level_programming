#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: the string to br printed between numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a;
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(nums, int);
		printf("%d", a);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
