#include <unistd.h>

/**
 * _putchar - A function that prints characters
 * @c - The character to be printed
 * Return - 1 (success) 0 (fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
