#include "main.h"

int iterator(int n, int a);

/**
 * is_prime_number - A function that checks if n is a prime number or otherwise
 * @n: The number to check
 * Return: 1 if prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	return (iterator(n, 2));
}

/**
 * iterator - A function that iterates numbers to test n
 * @n: The number to check
 * @a: The numbers trying to divide n
 * Return: 1 if prime and 0 if otherwise
 */

int iterator(int n, int a)
{
	if (n <= 0)
		return (0);
	else if (n == a)
		return (1);
	else
		return (iterator(n, a + 1));
}
