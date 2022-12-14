#include "main.h"

/**
 * infinite_add - A function that adds two numbers
 * @n1: the first number to add
 * @n2: the second number to add
 * @r: the buffer to store the result in
 * @size_r: the size of the buffer
 * Return: Always the added number of 0 if size_r is small
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i,
	    j,
	    k,
	    l,
	    m,
	    n;

	for (i = 0; n1[i]; i++)
		;
	for (j = -0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10;
		r[k] = n % 10 + '0';
	};
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	};

	return (r);
}
