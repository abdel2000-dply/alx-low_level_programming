#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer
 *  pointed to by dest
 *
 * @dest: input
 * @src: input
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
