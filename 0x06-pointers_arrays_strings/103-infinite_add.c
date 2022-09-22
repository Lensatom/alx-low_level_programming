#include "main.h"

/**
 * infinite_add - A function that adds two numbers
 * n1: the first number to add
 * n2: the second number to add
 * r: the buffer to store the result in
 * size_r: the size of the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int add;

	add = n1 + n2;
	if (sizeof(add) <= size_r)
		r = add;
	else
		r = 0;

	return (r)
}
