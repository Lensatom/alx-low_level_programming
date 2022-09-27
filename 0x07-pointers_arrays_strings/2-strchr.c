#include "main.h"

/**
 * _strchr - Finds a character in a string, s
 * @s: The string to be searched
 * @c: The character to be searched for
 * Return: Thr character if found or 0 is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);

		return (0);
	}
}
