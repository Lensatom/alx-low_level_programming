#include "main.h"

/**
 * print_number - A function that prints a number unsing putchar
 * @n: The number
 * Return: Always void (success)
 */

void print_number(int n)
{
	unsigned int num = n;
	int div;

	div = int / 10;
	if (n < 0)
		_putchar('-');
	if (div > 0)
	{
		print_number(div);
	}
	_putchar((num % 10) + '0');

	return (dest);
}
