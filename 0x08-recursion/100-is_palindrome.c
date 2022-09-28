#include "main.h"

int iterator(char *s, int a, int b);

/**
 * is_palindrome - Checks if a stribg is the same backwards
 * @s: The string to check
 * Return: 1 if true and 0 if otherwise
 */

int is_palindrome(char *s)
{
	return (iterator(s, 0, strlen(s) - 1));
}

/**
 * iterator - A funtion that iterates over characters in s
 * @s: The input string
 * @a: The lower limit of char to check
 * @b: The upper limit of char to check
 * Return: 1 if a and b are tge same allthrough and 0 if otherwise
 */

int iterator(char *s, int a, int b)
{
	/* An empty string is a palindrome */
	if (a == b || b - a == 1 || b == -1)
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (iterator(s, a + 1, b - 1));
}
