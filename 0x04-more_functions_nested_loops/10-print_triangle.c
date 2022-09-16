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
	    k,
	    space = size;

	for (i = 0; i < size; i++)
	{
		for (j = (space - 1); j > 0; j--)
		{
			_putchar(' ');
		};
		for (k = (size - space); k < size; k++)
		{
			_putchar('#');
		};
		space--
		_putchar('\n');
	};
	if (size <= 0)
	{
		_putchar('\n');
	};
}
