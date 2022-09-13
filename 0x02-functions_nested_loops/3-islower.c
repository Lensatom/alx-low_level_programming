#include "main.h"

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
}
