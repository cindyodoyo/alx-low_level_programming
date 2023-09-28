#include "main.h"

/**
 * binary_to_uint - function converts binary number to an unsigned int
 * @b: pointer to string containing the binary number
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rtn_val = 0;

	if (!b)
		return (0);

	while (*b)
	{
		rtn_val <<= 1;
		if (*b == '1')
			rtn_val |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}

	return (rtn_val);
}
