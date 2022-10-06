#include "main.h"

/**
 * malloc_checked - A function taht allocates space just like malloc
 * @b: The memory space to be allocated
 * Return: A pointer to the memory (success)
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = *malloc(b);
	if (arr == NULL)
		exit(98);
	else
		return (*malloc(b));
}
