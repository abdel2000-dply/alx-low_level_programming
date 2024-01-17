#include <stdio.h>
#include "search_algos.h"
/**
 * print_array - prints the array passed to it
 * @array: Pointer to the first element of the array.
 * @left: Starting index of the subarray to print.
 * @right: Ending index of the subarray to print.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array, Binary search
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
