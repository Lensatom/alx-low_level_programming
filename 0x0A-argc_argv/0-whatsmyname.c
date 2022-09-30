#include "main.h"

/**
 * my_name - A program that prints this filename
 * @argc: The length of commands in the command line
 * @argv: The items in the command ijnthe command line
 * Return: Always void (success)
 */

char my_name(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (argv[0]);
}
