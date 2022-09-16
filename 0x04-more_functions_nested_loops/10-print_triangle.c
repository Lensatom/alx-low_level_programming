#include "main.h"

/**
 * print_triangle - prints out a triangle with size of the size parameter
 * @size: The magnitude in length of supposed hypothenus and adjacent
 * Return: always void (success)
 */

void print_triangle(int size)
{
	int i,
	    j,
	    k;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 1; j--)
		{
			_putchar(' ');
		};
		for (k = 1; k < size; k++)
		{
			_putchar('#');
		};
		_putchar('\n');
	};
	if (size <= 0)
	{
		_putchar('\n');
	};
}
