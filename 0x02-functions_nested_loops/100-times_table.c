#include "main.h"

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
	    result,
	    hunds,
	    tens,
	    output;

	for (i = 0; i <= n; i++)
	{
		result = 0;
		for (j = 0; j <= n; j++)
		{
			tens = result / 10;
			if (tens > 0)
			{
				hunds = tens / 10;
				if (hunds > 0)
				{
					putchar(hunds + '0');
				} else if (j > 0)
				{
					putchar(' ');
				};
				putchar(tens + '0');
			} else if (j > 0)
			{
				putchar(' ');
				putchar(' ');
			};
			output = result % 10;
			putchar(output + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			};
			result = result + i;
		};
		putchar('\n');
	};
}
