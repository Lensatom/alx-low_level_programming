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
	int num,
	    tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
	};
	for (; *n1, n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	};
	for (; n2, n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	};
}
