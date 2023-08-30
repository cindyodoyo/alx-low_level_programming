#inlude "main.h"

/**
 * _sqrt_recursion - function that calculates the square root of a number
 * @n: number to be calculated
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{return (n);
	}

	return (_sqrt_helper(n, 1, n));
}
