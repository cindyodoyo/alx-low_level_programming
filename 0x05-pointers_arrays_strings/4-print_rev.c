#include "main.h"

/**
 * print_rev - a function that prints prints a string in reverse
 * @s: a string to printed
 * Return: void
 */
void print_rev(char *s)
{
	char revs = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i >= counter; i++)
	{
		counter--;
		revs = s[i];
		s[i] = s[counter];
		s[counter] = revs;
	}
	_putchar('\n');
}
