#include "stdio.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times straight line should be printed
 * Return: void (success)
 */

int main(void)
{
	int i,
	    j;
	int n = 3;
	
	if (i <= 0)
	{
		putchar('\n');
	};
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		};
		putchar('\\');
		putchar('\n');
	};

	return (0);
}
