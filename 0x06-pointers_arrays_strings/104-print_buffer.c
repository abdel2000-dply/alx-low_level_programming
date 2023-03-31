#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer
 * @size: size of buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("  ");

			if (j % 2)
				printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				c = *(b + j);
				if (c >= 32 && c <= 126)
					printf("%c", c);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}

