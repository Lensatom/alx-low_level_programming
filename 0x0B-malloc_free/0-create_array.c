#include "main.h"

/**
 * Creates an array of size, size and initializes it with c
 * @size: The size of the array to be created
 * @c: The content of the array
 * Return: Pointer to created array (success) NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char array = malloc(size);
	char *arr = &array;

	if (size == 0)
		return (NULL);

	return (arr);
}
