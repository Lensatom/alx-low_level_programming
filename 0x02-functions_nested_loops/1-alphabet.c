#include "main.h"

/**
 * main - entry point
 *
 * Description: Proram that prints letters of the alphabet
 *
 * Return: always 0 (success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - assecory function
 *
 * Description: Program printing letters
 *
 * Return: always void (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	};
	putchar('\n');
}
