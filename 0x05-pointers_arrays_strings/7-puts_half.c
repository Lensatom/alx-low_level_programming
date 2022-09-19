#include "main.h"

/**
 * puts_half - A function that prints the second half of a string
 * @str: The string to be printed
 * Return: Always void (success)
 */

void puts_half(char *str)
{
	int len,
	    i;

	len = strlen(str);
	i % 2 == 0 ? i = len / 2 : i = (len - 1) / 2;
	for (i; i < len; i = i++)
	{
		_putchar(str[i]);
	};
	_putchar('\n');
}
