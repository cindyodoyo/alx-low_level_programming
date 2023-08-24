#include "main.h"
/**
 * _strcat - a function that concatenates strings
 * @dest: pointer to the destination where the string will be concatenated
 * @src: pointer to the string that will be concatenated
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (j = 0; src[j] != '\0'; j++)
		srclen++;
	for (i = 0; i <=srclen; i++)
		dest[destlen + i] = src[i];
	dest[i + j] = '\0';
	return (dest);
}
