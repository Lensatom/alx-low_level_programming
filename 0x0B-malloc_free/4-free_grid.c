#include "main.h"

/**
 * free_grid - A function that frees space in a 2-D array
 * @grid: The array to be freed
 * @height: The height or length of parent array to be freed
 * Return: always nothing (success)
 */

void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
