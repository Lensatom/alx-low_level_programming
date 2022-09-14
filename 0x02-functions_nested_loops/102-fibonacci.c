#include "stdio.h"

int main(void)
{
	int i,
	    fib1,
	    fib2;

	for (i = 0; i < 50; i++)
	{
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
		putchar(sum);
		if (i < 49)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
}
