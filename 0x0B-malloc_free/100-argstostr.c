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
	int i,
	    j,
	    k,
	    m,
	    leng,
	    space;

	if (ac <= 0 || av == NULL)
		return (NULL);
	/** Allocating enough space **/
	space = 0;
	for (m = 0; m < ac; m++)
		space = space + strlen(av[m]);
	/** Making memory available for '\n' **/
	space = space + ac;
	cat = (char *)malloc(sizeof(char) * space);
	if (cat == NULL)
		return (NULL);
	k = -1;
	while (i < space)
	{
		k++;
		leng = strlen(av[k]);
		for (j = 0; j <= leng; j++)
		{
			if (j == leng)
				cat[i] = '\n';
			else
				cat[i] = av[k][j];
			i++;
		}
	};

	return (cat);
}
