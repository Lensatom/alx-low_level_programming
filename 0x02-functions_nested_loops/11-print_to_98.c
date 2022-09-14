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
	int i = 0,
	    tens,
	    output;

	for (; i < 99; i++)
	{
		if (n < 0)
		{
			putchar('-');
		};
		tens = abs(i) / 10;
		if (tens > 0)
		{
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
