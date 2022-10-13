#include "variadic_functions.h"

/**
 * print_numbers - Print strings seperated by string
 * @separator: The seperating string
 * @n: The fixed parameter
 * Return: Always nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	/* Getting params out */
	va_start(ap, n);
	/* Looping and adding sumbers to sum */
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		/* Check if there is a seperator */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
