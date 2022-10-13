#include "variadic_functions.h"

/**
 * print_numbers - Print numbers seperated by string
 * @seperator: The seperating string
 * @n: The fixed parameter
 * Return: Always nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	/* Getting params out */
	va_start(ap, n);
	/* Looping and adding sumbers to sum */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		/* Check if there is a seperator */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
