#include "main.h"

void show(int);

/**
 * print_times_table - accessory function
 *
 * Description: Prints the times table from 0 to n
 *
 * @n: The limit of the times table
 *
 * Return: Always void (success)
 */

void print_times_table(int n)
{
	int i,
	    j,
	    result;

	for (i = 0; i <= n; i++)
	{
		if (n > 15)
		{
			break;
		};
		putchar('0');
		result = i;
		for (j = 0; j <= n; j++)
		{
			show(result);
			result = result + i;
		};

		putchar('\n');
	};
}

void show(int result)
{
	int hunds,
	    tens;

	putchar(' ');
	tens = result / 10;
	if (tens > 0)
	{
		hunds = tens / 10;
		if (hunds > 0)
		{
			putchar(hunds + '0');
		} else
		{
			putchar(' ');
		};
		putchar(tens % 10 + '0');
	} else
	{
		putchar(' ');
	};
	putchar(result % 10 + '0');
}
