#include "function_pointers.h"

/**
 * array_iterator - A function that calls a function on each element of an array
 * @array: The array to be iterated
 * @size: The size of the array
 * @action: The function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
