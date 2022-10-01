#include "main.h"

/**
 * rot13 - A function that encodes a string into ROT13
 * @str: The string to be encoded
 * Return: The encoded string
 */

char *rot13(char *str)
{
	char sub[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM",
	     val[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,
	    j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == val[j])
			{
				str[i] = sub[j];
				break;
			};
		};
	};

	return (str);
}
