#include "main.h"

/**
 * argstostr -  A function that cancatenates all it arguments
 * @ac: The length of the arguments (argc)
 * @av: The arguments (argv)
 * Return: A pointer to the concatenated (success) NULL (fail)
 */

char *argstostr(int ac, char **av)
{
	char *cat;
	int i;

	if (ac <= 0 || av == NULL)
		return (NULL);
	cat = (char *)malloc(sizeof(char) * ac);
	for (i = 0; i < ac; i++)
		*(cat + i) = *av[i];

	return (cat);
}
