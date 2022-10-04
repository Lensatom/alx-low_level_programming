#include "main.h"

/**
 * alloc_grid - A function that creates a 2-D array and initializes to 0
 * @width - The length of each array in the parent array
 * @height - The number of arrays in the parent arra
 * Return: The 2-D array (success) NULL (fail)
 */

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **) malloc(height = sizeof(int *));
	/* we have to make a malloc per pointer */
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (!p[i])
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	
	return (p);
}
