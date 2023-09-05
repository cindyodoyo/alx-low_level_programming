#include "main.h"

/**
 * _puts -  name of the function you need to implement.
 * @str: input parameter to the function array (string)to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
