#include "main.h"

/**
 * print_square - prints out a square with size of the size parameter
 * @size: The magnitude in length of eac side
 * Return: always void (success)
 */

void print_square(int size)
{
	int i,
	    j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		};
		putchar('\n');
	};
	if (size <= 0)
	{
		putchar(' ');
	};
}
