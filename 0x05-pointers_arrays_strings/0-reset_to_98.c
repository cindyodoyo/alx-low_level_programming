#include <stdio.h>

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: Pointer to an integer to be updated.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	int num = 42;

	printf("Before: %d\n", num);

	reset_to_98(&num);

	printf("After: %d\n", num);

	return (0);
}
