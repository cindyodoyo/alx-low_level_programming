#include "main.h"
/**
 *  print_rev - function that prints a string in reverse
 *  @s: string to be printed
 *  Return: void
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s -= len;

	char rev;

	i = 0;
	for (i < len / 2)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		rev = s[len - i - 1];
	}
	_putchar('\n');
}
