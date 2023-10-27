#include "main.h"

/**
 * get_bit - function gives the value of a bit
 * @num: pointer of number to search
 * @index: bit index
 * Return: value of the bit
 */

int get_bit(unsigned long int num, unsigned int index)
{
	if (index >= (sizeof(num) * 8))
		return (-1);

	return ((num >> index) & 1);
}
