#include "main.h"

/**
 * _islower - returns a value for if the letter is uppercase or not
 *
 * @c: the undecided letter type
 *
 * Return: 0 or 1 (success)
 */

int _isupper(int c)
{
	int decider,
	    output;

	decider = islower(c);
	if (decider > 0)
	{
		output = 1;
	} else
	{
		output = 0;
	};

	return (output);
}
