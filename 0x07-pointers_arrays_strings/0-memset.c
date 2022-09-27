#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area s
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area
 */

char *_memset(void *s, int b, size_t n)
{
	memset(s, b, n);

	return (s);
}
