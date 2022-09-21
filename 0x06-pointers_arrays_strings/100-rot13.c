#include "main.h"

/**
 * rot13 - A function that encodes a string into ROT13
 * @str: The string to be encoded
 * Return: The encoded string
 */

char *rot13(char *str)
{
	char sub[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM",
	     val[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,
	    j,
	    len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == val[j])
				str[i] = sub[j];
		};
	};

	return (str);
}
