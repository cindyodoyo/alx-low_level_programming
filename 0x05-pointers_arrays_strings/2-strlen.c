#include "main.h"

/**
 * _strlen - a function that returns string length
 * @s: a string to be counted
 * Return: length of a string
 */
int _strlen(char *s)
{
	int z, string_count = 0;

	for (z = 0; s[z] != '\0'; z++)
		string_count++;
	return (string_count);
}
