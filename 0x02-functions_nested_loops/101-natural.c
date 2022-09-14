#include "main.h"

/**
 * main - Lists all the numbers below 1024 that are multiples of either 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i,
	    output = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			output += i;
		};
	}

	printf("%d\n", output);

	return (0);
}
