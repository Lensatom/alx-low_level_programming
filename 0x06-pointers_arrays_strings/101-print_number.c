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

	div = num / 10;
	if (n < 0)
		putchar('-');
	if (div > 0)
	{
		print_number(div);
	}
	putchar((num % 10) + '0');
}
