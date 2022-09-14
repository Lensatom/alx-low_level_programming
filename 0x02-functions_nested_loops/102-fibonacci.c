#include "stdio.h"

/**
 * main - entry point
 *
 * Description: Function that prints the first 50 fibonacci sequence
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long sum,
	    fib1 = 0,
	    fib2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		if (i < 49)
		{
			printf(" ,");
		};
		fib1 = fib2;
		fib2 = sum;
	};
	printf("\n");

	return (0);
}
