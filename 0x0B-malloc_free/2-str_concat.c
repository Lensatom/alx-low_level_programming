#include "main.h"

/**
 * str_concat - Cancatenates two strings into another array
 * using malloc for memory allocation
 * @s1: The first string
 * @s2: The second string
 * Return: The resulting concatenated string (success)
 * NULL (fail)
 */

char *str_concat(char *s1, char *s2)
{
	char *host;
	int leng1,
	    leng2,
	    i;

	/** Is s1 and s2 empty **/
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	/** Is either or both not empty **/
	leng1 = strlen(s1);
	leng2 = strlen(s2);
	leng = strlen(s1) + strlen(s2);
	if (leng1 == NULL)
	{
		host = (char *)malloc(sizeof(char) * (leng2 + 1));
		for (i = 0; i < leng2; i++)
			*(host + i) = str2[i];
	}
	else if (leng2 == NULL)
	{
		host = (char *)malloc(sizeof(char) * (leng2 + 1));
		for (i = 0; i < leng1; i++)
			*(host + i) = str1[i];
	}
	else
	{
		host = (char *)malloc(sizeof(char) * (leng + 1));
		for (i = 0; i < leng1; i++)
			*(host + i) = str1[i];
		for (i = leng1; i < leng1 + leng2; i++)
			*(host + i) = str2[i - leng1];
	}

	return (host);
}
