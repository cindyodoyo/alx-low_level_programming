#include "main.h"
/**
 * _strcat - a function that concatenates strings
 * @dest: pointer to the destination where the string will be concatenated
 * @src: pointer to the string that will be concatenated
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		j++
	}
	
	dest[i] = '\0';
	return (dest);
}
