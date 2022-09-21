#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The host string that will hold the result
 * @src: The added string
 * Return: Always the concatenated string
 */

int main(void)
{
	char dest[100] = "Hello";
	char src[3] = "Hey",
	     result[100];

	result = strcat(dest, src);

	printf("This is %s\n", result);

	return (0);
}
