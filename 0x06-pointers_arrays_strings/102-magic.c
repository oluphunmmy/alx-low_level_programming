#include "stdio.h"
/**
 * main - program prints a[2]
 * Return: void
 */

int main(void)
{
	int n;
	int a[5];
	*p;

	a[2] = 1024;
	p = &n;
/*
*take note:
* - you are not allowed to use a
*   - you are not allowed to modify p
*   - only one statement
*   - you are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
 /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);

printf("a[2] = %d\n", a[2]);
}
