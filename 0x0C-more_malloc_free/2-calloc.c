#include "main.h"

/**
 * _calloc - A function that allocates memory to an array (excluded)
 * with elements having a size
 * @nmemb: Size of each element
 * @size: size of the array
 * Return: A pointer to the created (success) NULL (fail)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
