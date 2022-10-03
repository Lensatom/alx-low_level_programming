#include "main.h"

/**
 * create_array - Creates an array of size, size and initializes it with c
 * @size: The size of the array to be created
 * @c: The content of the array
 * Return: Pointer to created array (success) NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;

	return (arr);
}
