#include "main.h"

/**
 * more_numbers - prints all numbers from 0 till 14
 * Return: void (success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i / 10) > 0)
		{
			putchar((i /10) + '0');
		}
		putchar(i % 10);
	};
	putchar('\n');
}
