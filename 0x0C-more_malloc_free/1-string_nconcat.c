#include "main.h"

/**
 * string_nconcat - Contatenates two string with n bytes from the guest stribg
 * @s1: Yhe host string
 * @s2: The guest string
 * @n: The number of bytes to ve removed from s2
 * Return: A pointer to the newly allocated memory (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *home;
	unsigned int i,
		     leng;
	
	if (n > strlen(s2))
		n = strlen(s2);
	leng = strlen(s1) + n;
	home = (char *)malloc(sizeof(char) * leng + 1);
	/* Check if malloc worked */
	if (home == NULL)
		return NULL;
	for (i = 0; i < strlen(s1); i++)
		*(home + i) = s1[i];
	for (i = 0; i < n; i++)
		*(home + strlen(s1) + i) = s2[i];

	return (home);
}
