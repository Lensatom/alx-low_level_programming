#include "main.h"

/**
 * mul - returns the product of a and b
 * @a: a number;
 * @b: another number
 * Return: 0 or 1 (success)
 */

int mul(int a, int b)
{
	int output;
	
	if (a < 0 || b < 0)
	{
		a = abs(a);
		b = abs(b);
	}
	output = a * b;

	return (output);
}
