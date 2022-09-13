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
	    output;

	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			output = j + '0';
			putchar(output);
			putchar(',');
			putchar(' ');
			putchar(' ');
			putchar(' ');

			j = j + i;
		};
		putchar('\n');

		i++;
	};
}
