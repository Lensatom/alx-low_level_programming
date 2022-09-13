#include "main.h"

/**
 * times_table - accessory function
 *
 * Description: Prints the tines table from 0 to 9
 *
 * Return: Always void (success)
 */

void times_table(void)
{
	int i = 0,
	    j = 0,
	    result,
	    tens,
	    output;

	for (; i <= 9; i++)
	{
		result = 0;
		for (; j <= 9; j++)
		{
			tens = result / 10;
			if (tens > 0)
			{
				putchar(tens + '0');
			};
			output = result % 10;
			putchar(output + '0');
			putchar(',');
			putchar(' ');
			if (tens == 0)
			{
				putchar(' ');
			};
			result = result + i;
		};
		putchar('\n');
	};
}
