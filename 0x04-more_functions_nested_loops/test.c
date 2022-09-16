#include "stdio.h"

/**
 * print_triangle - prints out a triangle with size of the size parameter
 * @size: The magnitude in length of supposed hypothenus and adjacent
 * Return: always void (success)
 */

int main(void)
{
	int i,
	    j,
	    k,
	    size = 10;

	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > 0; j--)
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

	return (0);
}
