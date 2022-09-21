#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The host string that will hold the result
 * @src: The added string
 * Return: Always the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
