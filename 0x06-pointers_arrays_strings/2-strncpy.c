#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @src: the source of string
 * @dest: the destination of string
 * @n: The length of string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

