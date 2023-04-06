#include "main.h"

int is_palindrome_helper(char *s, int len);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: A pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, len));
}
/**
 * is_palindrome_helper - Check if a string is a palindrome.
 * @s: A pointer to the string to check.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (s[0] != s[len - 1])
		return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}
