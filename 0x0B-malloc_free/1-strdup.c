#include "main.h"

/**
 * _strdup - A function that creates a duplicate of a string with malloc space
 * @str: The string to be duplicated
 * Return: A pointer to the duplicate (success) NULL (error)
 */

char *_strdup(char *str)
{
	char *str_dup;
	int leng;

	/** Is str empty **/
	if (str == NULL)
		return NULL;
	/** Is str not empty **/
	leng = strlen(str);
	str_dup = (char *)malloc(sizeof(char) * leng);
	/** Is malloc not successful */
	if (str_dup == NULL)
		return (NULL);
	/** Is malloc successful **/
	for (i = 0; i < leng; i++)
		*(str_dup + i) = str[i];

	return (str_dup);
}
