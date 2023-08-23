#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: a string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
	putchar (\n);
}
