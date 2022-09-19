#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to be reversed
 * Return: Always void (success)
 */

void rev_string(char *s)
{
	int len,
	    i,
	    reversed;

	len = strlen(s);
	for (i = (len - 1); i >= 0; i--)
	{
		reversed = reversed + s[i];
	};
	*s = reversed;
}
