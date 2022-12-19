#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
