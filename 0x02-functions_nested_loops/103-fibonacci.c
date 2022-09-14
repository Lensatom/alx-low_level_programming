#include "main.h"

/**
 * main - Prints only even numbers in the fibonacci series
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float output;

	while (true)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
    {
			break;
    }
		if ((fibsum % 2) == 0)
			output += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", output);

	return (0);
}