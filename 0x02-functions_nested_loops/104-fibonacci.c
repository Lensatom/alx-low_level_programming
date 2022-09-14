#include "stdio.h"

/**
 * main - entry point
 *
 * Description: A program that prints all the fibonacci sequece till the 98th term
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	unsigned long sum,
	    fib1 = 0,
	    fib2 = 1;

	for (i = 0; i < 98; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		if (i < 99)
		{
			printf(", ");
		};
		fib1 = fib2;
		fib2 = sum;
	};
	printf("\n");

	return (0);
}
