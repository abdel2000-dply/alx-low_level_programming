#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using Jump search
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i = 0, j;

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
		if (i >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);

	for (j = i - step; j <= i && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
