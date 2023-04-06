#include "main.h"

int _strlen_recursion(char *s);
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
/**
 * _strlen_recursion - Return the length of a string.
 * @s: A pointer to the string to check.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
