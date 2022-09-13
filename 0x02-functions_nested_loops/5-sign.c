#include "main.h"

/**
 * print_sign - assccory function
 *
 * Description: returns a value for if n is negative, positive or neutral
 *
 * @c: the undecided character type
 *
 * Return: 0 or 1 (success)
 */

int print_sign(int n)
{
	int output;

	if (n == 0)
	{
		_putchar('0');
		output = 0;
	} else if (n > '0')
	{
		_putchar('+');
		output = 1;
	} else 
	{
		_putchar('-');
		output = -1;
	};

	return (output);
}
