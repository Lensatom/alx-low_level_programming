#include "main.h"

/**
 * _strcpy - A function that copies an array and prints in to another address
 * @dest: The destination array
 * @src: The source array
 * Return: Always the modified destination array (success)
 */

int _atoi(char *s)
{
	int i = 0,
	    j,
	    start,
	    end,
	    negative,
	    positive,
	    len = strlen(s);

	while (i < len)
	{
		if (s[i] == '+')
			positive++;
		else if (s[i] == '-')
			negative++;
		else if (isdigit(s[i]))
		{
			start = i;
			j = i;
			while (1)
			{
				if (!(isdigit(s[j])))
					break;
				j++;
			};
			end = j - 1;
		};
	};

	return (atoi(s[start..end]));
}
