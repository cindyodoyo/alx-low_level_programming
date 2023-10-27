#include "main.h"

/**
 * clear_bit - function gives the value of a bit
 * @num: pointer to the changing number
 * @index: index of the bit
 * Return: 1 success, -1 failure
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > 63)
		return (-1);

	*num = (~(1UL << index) & *num);
	return (1);
}
