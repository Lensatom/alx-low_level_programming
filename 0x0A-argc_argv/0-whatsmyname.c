#include "stdio.h"
#include "string.h"

/**
 * main - A program that prints this filename
 * @argc: The length of commands in the command line
 * @argv: The items in the command ijnthe command line
 * Return: Always void (success)
 */

void main(int argc, char *argv[])
{
	int i;
	char filename[999] = argv[0];

	for (i = 0; i < strlen(filename); i++)
		_putchar(filename[i];
	printf("%s\n", argv[0]);
}
