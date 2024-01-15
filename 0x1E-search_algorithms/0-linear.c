#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array using the Linear search
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return:  the index where value is located - or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
