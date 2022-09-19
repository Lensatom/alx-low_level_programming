#include "main.h"

int get_number(char*, int, int);

/**
 * _strcpy - A function that copies an array and prints in to another address
 * @dest: The destination array
 * @src: The source array
 * Return: Always the modified destination array (success)
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	char s_cpy = s;

	while (*s_cpy != '\0' && (*s_cpy < '0' || *temp > '9'))
	{
		if(*s_cpy == '-')
			sign = sign * -1;
		s_cpy++;
	};
	if (*s_cpy != '\0')
	{
		do {
			num = (num * 10) + (*s_cpy - '0');
			s_cpy++
		} while (*s_cpy >= '0' && *s_cpy <= '9');
	};

	return (num * sign);
}
