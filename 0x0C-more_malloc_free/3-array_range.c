#include "main.h"

/**
 * array_range - A function that allocates memory to an array (excluded)
 * @min: The lower value (included)
 * @max: The upper value (included)
 * Return: The array of range (success)
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min;
		min++;
	}

	return (ptr);
}
