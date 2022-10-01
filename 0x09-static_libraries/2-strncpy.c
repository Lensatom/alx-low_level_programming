#include "main.h"

/**
 * _strncpy - A function that copies src into dest
 * @dest: The host string that will hold the result
 * @src: The added string
 * @n: The number of characters to copy
 * Return: Always the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
