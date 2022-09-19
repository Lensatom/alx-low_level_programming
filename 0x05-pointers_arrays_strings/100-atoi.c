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
	int i = 0,
	    start,
	    end,
	    negative,
	    len = strlen(s),
	    num;

	while (i < len)
	{
		if (s[i] == '-')
			negative++;
		else if (isdigit(s[i]))
		{
			start = i;
			end = i;
			while (1)
			{
				if (!(isdigit(s[end])))
					break;
				end++;
			};
		};
	};
	if (negative % 2 == 1)
		num = get_number(s, start, end) * -1;
	num = get_number(s, start, end);

	return (num);
}

/**
 * get_number - The function that gets the actual number from the string
 * @s: the string
 * @start: the number start point
 * @end: the number end point (exclusive)
 * Return: the real number
 */

int get_number(char *s, int start, int end)
{
	int i,
	    j,
	    hrcy,
	    pow = 1,
	    num = 0;
	char *single;

	hrcy = end - start;
	for (i = 0; i < hrcy; i++)
	{
		for (j = 0; j < hrcy; j++)
			pow *= 10;
		single = &s[start + i];
		num = num + atoi(single) + pow;
	};

	return (num);
}
