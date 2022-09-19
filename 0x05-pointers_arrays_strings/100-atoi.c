#include "main.h"

/**
 * _strcpy - A function that copies an array and prints in to another address
 * @dest: The destination array
 * @src: The source array
 * Return: Always the modified destination array (success)
 */

int _atoi(char *s)
{
	int cleaned[200];
	char num[10] = "0123456789";
	int i,
	    j,
	    positive = 0,
	    negative = 0,
	    ci = 0,
	    len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == "+")
			positive++;
		else if (s[i] == "-")
			negative++;
		else
		{
			for (j = 0; j < 10; j++)
			{
				if (s[i] == num[j])
				{
					cleaned[ci] = s[i];
					ci++;
				};
			};
		};
	};
	s = cleaned;

	return (atoi(s));
}
