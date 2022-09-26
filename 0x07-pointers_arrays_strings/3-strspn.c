#include "main.h"

/**
 * _strspn - Function that returns the number of bytes of s similar to accept
 * @s: The source pointer
 * @accept: The guest pointer
 * Return: A pointer to the sliced
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t result = strspn(s, accept);

	return (result);
}
