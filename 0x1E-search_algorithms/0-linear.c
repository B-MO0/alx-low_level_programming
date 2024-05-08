#include "search_algos.h"

/**
 * linear_search - search the value in a sorted array numbers
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
