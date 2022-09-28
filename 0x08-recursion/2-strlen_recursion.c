#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: The input string
 * Return: Always the length of s
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	};

	return (sum);
}
