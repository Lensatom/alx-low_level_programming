#include "main.h"

/**
 * malloc_checked - A function taht allocates space just like malloc
 * @b: The memory space to be allocated
 * Return: void (success)
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	/* Check if malloc was successful */
	if (arr == NULL)
		exit(98);
	/* As long as malloc was successful */
	return (arr);
}
