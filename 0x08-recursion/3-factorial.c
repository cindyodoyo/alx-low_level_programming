#include "main.h"

/**
 * factorial - a function that calculates the facturial of a given number
 * @n: calculate the facturial recursively
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
