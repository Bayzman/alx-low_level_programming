#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using binary search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the value in the array, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (first + last) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}

	return (-1);
}
