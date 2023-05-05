#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to modify
 * @index: the index of the bit
 *
 * Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
