#include "main.h"

/**
 * _puts_recursion - function that takes the pointer to a string as an argument
 * *s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
