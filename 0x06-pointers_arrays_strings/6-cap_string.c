#include "main.h"

/**
 * cap_string - Capitalizes each word in a string
 * @str: The input string
 * Return: Always the capitalixed string
 */

char *cap_string(char *str)
{
	char sprts[13] = " \t\n,;.!?\"(){}";
	int len,
	    i,
	    j;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i] == sprts[j]) &&
(toupper(str[i + 1]) >= 'A' && toupper(str[i + 1]) <= 'Z'))
				str[i + 1] = toupper(str[i + 1]);
		}
	}

	return (str);
}
