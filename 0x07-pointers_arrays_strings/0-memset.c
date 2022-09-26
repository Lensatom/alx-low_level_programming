#include "main.h"

/**
 * _memset - A function that fills the first n bytes (excluded)
 * of the memory area pointed to by s with the constant byte b
 * @s: The pointer to the variable to be populated
 * @b: The variable containing the bytes to be transferred
 * @n: The number of bytes to be populated in s
 * Return: Always the pointer to the memory area, s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *ref = s,
		      val = b;

	for (i = 0; i < n; i++)
	{
		ref[i] = val;
	};

	return (ref);
}
