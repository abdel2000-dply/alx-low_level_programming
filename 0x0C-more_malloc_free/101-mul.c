#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
        return (c >= '0' && c <= '9');
}

/**
 * str_len - computes the length of a string
 * @s: the string to compute the length of
 * Return: the length of s
 */
int str_len(char *s)
{
        int i = 0;

        while (s[i])
                i++;

        return (i);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 * @result: array to store the result
 */
void multiply(char *num1, char *num2, int *result)
{
        int i, j;
        int len1 = str_len(num1);
        int len2 = str_len(num2);

        for (i = len1 - 1; i >= 0; i--)
        {
                for (j = len2 - 1; j >= 0; j--)
                {
                        result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                }
        }

        for (i = len1 + len2 - 1; i > 0; i--)
        {
                result[i - 1] += result[i] / 10;
                result[i] %= 10;
        }
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
        int i, j;
        char *num1, *num2;
        char e[] = "Error";
        int *result;

        if (argc != 3)
        {
                for (i = 0; e[i] != '\0'; i++)
                        _putchar(e[i]);
                _putchar('\n');
                exit(98);
        }

        for (i = 1; i < argc; i++)
        {
                for (j = 0; argv[i][j] != '\0'; j++)
                {
                        if (!is_digit(argv[i][j]))
                        {
                                for (i = 0; e[i] != '\0'; i++)
                                        _putchar(e[i]);
                                _putchar('\n');
                                exit(98);
                        }
                }
        }

        num1 = argv[1];
        num2 = argv[2];
        result = calloc(str_len(num1) + str_len(num2), sizeof(int));

        if (result == NULL)
        {
                for (i = 0; e[i] != '\0'; i++)
                        _putchar(e[i]);
                _putchar('\n');
                exit(98);
        }

        multiply(num1, num2, result);

        i = 0;
        while (i < str_len(num1) + str_len(num2) && result[i] == 0)
                i++;

        if (i == str_len(num1) + str_len(num2))
                _putchar('0');
        else
        {
                for (; i < str_len(num1) + str_len(num2); i++)
			putchar(result[i] + '0');
	}
	putchar('\n');
	return (0);
}
