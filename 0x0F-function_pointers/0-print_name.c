#include "function_pointers.h"

/**
 * print_name - Print a name using a pointer to a function
 * @name: The name to be printed
 * @f: The pointer to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
