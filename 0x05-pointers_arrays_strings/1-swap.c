#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: variable storing the first value
 * @b: variable storing the second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
