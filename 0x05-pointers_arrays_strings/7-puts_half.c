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
	
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	};
	_putchar('\n');
}
