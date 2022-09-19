#include "main.h"

void print_count(int);

/**
 * _strlen - A function that prints the length of a string
 * @str: The string to count
 * Return: Always void (success)
 */

void _strlen(int *str)
{
	int len;

	len = strlen(*str);
	print_count(len);
	_putchar((len % 10) + '0');
	_putchar('\n');
}

/**
 * print_count - Prints any number with putchar
 * @num - The number to be printed
 */

void print_count(int num)
{
	if (num / 10 > 0)
	{
		_putchar((num / 10) + '0');
		print_count(num / 10);
	};
}
