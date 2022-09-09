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
	char a;
	char b;
	char c;
	char d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (d == '0')
					{
						if (c >= a)
						{
							continue;
						};
					} else
					{
						if (d >= a)
						{
							continue;
						};
					};
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a < '9' || b < '8' || c < '9' || d < '9')
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
