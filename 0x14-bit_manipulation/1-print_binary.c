#include "main.h"

/**
 * print_binary - functions prints the binary of a decimal number
 * @n: number to print binary
 */

void print_binary(unsigned long int n)
{
	int c, count = 0;
	unsigned long int current;

	c = 63;

	while (c >= 0)
	{
		current = n >> c;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
		c--;
	}

	if (!count)
		_putchar('0');
}                                                                                                 
