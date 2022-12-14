#include "main.h"

int iterator(int n, int a);

/**
 * _sqrt_recursion - A fjnction that finds the square root of n
 * @n: The number whose square root has to be found
 * Return: the square root of n or -1 if n is not a perfect square
 */

int _sqrt_recursion(int n)
{
	return (iterator(n, 0));
}

/**
 * iterator - Funtion that iterates possible sqare roots recursively
 * @n: The number's square root to be found
 * @a: Possible sqyare roots
 * Return: The square root of n or -1 if n is not a perfect square
 */

int iterator(int n, int a)
{
	if (n == 1)
		return (n);
	else if (a * a == n)
		return (a);
	else if (a == n / 2 || n < 0)
		return (-1);
	else
		return (iterator(n, a + 1));
}
