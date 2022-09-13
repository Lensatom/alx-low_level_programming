#include "main.h"

/**
 * main - entry point
 *
 * Description: check if a character is an alphabet or not
 *
 * Return: always 0 (success)
 */

int main()
{
	int c,
	    output;
	
	c = 'a';
	output =  _isalpha(c);
	putchar(output + '0');
	putchar('\n');

	return (0);
}

/**
 * _isalpha - asseccory function
 *
 * Description: returns a value for if the parameter is an alphabet or not
 *
 * Return: 0 or 1 (success)
 */

int _isalpha(int c)
{
	int output;

	output = isalpha(c);
	if (output > 0)
	{
		return (1);
	} else
	{
		return (0);
	};
}
