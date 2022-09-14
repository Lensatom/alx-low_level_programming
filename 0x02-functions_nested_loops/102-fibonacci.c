#include "stdio.h"

void main(void)
{
	int i,
	    sum,
	    fib1 = 1,
	    fib2 = 2;

	putchar(fib1 + '0');
	putchar(fib2 + '0');
	for (i = 0; i < 50; i++)
	{
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
		putchar(sum);
		if (i < 49)
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
}
