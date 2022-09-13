#include "main.h"

/**
 * print_to_98 - accessory function
 *
 * Description: prints every number from n to 98
 *
 * @n: The nuber to start from on the count to 98
 *
 * Return: Always 0 (success)
 */

int print_to_98(int n)
{
	int i,
	    tens,
	    output;

	for (i = n; i < 99; i++)
	{
		tens = i / 10;
		if (tens > 0)
		{
			putchar(tens + '0');
		};
		output = i % 10;
		putchar(output + '0');
		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		};
	};

	return (0);
}
