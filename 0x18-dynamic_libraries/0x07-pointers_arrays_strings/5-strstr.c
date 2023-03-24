#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
