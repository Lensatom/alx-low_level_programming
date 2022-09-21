#include "main.h"

/**
 * _strncat - A function that concatenates a string to n chars from another
 * @dest: The host string that will hold the result
 * @src: The added string
 * @n: The number of characters of n to be added
 * Return: Always the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
