#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *a;
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(str, char *);
		if (a != NULL)
			printf("%s", a);
		else
			printf("%s", "(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
