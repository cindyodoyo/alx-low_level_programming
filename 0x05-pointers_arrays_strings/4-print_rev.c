#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: a string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i, string_length = 0;

	while (s[i] != '\0')
	{
		string_length++;
		i++;
	}

	for (i = string_length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
