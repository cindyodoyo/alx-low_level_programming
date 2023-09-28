#include "main.h"

/**
 * flip_bits - function counts the number of bits
 * @n: pointer to first number
 * @m: pointer to second number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor)
	{
		counter += xor & 1;
		xor >>= 1;
	}

	return (counter);
}
