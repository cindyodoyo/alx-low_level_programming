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

	i = 0;
	for (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	for (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
