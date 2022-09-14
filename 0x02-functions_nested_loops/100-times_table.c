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
		if (n > 15)
		{
			break;
		};
		result = i;
		putchar('0');
		putchar(',');
		for (j = 1; j <= n; j++)
		{
			putchar(' ');
			tens = result / 10;
			if (tens > 0)
			{
				hunds = tens / 10;
				hunds > 0 ? putchar(hunds + '0') : putchar(' ');
				tens = tens % 10;
				putchar(tens + '0');
			} else {
				putchar(' ');
				putchar(' ');
			};
			output = result % 10;
			putchar(output + '0');
			if (j < n)
			{
				putchar(',');
			};
			result += i;
		};
		putchar('\n');
	};
}
