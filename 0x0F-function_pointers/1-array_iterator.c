#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as
 * a parameter on each element of an array.
 * @array: array of integers
 * @size: size of the array
 * @action: func pointer to a func we need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
