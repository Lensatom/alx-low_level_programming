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
	char new[];
	int *new_add;

	len = strlen(s);
	*new_add = &new;
	if (len > 1)
	{
		_putchar(s[len - 1]);
		for(i = 0; i < len - 1; i++)
			new[i] = s[i];
		print_rev_recursion(new_add);
	};
	_putchar(s);
	_putchar('\n');
}
