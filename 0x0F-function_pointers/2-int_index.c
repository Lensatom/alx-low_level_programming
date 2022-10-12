#include "stdio.h"

/**
 * int_index - A function that calls a function to search in an array
 * @array: The array to be iterated
 * @size: The size of the array
 * return: The the index to the found (success) -1 (fail)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i,
	    isFound;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		isFound = (*cmp)(int);
		if (isFound != 0)
			return (i);
	};

	return (-1);
}
