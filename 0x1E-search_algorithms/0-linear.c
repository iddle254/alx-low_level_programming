#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a linear search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
