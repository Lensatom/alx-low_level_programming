#include "main.h"

/**
 * _pow_recursion - A function that returns the y piwer of x
 * @x: The number to be raised to power
 * @y: The power x should be raised to
 * Return: Always the y power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
