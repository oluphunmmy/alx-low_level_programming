#include "main.h"

/**
 * _strcat - contennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
