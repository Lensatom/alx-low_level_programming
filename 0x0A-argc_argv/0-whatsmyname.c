#include "stdio.h"
#include "string.h"
#include "main.h"

/**
 * main - A program that prints this filename
 * @argc: The length of commands in the command line
 * @argv: The items in the command ijnthe command line
 * Return: Always void (success)
 */

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);
}
