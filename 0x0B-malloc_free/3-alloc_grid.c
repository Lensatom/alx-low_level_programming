#include "main.h"

/**
 * alloc_grid - A function that creates a 2-D array and initializes to 0
 * @width - The length of each array in the parent array
 * @height - The number of arrays in the parent arra
 * Return: The 2-D array (success) NULL (fail)
 */

int **alloc_grid(int width, int height)
{
	int *arr,
	    *ind,
	    i,
	    j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	};

	return (arr);
}
