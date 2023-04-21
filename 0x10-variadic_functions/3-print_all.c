#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char a;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		a = format[i];
		switch (a)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
					printf("(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1] && (a == 'c' || a == 'i' || a == 'f' || a == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
