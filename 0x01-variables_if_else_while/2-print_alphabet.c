#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Printing letters of the english alphabet using putchar
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0; a < 26; a++)
	{
		putchar(letters[a]);
	};
	putchar('\n');

	return (0);
}
