#include "main.h"

/**
 * set_bit - function sets bit index to 1
 * @num: pointer to the changing number
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= (sizeof(num) * 8))
		return (-1);

	*num |= 1UL << index;

	return (1);
}
