#include "main.h"

/**
 * main - entry point
 *
 * Description: A program that prints the alphabets ten times
 *
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}

/**
 * print_alphabet_x10 - asseccory function
 *
 * Description: The funtion that prints the alphabets
 *
 * Return: always void (success)
 */

void print_alphabet_x10(void)
{
	int i,
	    j;

	for(i = 0; i < 10; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		};
		putchar('\n');
	};

	return;
}
