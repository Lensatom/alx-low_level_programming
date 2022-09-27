#include "main.h"

/**
 * _strpbrk - Searches a set of bytes in a string
 * @s: string to be searched
 * @accept: String with byte
 * Return: A pointer to the byte in s if found, else, NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
			if (*s == accept[b])
				return (s);
		s++;
	}

	return (NULL);
}
