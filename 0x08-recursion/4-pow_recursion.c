#include "main.h"

/**
 * _pow_recursion - a function calculates value of x raised to power of y
 * @x: value to be calculated
 * @y: returns error if negative and returns 1 if 0
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
