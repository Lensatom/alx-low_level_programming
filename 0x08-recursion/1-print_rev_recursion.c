#include "main.h"

/**
 * print_rev_recursion - A function that prints a string in reverse
 * @s: The string to ve printed
 * Return: Always void (success)
 */

void print_rev_recursion(char *s)
{
	unsigned int len,
		     i;
	char new[999];

	len = strlen(s);
	if (len > 1)
	{
		_putchar(*s);
		for(i = 0; i < len - 1; i++)
			new[i] = *(s + i);
		print_rev_recursion(new);
	};
	_putchar(*s);
	_putchar('\n');
}
