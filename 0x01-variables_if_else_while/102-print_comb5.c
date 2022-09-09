#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A program that prints combination of teo digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = b + 1; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a < '9' || b < '8')
					{
						putchar(',');
						putchar(' ');
					};
				};
			};
		};
	};
	putchar('\n');

	return (0);
}
