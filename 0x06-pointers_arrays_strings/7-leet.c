#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @str: The string to be encoded
 * Return: The encoded string
 */

char *leet(char *str)
{
	char rmv[5] = "AEOTL",
	     add[5] = "43071";
	int i,
	    j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (toUpper(str[i]) == rmv[j])
				str[i] = add[j];
		};
	};

	return (str)
}
