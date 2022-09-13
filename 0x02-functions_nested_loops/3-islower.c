#include "main.h"

/**
 * main - entry point
 *
 * Description: check if a letter is in lower case or upper case
 *
 * Return: always 0 (success)
 */

int main()
{
	int c,
	    output;
	
	c = 'a';
	output =  _islower(c);
	putchar(output + '0');
	putchar('\n');

	return (0);
};

/**
 * _islower - assccory function
 *
 * Description: returns a value for if the letter is lowercase or not
 *
 * Return: 0 or 1 (success)
 */

int _islower(int c)
{
	int output;

	output = islower(c);
	if (output > 0)
	{
		return (1);
	} else
	{
		return (0);
	};
};
