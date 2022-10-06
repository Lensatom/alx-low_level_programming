#include "main.h"

/**
 * array_range - A function that allocates memory to an array (excluded)
 * with elements having a size
 * @nmemb: Size of each element
 * @size: size of the array
 * Return: A pointer to the created (success) NULL (fail)
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * max + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min;
		min++;
	}

	return (ptr);
}
