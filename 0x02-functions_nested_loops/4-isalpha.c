#include "main.h"

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
