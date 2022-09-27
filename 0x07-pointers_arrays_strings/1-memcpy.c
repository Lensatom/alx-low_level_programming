#include "main.h"

/**
 * _memcpy - A function that copies bytes from memory src to memory dest
 * @src: The source memory
 * @dest: The destination memory
 * @n: The number of bytes to be populated in s
 * Return: Always the pointer to the destination memory (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
