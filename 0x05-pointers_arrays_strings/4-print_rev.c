#include "main.h"
/**
 *  print_rev - function that prints a string in reverse
 *  @s: string to be printed
 *  Return: void
 */
void print_rev(char *s)
{
	int longi = o;

	int 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n')
}
