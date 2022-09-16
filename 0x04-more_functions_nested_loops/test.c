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
	    space = 10;

	for (i = 0; i < size; i++)
	{
		for (j = space; j > 0; j--)
		{
			putchar(' ');
		};
		for (k = (size - space); k < size; k++)
		{
			putchar('#');
		};
		space--;
		putchar('\n');
	};
	if (size <= 0)
	{
		putchar('\n');
	};

	return (0);
}
