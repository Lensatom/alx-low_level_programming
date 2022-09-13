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

	for (; i <= '9'; i++)
	{
		result = 0;
		for (; j <= 9; j++)
		{
			result = result + j;
			tens = result / 10;
			if (tens > 0)
			{
				putchar(tens);
			}
			output = result % 10;
			putchar(output);
			putchar(',');
			putchar(' ');
			if (tens == 0)
			{
				putchar(' ');
		};
		putchar('\n');
	};
}
