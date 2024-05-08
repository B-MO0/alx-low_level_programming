#include "search_algos.h"

/**
 * print_array - prints array in desired format
 * @array: array
 * @low: lowest index
 * @high: highest index
 */

void print_array(int *array, int low, int high)
{
	int x;

	printf("Searching in array: ");
	for (x = low; x <= high; x++)
	{
		printf("%d", array[x]);
		if (x != high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm
 * @array: sorted array
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if fail
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		/* Calculate mid by index number */
		mid = (low + high) / 2;
		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);
		/* If value is less than mid, search left of array (smaller numbers) */
		else if (array[mid] < value)
			low = mid + 1;
		/* If value is greater than mid, redefine high to search right of array */
		else
			high = mid - 1;
	}

	return (-1);
}
