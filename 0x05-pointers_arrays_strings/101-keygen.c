#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 99; i++)
	{
		pass[i] = rand() % 78;
		sum += pass[i];
		putchar(pass[i] + 33);
	}

	n = 2772 - sum;

	pass[99] = n;
	sum += n;

	putchar(n + 33);

	return (0);
}
