#inlude "main.h"

/**
 * _sqrt_helper - function that calculates start and end
 * _sqrt_recursion - function that calculates the square root of a number
 * @n: number to be calculated
 * @start: where calculation starts
 * @end: where calculation ends
 * Return: n
 */

int _sqrt_helper(int n, int start, int end);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 1, n));
}

int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}

	if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (-1);
		}

		return (_sqrt_helper(n, mid + 1, end));
	}

	return (_sqrt_helper(n, start, mid - 1));
}
