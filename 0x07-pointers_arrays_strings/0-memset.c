#include "main.h"

/**
 * _memset - A function that fills the first n bytes (excluded)
 * of the memory area pointed to by s with the constant byte c
 * @s: The pointer to the variable to be populated
 * @b: The variable containing the bytes to be transferred
 * @c: The number of bytes to be populated in s
 * Return: Always the pointer to the memory area, s (success)
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s,
		      value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
