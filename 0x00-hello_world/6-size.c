#include <stdio.h>

/**
 * main -entry point
 *
 * Description: Printing sizes of various types based on machine
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int c = sizeof(char);
	int i = sizeof(int);
	int li = sizeof(long int);
	int lli = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);

	return (0);
}
