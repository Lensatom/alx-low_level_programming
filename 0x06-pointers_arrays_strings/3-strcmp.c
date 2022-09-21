#include "main.h"

/**
 * _strncpy - A function that copies src into dest
 * @dest: The host string that will hold the result
 * @src: The added string
 * Return: Always the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
