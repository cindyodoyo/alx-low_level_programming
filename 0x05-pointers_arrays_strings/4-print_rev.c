#include "main.h"

/**
 * print_rev - a function that prints prints a string in reverse
 * @s: a string to printed
 * Return: void
 */
Void print_rev(char *s)
{
	Int z;
	Int revs = 0;

	for (z = 0; s[z] != '\0' z++)
		revs++

			for (z = revs - 1; z >= 0; z--)
				_putchar(s[z]);
	_putchar('\0');
}
