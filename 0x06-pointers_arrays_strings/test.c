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
	char src[3] = "Hey";

	strcat(dest, src);
	printf("%s\n", dest);

	return (0);
}
