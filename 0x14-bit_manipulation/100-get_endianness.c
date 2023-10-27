#include "main.h"

/**
 * get_endianness - functions sees if a machine is endian
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *) &b;

	return (*c);
}
