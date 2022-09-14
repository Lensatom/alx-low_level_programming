#include "main.h"

/**
 * print_to_98 - accessory function
 *
 * Description: prints every number from n to 98
 *
 * @n: The nuber to start from on the count to 98
 *
 * Return: Always void (success)
 */

void print_to_98(int n)
{
	int i,
	    tens,
	    output;

	for (i = n; i < 99; i++)
	{
		if (i < 0)
		{
			putchar('-');
		};
		tens = abs(i) / 10;
		if (tens > 0)
		{
			hunds = tens / 10;
			if (hunds > 0)
			{
				putchar(hunds + '0');
			};
			tens = tens % 10;
			putchar(tens + '0');
		};
		output = abs(i) % 10;
		putchar(output + '0');
		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
}
