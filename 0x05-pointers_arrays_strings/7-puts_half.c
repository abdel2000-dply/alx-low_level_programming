#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: input
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; *str != '\0'; i++)
		{
			_putchar(*str);
		}
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; *str != '\0'; i++)
		{
			_putchar(*str);
		}
	}
}
